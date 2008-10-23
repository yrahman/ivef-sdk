/*
 *  iListenApplication.cpp
 *
 *  iListen is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  iListen is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  Created by Lukassen on 11/06/08.
 *  Copyright 2008
 *
 */
 
#include <cstdlib>

#include "ilistenapplication.h"

iListenApplication::iListenApplication( int & argc, char ** argv )
        :QApplication(argc, argv, false) {

    // handle the commandline args
    // add default command line m_options
    m_options.append( CmdLineOption( CmdLineOption::BOOLEAN, "help",        "show this information and exit." ) );
    m_options.append( CmdLineOption( CmdLineOption::TEXT,    "host",        "server ip nummer or hostname (default localhost)." ) );
    m_options.append( CmdLineOption( CmdLineOption::INTEGER, "port",        "port for IVEF XML connection (default 8043)." ) );
    m_options.append( CmdLineOption( CmdLineOption::TEXT,    "user",        "user name (default guest)." ) );
    m_options.append( CmdLineOption( CmdLineOption::TEXT,    "password",    "password (default guest)." ) );
    m_options.append( CmdLineOption( CmdLineOption::TEXT,    "infile",      "read from file, presence negates host:port connection" ) );
    m_options.append( CmdLineOption( CmdLineOption::TEXT,    "outfile",     "write to file, cannot be used in conjunction with infile" ) );
    m_options.append( CmdLineOption( CmdLineOption::TEXT,    "filteron",    "vesseldata attribute for filter e.g. --filteron=MMSI" ) );
    m_options.append( CmdLineOption( CmdLineOption::TEXT,    "filterval",   "vesseldata attribute value for filter e.g. --filterval=2442" ) );
    m_options.append( CmdLineOption( CmdLineOption::BOOLEAN, "version",     "show version information and exit." ) );
    m_options.append( CmdLineOption( CmdLineOption::BOOLEAN, "slipstream",  "use compression for the transmission." ) );

    // parse command line m_options
    m_options.parse( argc, argv );

    // is there a request for some version info?
    if ( m_options.getBoolean( "version" ) ) {
        std::cout << "\n iListen 0.0.3\n----------------------------------------\n\n an example implementation for an IVEF Listener (hence iListen).\n\n Copyright 2008\n"  << std::endl;
        std::exit(0);
    }
            
    // setup the parser
    m_streamHandler = new IVEFStreamHandler(&m_parser);
    // and the printer
    connect( &m_parser, SIGNAL( signalMSG_VesselData(MSG_VesselData)), this, SLOT( printVesselData(MSG_VesselData) ));
            
    // startup timer, to allow the event loop to start
    QTimer *timer = new QTimer( 0 ); // we leak one timer here, is acceptable
    timer->setInterval( 100 );
    timer->setSingleShot( true );
    connect( timer, SIGNAL( timeout() ), this, SLOT( slotStart() ) );
    timer->start();
}

void iListenApplication::slotStart( void ) {
    std::cout << "iListen started" << std::endl;
    QString host = "localhost";
    m_options.getText( "host", host );

    int port = 8043;
    m_options.getInteger( "port", port );

    bool slipstream = m_options.getBoolean( "slipstream" );

    QString user = "guest";
    m_options.getText( "user", user );

    QString password = "guest";
    m_options.getText( "password", password );

    QString attr, val;
    if (m_options.getText("filteron", attr) && m_options.getText("filterval", val)) {
        m_filter = attr + " = " + val;
    } else {
	m_filter = "";
    }

    QString fileName("");
    if (m_options.getText("infile", fileName)) {
        // read from file
        IVEFFileHandler handler(&m_parser);
        handler.readFiles(QStringList(fileName));

        // we are finished with file parsing
        std::exit(0);
    } else {
        if (m_options.getText("outfile", fileName)) {
            // connect to server
            m_streamHandler->connectToServer(host, port, user, password, fileName, slipstream);
        } else {
            // empty file means no logfile
            m_streamHandler->connectToServer(host, port, user, password, "", slipstream);
        }
    }
}
            
void iListenApplication::printVesselData( MSG_VesselData obj ) {
            
   //std::cout << "----------------------------------------\n";

   for (int i=0; i < obj.getBody().countOfVesselDatas();i++) {
	VesselData vessel = obj.getBody().getVesselDataAt(i);
	QString str = vessel.toString("");

        if ((m_filter == "") || (str.contains(m_filter))) { 
             std::cout << str.toLatin1().data();
	}
   }
}
