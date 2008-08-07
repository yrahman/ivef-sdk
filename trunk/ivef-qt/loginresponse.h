/* 
 *  LoginResponse
 *
 *  LoginResponse is free software: you can redistribute it and/or modify
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
 *  Generated by xsd2code on Thu Aug 7 15:52:42 2008.
 **********************************************************************************
 *  Copyright 2008
 *
 */

#ifndef __LOGINRESPONSE_H__
#define __LOGINRESPONSE_H__

#include <QtCore>

class LoginResponse : public QObject { 
    Q_OBJECT

public:
    LoginResponse();
    LoginResponse(const LoginResponse&);
    LoginResponse & operator=(const LoginResponse&/*val*/);

    /* MsgId:
       Corresponds to the original MsgRefId from the Login.xml message */
    void setMsgId(QString val);
    QString getMsgId() const;

    /* Result:
       1 = Accepted 2 = Declined */
    void setResult(int val);
    int getResult() const;

    /* Reason:
       String describing reason for declining, only used when result is "Declined" */
    void setReason(QString val);
    QString getReason() const;
    bool hasReason();
    QString toXML();

private:
    QString m_msgId;
    int m_result;
    QString m_reason;
    bool m_reasonPresent;

}; 

#endif

