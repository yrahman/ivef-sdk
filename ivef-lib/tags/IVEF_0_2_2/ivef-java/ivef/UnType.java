/* 
 *  UnType
 *
 *  UnType is free software: you can redistribute it and/or modify
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
 *  Generated by xsd2code on Tue May 18 15:12:04 2010.
 **********************************************************************************
 *  Copyright 2010
 *
 */

package ivef;

import java.util.*;
import java.text.DecimalFormat;
import java.text.DateFormat;
import java.text.SimpleDateFormat;


public class UnType { 

    private int m_codeA; // default value is uninitialized
    private boolean m_codeAPresent;
    private int m_codeB; // default value is uninitialized
    private boolean m_codeBPresent;
    private int m_mode; // default value is uninitialized
    private boolean m_modePresent;

    public UnType() {

        m_codeAPresent = false;
        m_codeBPresent = false;
        m_modePresent = false;
    }

    public UnType(UnType val) {

        m_codeA = val.getCodeA();
        if (val != null) {
            m_codeAPresent = true;
        }
        m_codeB = val.getCodeB();
        if (val != null) {
            m_codeBPresent = true;
        }
        m_mode = val.getMode();
        if (val != null) {
            m_modePresent = true;
        }
    }

    public boolean setCodeA(int val) {

        if (val < 0)
          return false;
        if (val > 138)
          return false;
        m_codeAPresent = true;
        m_codeA = val;
          return true;
    }

    public int getCodeA() {

        return m_codeA;
    }

    public boolean setCodeB(int val) {

        if (val < 0)
          return false;
        if (val > 9)
          return false;
        m_codeBPresent = true;
        m_codeB = val;
          return true;
    }

    public int getCodeB() {

        return m_codeB;
    }

    public boolean setMode(int val) {

        if ( ( val != 1 ) &&
             ( val != 2 ) &&
             ( val != 3 ) &&
             ( val != 6 ) &&
             ( val != 7 ) &&
             ( val != 8 ) )
            return false;
        m_modePresent = true;
        m_mode = val;
          return true;
    }

    public int getMode() {

        return m_mode;
    }

    public String toXML() {

        String xml = "<UnType";
        String dataMember;        DateFormat df = new SimpleDateFormat("yyyy-MM-dd'T'HH:mm:ss.SSS'Z'");
        DecimalFormat nf = new DecimalFormat("0.000000");

        if ( m_codeAPresent ) {
            xml += " CodeA=\"" + m_codeA + "\"";
        } else { 
            return null; // not all required attributes have been set 
        } 
        if ( m_codeBPresent ) {
            xml += " CodeB=\"" + m_codeB + "\"";
        } else { 
            return null; // not all required attributes have been set 
        } 
        if ( m_modePresent ) {
            xml += " Mode=\"" + m_mode + "\"";
        } else { 
            return null; // not all required attributes have been set 
        } 
        xml += "/>\n";
        return xml;
    }

    public String toString(String lead) {

        String str = lead + "UnType\n";
        DateFormat df = new SimpleDateFormat("yyyy-MM-dd'T'HH:mm:ss.SSS'Z'");
        DecimalFormat nf = new DecimalFormat("0.000000");

            str +=  lead + "    CodeA = " + m_codeA + "\n";
            str +=  lead + "    CodeB = " + m_codeB + "\n";
            str +=  lead + "    Mode = " + m_mode + "\n";
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