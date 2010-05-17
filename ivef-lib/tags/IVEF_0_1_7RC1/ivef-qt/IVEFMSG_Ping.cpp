
#include "IVEFMSG_Ping.h"

// Constructor
MSG_Ping::MSG_Ping() {

    m_headerPresent = false;
    m_bodyPresent = false;
}

// copy constructor
MSG_Ping::MSG_Ping(const MSG_Ping &val) : QObject() {

    m_headerPresent = val.m_headerPresent;
    m_header = val.m_header;
    m_bodyPresent = val.m_bodyPresent;
    m_body = val.m_body;
}

// assignement
MSG_Ping & MSG_Ping::operator=(const MSG_Ping &val) {

    m_headerPresent = val.m_headerPresent;
    m_header = val.m_header;
    m_bodyPresent = val.m_bodyPresent;
    m_body = val.m_body;
    return *this;
}

// String encoder
QString MSG_Ping::encode( QString str) const {

    // replace characters that are illigal in XML with their encodings
    str.replace('&', "&amp;");
    str.replace('<', "&lt;");
    str.replace('>', "&gt;");
    str.replace('"', "&quot;");
    return str;
}

// setter for MSG_Ping
bool MSG_Ping::setHeader(Header val) {

    m_headerPresent = true;
    m_header = val;
      return true;
}

// getter for MSG_Ping
Header MSG_Ping::getHeader() const {

    return m_header;
}

// setter for MSG_Ping
bool MSG_Ping::setBody(Body val) {

    m_bodyPresent = true;
    m_body = val;
      return true;
}

// getter for MSG_Ping
Body MSG_Ping::getBody() const {

    return m_body;
}

// Get XML Representation
QString MSG_Ping::toXML() const {

    QString xml = "<MSG_Ping";
    QString dataMember;
    xml.append(">\n");
    // check for presence of required data member
    if ( m_headerPresent) {
        dataMember = m_header.toXML();
        if (dataMember != NULL) {
            xml.append( dataMember );
        } else {
            return NULL;
        }
    } else {
        return NULL;
    }
    // check for presence of required data member
    if ( m_bodyPresent) {
        dataMember = m_body.toXML();
        if (dataMember != NULL) {
            xml.append( dataMember );
        } else {
            return NULL;
        }
    } else {
        return NULL;
    }
    xml.append( "</MSG_Ping>\n");
    return xml;
}

// Get String Representation
QString MSG_Ping::toString() {

    return toString("");
}

// Get String Representation with a lead
QString MSG_Ping::toString(QString lead) {

    QString str = lead + "MSG_Ping\n";
    str.append( m_header.toString(lead + "    ") );
    str.append( m_body.toString(lead + "    ") );
    return str;
}
