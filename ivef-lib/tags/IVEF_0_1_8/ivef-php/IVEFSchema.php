<?php

// 
//  Schema
//
//  Schema is free software: you can redistribute it and/or modify
//  it under the terms of the GNU Lesser General Public License as published by
//  the Free Software Foundation, either version 3 of the License, or
//  (at your option) any later version.
//
//  Schema is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY ); without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU General Public License for more details.
//
//*********************************************************************************
//  WARNING: THIS CODE WAS GENERATED DO NOT MODIFY, CHANGE THE XSD INSTEAD
//  Generated by xsd2code on Thu Aug 26 11:23:11 2010.
//*********************************************************************************
//  Copyright 2010
//


class Schema { 


    public function Schema() {

        date_default_timezone_set('UTC');
    }

    public function getElementFormDefault() {

        return "qualified";
    }

    public function getTargetNamespace() {

        return "urn:http://www.ivef.org/XMLSchema/IVEF/0.1.7";
    }

    public function toXML() {

        $xml = new SimpleXMLElement("<Schema></Schema>");

        return $xml->asXML();
    }

    public function toString() {

    	return $this->toStringWithLead("");
    }

    public function toStringWithLead( $lead ) {

        $str = $lead . "Schema\n";


        return $str;
    }
}
?>