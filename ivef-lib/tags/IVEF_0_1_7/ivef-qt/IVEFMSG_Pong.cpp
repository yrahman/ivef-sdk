
#include "IVEFMSG_Pong.h"

// Constructor
MSG_Pong::MSG_Pong() {

    m_headerPresent = false;
    m_bodyPresent = false;
}

// copy constructor
MSG_Pong::MSG_Pong(const MSG_Pong &val) : QObject() {

    m_headerPresent = val.m_headerPresent;
    m_header = val.m_header;
    m_bodyPresent = val.m_bodyPresent;
    m_body = val.m_body;
}

// assignement
MSG_Pong & MSG_Pong::operator=(const MSG_Pong &val) {

    m_headerPresent = val.m_headerPresent;
    m_header = val.m_header;
    m_bodyPresent = val.m_bodyPresent;
    m_body = val.m_body;
    return *this;
}

// String encoder
QString MSG_Pong::encode( QString str) const {

    // replace characters that are illigal in XML with their encodings
    str.replace('&', "&amp;");
    str.replace('<', "&lt;");
    str.replace('>', "&gt;");
    str.replace('"', "&quot;");
    return str;
}

// setter for MSG_Pong
bool MSG_Pong::setHeader(Header val) {

    m_headerPresent = true;
    m_header = val;
      return true;
}

// getter for MSG_Pong
Header MSG_Pong::getHeader() const {

    return m_header;
}

// setter for MSG_Pong
bool MSG_Pong::setBody(Body val) {

    m_bodyPresent = true;
    m_body = val;
      return true;
}

// getter for MSG_Pong
Body MSG_Pong::getBody() const {

    return m_body;
}

// Get XML Representation
QString MSG_Pong::toXML() const {

    QString xml = "<MSG_Pong";
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
    xml.append( "</MSG_Pong>\n");
    return xml;
}

// Get String Representation
QString MSG_Pong::toString() {

    return toString("");
}

// Get String Representation with a lead
QString MSG_Pong::toString(QString lead) {

    QString str = lead + "MSG_Pong\n";
    str.append( m_header.toString(lead + "    ") );
    str.append( m_body.toString(lead + "    ") );
    return str;
}

