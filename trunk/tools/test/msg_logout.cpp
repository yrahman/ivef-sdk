
#include "msg_logout.h"

MSG_Logout::MSG_Logout() {

}

MSG_Logout::MSG_Logout(const MSG_Logout &val) : QObject() {

    m_header = val.getHeader();
    m_body = val.getBody();
}

MSG_Logout & MSG_Logout::operator=(const MSG_Logout &/*val*/) {

    return *this;
}

void MSG_Logout::setHeader(Header val) {

    m_header = val;
}

Header MSG_Logout::getHeader() const {

    return m_header;
}

void MSG_Logout::setBody(Body val) {

    m_body = val;
}

Body MSG_Logout::getBody() const {

    return m_body;
}

QString MSG_Logout::toXML() {

    QString xml = "<MSG_Logout";
    xml.append(">\n");
    xml.append( m_header.toXML() );
    xml.append( m_body.toXML() );
    xml.append( "<MSG_Logout />\n");
    return xml;
}
