/* 
 *  ILConstruction
 *
 *  ILConstruction is free software: you can redistribute it and/or modify
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
 *  Generated by xsd2code on Tue Jan 5 23:01:06 2010.
 **********************************************************************************
 *  Copyright 2009
 *
 */

#import <Foundation/Foundation.h>
#import "ILUnType.h"

@interface ILConstruction : NSObject { 
    ILUnType *m_unType;
    NSString *m_hullColor;
    bool m_hullColorPresent;
    int m_hullType;
    bool m_hullTypePresent;
    float m_length;
    bool m_lengthPresent;
    int m_lloydsShipType;
    bool m_lloydsShipTypePresent;
    float m_maxKeelHeight;
    bool m_maxKeelHeightPresent;
    float m_maxDraught;
    bool m_maxDraughtPresent;
    float m_maxPersonsOnBoard;
    bool m_maxPersonsOnBoardPresent;
    float m_maxSpeed;
    bool m_maxSpeedPresent;
    float m_width;
    bool m_widthPresent;
}


/* UnType:
   Object type according to CODES FOR TYPES OF MEANS OF TRANSPORT Revision 2 (UNECE CEFACT Trade Facilitation Recommendation No. 28 edition 2007) Check latest version */
-(void) setUnType:(ILUnType *) val;
-(ILUnType *) unType;

/* HullColor:
   Color of Hull (in RGB hex) for SAR operations */
-(void) setHullColor:(NSString *) val;
-(NSString *) hullColor;
-(bool) hasHullColor;

/* HullType:
   Type of hull (1 = single,  2 = double, 3 =  triple) */
-(void) setHullType:(int) val;
-(int) hullType;
-(bool) hasHullType;

/* Length:
   Length of the target in meter as confirmed by NCA */
-(void) setLength:(float) val;
-(float) length;
-(bool) hasLength;

/* LloydsShipType:
   Number indicating type of vessel */
-(void) setLloydsShipType:(int) val;
-(int) lloydsShipType;
-(bool) hasLloydsShipType;

/* MaxKeelHeight:
   Maximum height of the object, to be used if voyage data is not available */
-(void) setMaxKeelHeight:(float) val;
-(float) maxKeelHeight;
-(bool) hasMaxKeelHeight;

/* MaxDraught:
   Maximum draught of the object in meters, to be used if voyage data is not available */
-(void) setMaxDraught:(float) val;
-(float) maxDraught;
-(bool) hasMaxDraught;

/* MaxPersonsOnBoard:
   The maximum number of persons on board of the object (crew, support, passengers, pilots) */
-(void) setMaxPersonsOnBoard:(float) val;
-(float) maxPersonsOnBoard;
-(bool) hasMaxPersonsOnBoard;

/* MaxSpeed:
   The maximum speed the object is able to sustain with normal draft and load */
-(void) setMaxSpeed:(float) val;
-(float) maxSpeed;
-(bool) hasMaxSpeed;

/* Width:
   Width of the target in meter as confirmed by the NCA */
-(void) setWidth:(float) val;
-(float) width;
-(bool) hasWidth;

-(void) setAttributes:(NSDictionary *)attributeDict;
-(NSDictionary *) attributes;
-(NSString *) XML;
-(NSString *) stringValue;
-(NSString *) stringValueWithLead:(NSString *) lead;
-(NSString *) encode: (NSString *) input;

@end



