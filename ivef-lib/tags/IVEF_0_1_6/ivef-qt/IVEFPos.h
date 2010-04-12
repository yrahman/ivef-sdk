/* 
 *  Pos
 *
 *  Pos is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU Lesser General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  Foobar is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY ); without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 **********************************************************************************
 *  WARNING: THIS CODE WAS GENERATED DO NOT MODIFY, CHANGE THE XSD INSTEAD
 *  Generated by xsd2code on Fri Mar 26 13:53:21 2010.
 **********************************************************************************
 *  Copyright 2010
 *
 */

#ifndef __POS_H__
#define __POS_H__

#include <QtCore>

//-----------------------------------------------------------
//! \brief       Class definition of Pos
//!
//! 
//!

class Pos : public QObject { 
    Q_OBJECT

public:
    //!constructor
    //!
    Pos();
    //!copy constructor
    //!
    Pos(const Pos&);
    //!= operator
    //!
    Pos & operator=(const Pos&/*val*/);
    //!              sets the Lat: Latitude (WGS84) in degrees. (+/- 90 degrees;\n
    //!              North = positive; South = negative) Examples:\n
    //!              \n
    //!              -90deg (south) =   -90.0000000\n
    //!              0deg0min1sec (north) =    0.0000016\n
    //!              50deg50min (north)  = 50.8333333
    //!
    void setLat(float val);

    //!              gets the Lat: Latitude (WGS84) in degrees. (+/- 90 degrees;\n
    //!              North = positive; South = negative) Examples:\n
    //!              \n
    //!              -90deg (south) =   -90.0000000\n
    //!              0deg0min1sec (north) =    0.0000016\n
    //!              50deg50min (north)  = 50.8333333
    //!
    //! \return     float
    //!
    float getLat() const;

    //!              sets the Long: Longitude (WGS84) in degrees. (+/- 180 degrees; East = positive; West = negative). Examples:\n
    //!              \n
    //!              -180deg (west) =   -180.0000000\n
    //!              0deg0min1sec (east) =       0.0000016
    //!
    void setLong(float val);

    //!              gets the Long: Longitude (WGS84) in degrees. (+/- 180 degrees; East = positive; West = negative). Examples:\n
    //!              \n
    //!              -180deg (west) =   -180.0000000\n
    //!              0deg0min1sec (east) =       0.0000016
    //!
    //! \return     float
    //!
    float getLong() const;

    //!              generates XML of this object including attributes and child elements
    //!
    //! \return     QString
    QString toXML();

    //!              generates output of this object including attributes and child elements
    //!
    //! \return     QString
    QString toString();

    //!              generates output of this object including attributes and child elements
    //!
    //! \return     QString
    QString toString(QString lead);

    //!              encodes a string returning the encoded string
    //!
    //! \return     QString
    QString encode(QString str);


private:
    float m_lat;
    float m_long;

}; 

#endif
