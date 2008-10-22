/* 
 *  IVEFLoginResponse
 *
 *  IVEFLoginResponse is free software: you can redistribute it and/or modify
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

@interface IVEFLoginResponse : NSObject { 
    NSString *m_msgId;
    int m_result;
    NSString *m_reason;
    bool m_reasonPresent;
}


/* MsgId:
   Corresponds to the original MsgRefId from the Login.xml message */
-(void) setMsgId:(NSString *) val;
-(NSString *) getMsgId;

/* Result:
   1 = Accepted 2 = Declined */
-(void) setResult:(int) val;
-(int) getResult;

/* Reason:
   String describing reason for declining, only used when result is "Declined" */
-(void) setReason:(NSString *) val;
-(NSString *) getReason;
-(bool) hasReason;

-(void) setAttributes:(NSDictionary *)attributeDict;
-(NSString *) XML;
-(NSString *) stringValueWithLead:(NSString *) lead;

@end



