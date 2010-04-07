/* 
 *  LoginRequest
 *
 *  LoginRequest is free software: you can redistribute it and/or modify
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
 *  Generated by xsd2code on Wed Apr 7 16:24:49 2010.
 **********************************************************************************
 *  Copyright 2010
 *
 */

#ifndef __LOGINREQUEST_H__
#define __LOGINREQUEST_H__

#include <QtCore>

//-----------------------------------------------------------
//! \brief       Class definition of LoginRequest
//!
//! DATA login message with details of the user
//!

class LoginRequest : public QObject { 
    Q_OBJECT

public:
    //!constructor
    //!
    LoginRequest();
    //!copy constructor
    //!
    LoginRequest(const LoginRequest&);
    //!= operator
    //!
    LoginRequest & operator=(const LoginRequest&/*val*/);
    //!              sets the Name: Login name
    //!
    void setName(QString val);

    //!              gets the Name: Login name
    //!
    //! \return     QString
    //!
    QString getName() const;

    //!              sets the Password: Password value
    //!
    void setPassword(QString val);

    //!              gets the Password: Password value
    //!
    //! \return     QString
    //!
    QString getPassword() const;

    //!              sets the Encryption: 1 = plain 2 = md5
    //!
    void setEncryption(int val);

    //!              gets the Encryption: 1 = plain 2 = md5
    //!
    //! \return     int
    //!
    int getEncryption() const;

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
    QString m_name;
    QString m_password;
    int m_encryption;

}; 

#endif

