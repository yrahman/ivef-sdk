
#include "header.h"

Header::Header() {

}

Header::Header(const Header &val) : QObject() {

    m_version = val.m_version;
    m_msgRefId = val.m_msgRefId;
}

Header & Header::operator=(const Header &val) {

    m_version = val.m_version;
    m_msgRefId = val.m_msgRefId;
    return *this;
}

void Header::setVersion(QString val) {

    m_version = val;
}

QString Header::getVersion() const {

    return m_version;
}

void Header::setMsgRefId(QString val) {

    m_msgRefId = val;
}

QString Header::getMsgRefId() const {

    return m_msgRefId;
}

QString Header::toXML() {

    QString xml = "<Header";
    xml.append(" Version=\"" + m_version + "\"");
    xml.append(" MsgRefId=\"" + m_msgRefId + "\"");
    xml.append(">\n");
    xml.append( "</Header>\n");
    return xml;
}
