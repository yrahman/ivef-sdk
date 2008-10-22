/* 
 *  IVEFLoginRequest
 *
 *  IVEFLoginRequest is free software: you can redistribute it and/or modify
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
 *  Generated by xsd2code on Wed Oct 22 15:34:28 2008.
 **********************************************************************************
 *  Copyright 2008
 *
 */

#import <Cocoa/Cocoa.h>

@interface IVEFLoginRequest : NSObject { 
    NSString *m_name;
    NSString *m_password;
    int m_encryption;
}


/* Name:
   Login name */
-(void) setName:(NSString *) val;
-(NSString *) getName;

/* Password:
   Password value */
-(void) setPassword:(NSString *) val;
-(NSString *) getPassword;

/* Encryption:
   1 = plain 2 = md5 */
-(void) setEncryption:(int) val;
-(int) getEncryption;

-(void) setAttributes:(NSDictionary *)attributeDict;
-(NSString *) XML;
-(NSString *) stringValueWithLead:(NSString *) lead;

@end



