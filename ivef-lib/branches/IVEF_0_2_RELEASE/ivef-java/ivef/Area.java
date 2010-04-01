/* 
 *  Area
 *
 *  Area is free software: you can redistribute it and/or modify
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

import ivef.Pos;

public class Area { 

    private Vector<Pos> m_poss = new Vector<Pos>();
    private String m_name; // default value is uninitialized
    private boolean m_namePresent;

    public Area() {

        m_namePresent = false;
    }

    public Area(Area val) {

        for(int i=0; i < val.countOfPoss(); i++ ) {
            m_poss.add( val.getPosAt(i) );
        }
        m_namePresent = val.hasName();
        m_name = val.getName();
    }

    public void addPos(Pos val) {

        m_poss.add(val);
    }

    public Pos getPosAt(int i) {

        return (Pos) m_poss.get(i);
    }

    public int countOfPoss() {

        return m_poss.size();
    }

    public void setName(String val) {

        m_namePresent = true;
        m_name = val;
    }

    public String getName() {

        return m_name;
    }

    public boolean hasName() {

        return m_namePresent;
    }

    public String toXML() {

        String xml = "<Area";
        DateFormat df = new SimpleDateFormat("yyyy-MM-dd'T'hh:mm:ss.SSSZ");

        if ( hasName() ) {
            xml += " Name=\"" + encode( m_name) + "\"";
        }
        xml += ">\n";
        for(int i=0; i < m_poss.size(); i++ ) {
           Pos attribute = (Pos) m_poss.get(i);
            xml += attribute.toXML();
        }
        xml += "</Area>\n";
        return xml;
    }

    public String toString(String lead) {

        String str = lead + "Area\n";
        DateFormat df = new SimpleDateFormat("yyyy-MM-dd'T'hh:mm:ss.SSSZ");

        if ( hasName() ) {
            str +=  lead + "    Name = " + m_name + "\n";
        }
        for(int i=0; i < m_poss.size(); i++ ) {
           Pos attribute = (Pos) m_poss.get(i);
           str += attribute.toString(lead + "    ");
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
