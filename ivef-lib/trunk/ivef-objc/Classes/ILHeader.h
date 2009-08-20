/* 
 *  ILHeader
 *
 *  ILHeader is free software: you can redistribute it and/or modify
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
 *  Generated by xsd2code on Thu Aug 20 15:47:24 2009.
 **********************************************************************************
 *  Copyright 2009
 *
 */

#import <Foundation/Foundation.h>

@interface ILHeader : NSObject { 
    NSString *m_version;
    NSString *m_msgRefId;
}

-(NSString *) version;

/* MsgRefId:
   Must be an Universally Unique Identifier */
-(void) setMsgRefId:(NSString *) val;
-(NSString *) msgRefId;

-(void) setAttributes:(NSDictionary *)attributeDict;
-(NSDictionary *) attributes;
-(NSString *) XML;
-(NSString *) stringValue;
-(NSString *) stringValueWithLead:(NSString *) lead;
-(NSString *) encode;

@end



