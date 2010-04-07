/* 
 *  ILServerStatus
 *
 *  ILServerStatus is free software: you can redistribute it and/or modify
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
 *  Generated by xsd2code on Wed Apr 7 16:25:00 2010.
 **********************************************************************************
 *  Copyright 2010
 *
 */

#import <Foundation/Foundation.h>

//-----------------------------------------------------------
//! \brief       Class definition of ILServerStatus
//!
//! DATA describing the status of the server (full/available)
//!

@interface ILServerStatus : NSObject { 
    NSString *m_contactIdentity;
    bool m_contactIdentityPresent;
    NSString *m_details;
    bool m_detailsPresent;
    bool m_status;
}


/* ContactIdentity:
   reference to the identity associated with this service */
//!Setter for ContactIdentity
//!
-(void) setContactIdentity:(NSString *) val;
//!Getter for ContactIdentity
//!
-(NSString *) contactIdentity;
//!Test for pressence of ContactIdentity
//!
-(bool) hasContactIdentity;

/* Details:
   Details of status */
//!Setter for Details
//!
-(void) setDetails:(NSString *) val;
//!Getter for Details
//!
-(NSString *) details;
//!Test for pressence of Details
//!
-(bool) hasDetails;

/* Status:
   Status of the server (ok /  not ok) */
//!Setter for Status
//!
-(void) setStatus:(bool) val;
//!Getter for Status
//!
-(bool) status;
//!Set attributes by providing a key/value dictionary
//!

-(void) setAttributes:(NSDictionary *)attributeDict;
//!Get attributes as a key/value dictionary
//!
-(NSDictionary *) attributes;
//!Get a XML representation of this class
//!
-(NSString *) XML;
//!Get a string representation of this class
//!
-(NSString *) stringValue;
-(NSString *) stringValueWithLead:(NSString *) lead;
//!Helper routine to encode any string to an XML escaped string
//!
-(NSString *) encode: (NSString *) input;

@end



