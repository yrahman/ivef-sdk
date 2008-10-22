/* 
 *  Schema
 *
 *  Schema is free software: you can redistribute it and/or modify
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


public class Schema { 


    public Schema() {

    }

    public Schema(Schema val) {

    }

    public String getElementFormDefault() {

        return "qualified";
    }

    public String getTargetNamespace() {

        return "urn:http://www.hitt.nl/XMLSchema/ISIS/1.1";
    }

    public String toXML() {

        String xml = "<Schema";
        xml += ">\n";
        xml += "</Schema>\n";
        return xml;
    }

    public String toString(String lead) {

        String str = lead + "Schema\n";
        return str;
    }

}
