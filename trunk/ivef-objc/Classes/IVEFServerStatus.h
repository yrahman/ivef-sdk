/* 
 *  IVEFServerStatus
 *
 *  IVEFServerStatus is free software: you can redistribute it and/or modify
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

@interface IVEFServerStatus : NSObject { 
    NSString *m_status;
    NSString *m_details;
    bool m_detailsPresent;
}


/* Status:
   Status of the server */
-(void) setStatus:(NSString *) val;
-(NSString *) getStatus;

/* Details:
   Details of status */
-(void) setDetails:(NSString *) val;
-(NSString *) getDetails;
-(bool) hasDetails;

-(void) setAttributes:(NSDictionary *)attributeDict;
-(NSString *) XML;
-(NSString *) stringValueWithLead:(NSString *) lead;

@end



