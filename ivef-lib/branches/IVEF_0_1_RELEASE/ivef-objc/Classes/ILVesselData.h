/* 
 *  ILVesselData
 *
 *  ILVesselData is free software: you can redistribute it and/or modify
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
 *  Generated by xsd2code on Fri Apr 23 16:38:31 2010.
 **********************************************************************************
 *  Copyright 2010
 *
 */

#import <Foundation/Foundation.h>
#import "ILPosReport.h"
#import "ILStaticData.h"
#import "ILVoyage.h"
#import "ILTaggedItem.h"

//-----------------------------------------------------------
//! \brief       Class definition of ILVesselData
//!
//! DATA regarding an object in the supliers domain, contains at least 1 one of the sub elements (PosReport, StaticData, Voyage)
//!

@interface ILVesselData : NSObject { 
    ILPosReport *m_posReport;
    BOOL m_posReportPresent;
    NSMutableArray *m_staticDatas;
    NSMutableArray *m_voyages;
    NSMutableArray *m_taggedItems;
}

//!Setter for PosReport
//!
-(BOOL) setPosReport:(ILPosReport *) val;
//!Getter for PosReport
//!
-(ILPosReport *) posReport;
//!Test for pressence of PosReport
//!
-(BOOL) hasPosReport;
//!Setter for StaticData
//!
-(BOOL) addStaticData:(ILStaticData *) val;
//!Getter for StaticData
//!
-(ILStaticData *) staticDataAt:(int) i;
//!Element counter for StaticData
//!
-(int) countOfStaticDatas;
//!Get all elements for StaticData
//!
-(NSArray *) staticDatas;
//!Setter for Voyage
//!
-(BOOL) addVoyage:(ILVoyage *) val;
//!Getter for Voyage
//!
-(ILVoyage *) voyageAt:(int) i;
//!Element counter for Voyage
//!
-(int) countOfVoyages;
//!Get all elements for Voyage
//!
-(NSArray *) voyages;
//!Setter for TaggedItem
//!
-(BOOL) addTaggedItem:(ILTaggedItem *) val;
//!Getter for TaggedItem
//!
-(ILTaggedItem *) taggedItemAt:(int) i;
//!Element counter for TaggedItem
//!
-(int) countOfTaggedItems;
//!Get all elements for TaggedItem
//!
-(NSArray *) taggedItems;
//!Set attributes by providing a key/value dictionary
//!

-(BOOL) setAttributes:(NSDictionary *)attributeDict;
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



