/* 
 *  ServiceRequestResponse
 *
 *  ServiceRequestResponse is free software: you can redistribute it and/or modify
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
 *  Generated by xsd2code on Thu Apr 1 13:04:12 2010.
 **********************************************************************************
 *  Copyright 2008
 *
 */

package ivef;

import java.util.*;
import java.text.DateFormat;
import java.text.SimpleDateFormat;


public class ServiceRequestResponse { 

    private String m_reason; // default value is uninitialized
    private boolean m_reasonPresent;
    private String m_responseOn; // default value is uninitialized
    private int m_result; // default value is uninitialized

    public ServiceRequestResponse() {

        m_reasonPresent = false;
    }

    public ServiceRequestResponse(ServiceRequestResponse val) {

        m_reasonPresent = val.hasReason();
        m_reason = val.getReason();
        m_responseOn = val.getResponseOn();
        m_result = val.getResult();
    }

    public void setReason(String val) {

        m_reasonPresent = true;
        m_reason = val;
    }

    public String getReason() {

        return m_reason;
    }

    public boolean hasReason() {

        return m_reasonPresent;
    }

    public void setResponseOn(String val) {

        m_responseOn = val;
    }

    public String getResponseOn() {

        return m_responseOn;
    }

    public void setResult(int val) {

        if ( ( val != 1 ) &&
             ( val != 2 ) &&
             ( val != 3 ) )
            return;
        m_result = val;
    }

    public int getResult() {

        return m_result;
    }

    public String toXML() {

        String xml = "<ServiceRequestResponse";
        DateFormat df = new SimpleDateFormat("yyyy-MM-dd'T'hh:mm:ss.SSSZ");

        if ( hasReason() ) {
            xml += " Reason=\"" + encode( m_reason) + "\"";
        }
        xml += " ResponseOn=\"" + encode( m_responseOn) + "\"";
        xml += " Result=\"" + m_result + "\"";
        xml += "/>\n";
        return xml;
    }

    public String toString(String lead) {

        String str = lead + "ServiceRequestResponse\n";
        DateFormat df = new SimpleDateFormat("yyyy-MM-dd'T'hh:mm:ss.SSSZ");

        if ( hasReason() ) {
            str +=  lead + "    Reason = " + m_reason + "\n";
        }
        str +=  lead + "    ResponseOn = " + m_responseOn + "\n";
        str +=  lead + "    Result = " + m_result + "\n";
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
