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
 *  Generated by xsd2code on Thu Aug 26 11:23:45 2010.
 **********************************************************************************
 *  Copyright 2010
 *
 */

package ivef;

import java.util.*;
import java.text.DecimalFormat;
import java.text.DateFormat;
import java.text.SimpleDateFormat;


public class LoginRequest { 

    private String m_name; // default value is uninitialized
    private boolean m_namePresent;
    private String m_password; // default value is uninitialized
    private boolean m_passwordPresent;
    private int m_encryption; // default value is uninitialized
    private boolean m_encryptionPresent;

    public LoginRequest() {

        m_namePresent = false;
        m_passwordPresent = false;
        m_encryptionPresent = false;
    }

    public LoginRequest(LoginRequest val) {

        m_name = val.getName();
        if (val != null) {
            m_namePresent = true;
        }
        m_password = val.getPassword();
        if (val != null) {
            m_passwordPresent = true;
        }
        m_encryption = val.getEncryption();
        if (val != null) {
            m_encryptionPresent = true;
        }
    }

    public boolean setName(String val) {

        if (val.length() > 256)
          return false;
        m_namePresent = true;
        m_name = val;
          return true;
    }

    public String getName() {

        return m_name;
    }

    public boolean setPassword(String val) {

        if (val.length() > 256)
          return false;
        m_passwordPresent = true;
        m_password = val;
          return true;
    }

    public String getPassword() {

        return m_password;
    }

    public boolean setEncryption(int val) {

        if ( ( val != 1 ) &&
             ( val != 2 ) )
            return false;
        m_encryptionPresent = true;
        m_encryption = val;
          return true;
    }

    public int getEncryption() {

        return m_encryption;
    }

    public String toXML() {

        String xml = "<LoginRequest";
        String dataMember;        DateFormat df = new SimpleDateFormat("yyyy-MM-dd'T'HH:mm:ss.SSS'Z'");
        DecimalFormat nf = new DecimalFormat("0.000000");

        if ( m_namePresent ) {
            xml += " Name=\"" + encode( m_name) + "\"";
        } else { 
            return null; // not all required attributes have been set 
        } 
        if ( m_passwordPresent ) {
            xml += " Password=\"" + encode( m_password) + "\"";
        } else { 
            return null; // not all required attributes have been set 
        } 
        if ( m_encryptionPresent ) {
            xml += " Encryption=\"" + m_encryption + "\"";
        } else { 
            return null; // not all required attributes have been set 
        } 
        xml += "/>\n";
        return xml;
    }

    public String toString(String lead) {

        String str = lead + "LoginRequest\n";
        DateFormat df = new SimpleDateFormat("yyyy-MM-dd'T'HH:mm:ss.SSS'Z'");
        DecimalFormat nf = new DecimalFormat("0.000000");

            str +=  lead + "    Name = " + m_name + "\n";
            str +=  lead + "    Password = " + m_password + "\n";
            str +=  lead + "    Encryption = " + m_encryption + "\n";
        return str;
    }
    public String encode( String str) {

        str = str.replaceAll("&", "&amp;");
        str = str.replaceAll("<", "&lt;");
        str = str.replaceAll(">", "&gt;");
        str = str.replaceAll("\"", "&quot;");
        return str;
    }


}