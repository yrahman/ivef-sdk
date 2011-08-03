<?php

// 
//  LoginRequest
//
//  LoginRequest is free software: you can redistribute it and/or modify
//  it under the terms of the GNU Lesser General Public License as published by
//  the Free Software Foundation, either version 3 of the License, or
//  (at your option) any later version.
//
//  LoginRequest is distributed in the hope that it will be useful,
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


class LoginRequest { 

    var $m_name; // default value is uninitialized
    var $m_namePresent;
    var $m_password; // default value is uninitialized
    var $m_passwordPresent;
    var $m_encryption; // default value is uninitialized
    var $m_encryptionPresent;

    public function LoginRequest() {

        date_default_timezone_set('UTC');
        $this->m_namePresent = false;
        $this->m_passwordPresent = false;
        $this->m_encryptionPresent = false;
    }

    public function setName( $val ) {

        if (strlen ($val) > 256)
          return false;
        $this->m_namePresent = true;
        $this->m_name = $val;
        return true;
    }

    public function getName() {

        return $this->m_name;
    }

    public function setPassword( $val ) {

        if (strlen ($val) > 256)
          return false;
        $this->m_passwordPresent = true;
        $this->m_password = $val;
        return true;
    }

    public function getPassword() {

        return $this->m_password;
    }

    public function setEncryption( $val ) {

        if ( ( $val != 1 ) &&
             ( $val != 2 ) )
            return false;
        $this->m_encryptionPresent = true;
        $this->m_encryption = $val;
        return true;
    }

    public function getEncryption() {

        return $this->m_encryption;
    }

    public function toXML() {

        $xml = new SimpleXMLElement("<LoginRequest></LoginRequest>");

        if ( $this->m_namePresent ) {
            $xml->addAttribute('Name', $this->m_name);
        } else { 
            return ""; // not all required attributes have been set 
        } 
        if ( $this->m_passwordPresent ) {
            $xml->addAttribute('Password', $this->m_password);
        } else { 
            return ""; // not all required attributes have been set 
        } 
        if ( $this->m_encryptionPresent ) {
            $xml->addAttribute('Encryption', $this->m_encryption);
        } else { 
            return ""; // not all required attributes have been set 
        } 
        return $xml->asXML();
    }

    public function toString() {

    	return $this->toStringWithLead("");
    }

    public function toStringWithLead( $lead ) {

        $str = $lead . "LoginRequest\n";

        $str .= $lead . "    Name = " . $this->m_name . "\n";
        $str .= $lead . "    Password = " . $this->m_password . "\n";
        $str .= $lead . "    Encryption = " . $this->m_encryption . "\n";

        return $str;
    }
}
?>