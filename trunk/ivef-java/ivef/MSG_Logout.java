/* 
 *  MSG_Logout
 *
 *  MSG_Logout is free software: you can redistribute it and/or modify
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
 *  Generated by xsd2code on Wed Oct 22 15:34:29 2008.
 **********************************************************************************
 *  Copyright 2008
 *
 */

package ivef;

import java.util.*;
import java.text.DateFormat;

import ivef.Header;
import ivef.Body;

public class MSG_Logout { 

    private Header m_header;
    private Body m_body;

    public MSG_Logout() {

    }

    public MSG_Logout(MSG_Logout val) {

        m_header = val.getHeader();
        m_body = val.getBody();
    }

    public void setHeader(Header val) {

        m_header = val;
    }

    public Header getHeader() {

        return m_header;
    }

    public void setBody(Body val) {

        m_body = val;
    }

    public Body getBody() {

        return m_body;
    }

    public String toXML() {

        String xml = "<MSG_Logout";
        xml += ">\n";
        xml +=  m_header.toXML();
        xml +=  m_body.toXML();
        xml += "</MSG_Logout>\n";
        return xml;
    }

    public String toString(String lead) {

        String str = lead + "MSG_Logout\n";
        str +=  m_header.toString(lead + "    ");
        str +=  m_body.toString(lead + "    ");
        return str;
    }

}
