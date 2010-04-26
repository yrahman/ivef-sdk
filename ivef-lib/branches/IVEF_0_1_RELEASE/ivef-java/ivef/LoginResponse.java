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
 *  Generated by xsd2code on Fri Apr 23 14:10:27 2010.
 **********************************************************************************
 *  Copyright 2010
 *
 */

package ivef;

import java.util.*;
import java.text.DecimalFormat;
import java.text.DateFormat;
import java.text.SimpleDateFormat;


public class LoginResponse { 

    private String m_msgId; // default value is uninitialized
    private int m_result; // default value is uninitialized
    private String m_reason; // default value is uninitialized
    private boolean m_reasonPresent;

    public LoginResponse() {

        m_reasonPresent = false;
    }

    public LoginResponse(LoginResponse val) {

        m_msgId = val.getMsgId();
        m_result = val.getResult();
        m_reasonPresent = val.hasReason();
        m_reason = val.getReason();
    }

    public boolean setMsgId(String val) {

        m_msgId = val;
          return true;
    }

    public String getMsgId() {

        return m_msgId;
    }

    public boolean setResult(int val) {

        if ( ( val != 1 ) &&
             ( val != 2 ) )
            return false;
        m_result = val;
          return true;
    }

    public int getResult() {

        return m_result;
    }

    public boolean setReason(String val) {

        m_reasonPresent = true;
        m_reason = val;
          return true;
    }

    public String getReason() {

        return m_reason;
    }

    public boolean hasReason() {

        return m_reasonPresent;
    }

    public String toXML() {

        String xml = "<LoginResponse";
        DateFormat df = new SimpleDateFormat("yyyy-MM-dd'T'HH:mm:ss.SSS'Z'");
        DecimalFormat nf = new DecimalFormat("0.000000");

        xml += " MsgId=\"" + encode( m_msgId) + "\"";
        xml += " Result=\"" + m_result + "\"";
        if ( hasReason() ) {
            xml += " Reason=\"" + encode( m_reason) + "\"";
        }
        xml += "/>\n";
        return xml;
    }

    public String toString(String lead) {

        String str = lead + "LoginResponse\n";
        DateFormat df = new SimpleDateFormat("yyyy-MM-dd'T'HH:mm:ss.SSS'Z'");
        DecimalFormat nf = new DecimalFormat("0.000000");

        str +=  lead + "    MsgId = " + m_msgId + "\n";
        str +=  lead + "    Result = " + m_result + "\n";
        if ( hasReason() ) {
            str +=  lead + "    Reason = " + m_reason + "\n";
        }
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
