/* 
 *  ILStaticData
 *
 *  ILStaticData is free software: you can redistribute it and/or modify
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
 *  Generated by xsd2code on Fri Apr 23 16:38:30 2010.
 **********************************************************************************
 *  Copyright 2010
 *
 */

#import <Foundation/Foundation.h>

//-----------------------------------------------------------
//! \brief       Class definition of ILStaticData
//!
//! 
//!

@interface ILStaticData : NSObject { 
    NSString *m_id;
    NSString *m_sourceName;
    int m_source;
    float m_length;
    BOOL m_lengthPresent;
    float m_breadth;
    BOOL m_breadthPresent;
    NSString *m_callsign;
    BOOL m_callsignPresent;
    NSString *m_shipName;
    BOOL m_shipNamePresent;
    int m_objectType;
    BOOL m_objectTypePresent;
    int m_shipType;
    BOOL m_shipTypePresent;
    int m_IMO;
    BOOL m_IMOPresent;
    int m_MMSI;
    BOOL m_MMSIPresent;
    int m_ATONType;
    BOOL m_ATONTypePresent;
    NSString *m_ATONName;
    BOOL m_ATONNamePresent;
    float m_antPosDistFromFront;
    BOOL m_antPosDistFromFrontPresent;
    float m_antPosDistFromLeft;
    BOOL m_antPosDistFromLeftPresent;
    NSString *m_natLangShipName;
    BOOL m_natLangShipNamePresent;
    NSString *m_portOfRegistry;
    BOOL m_portOfRegistryPresent;
    NSString *m_countryFlag;
    BOOL m_countryFlagPresent;
    float m_maxAirDraught;
    BOOL m_maxAirDraughtPresent;
    float m_maxDraught;
    BOOL m_maxDraughtPresent;
    NSString *m_deepWaterVesselind;
    BOOL m_deepWaterVesselindPresent;
}


/* Id:
   The identification of this static data */
//!Setter for Id
//!
-(BOOL) setIdent:(NSString *) val;
//!Getter for Id
//!
-(NSString *) ident;

/* SourceName:
   Identification of the originator of the data */
//!Setter for SourceName
//!
-(BOOL) setSourceName:(NSString *) val;
//!Getter for SourceName
//!
-(NSString *) sourceName;

/* Source:
   Source/originator type: 1 = transponder 2 = database 3 = manual */
//!Setter for Source
//!
-(BOOL) setSource:(int) val;
//!Getter for Source
//!
-(int) source;

/* Length:
   Length of the target in meter */
//!Setter for Length
//!
-(BOOL) setLength:(float) val;
//!Getter for Length
//!
-(float) length;
//!Test for pressence of Length
//!
-(BOOL) hasLength;

/* Breadth:
   Breadth of the target in meter */
//!Setter for Breadth
//!
-(BOOL) setBreadth:(float) val;
//!Getter for Breadth
//!
-(float) breadth;
//!Test for pressence of Breadth
//!
-(BOOL) hasBreadth;

/* Callsign:
   Callsign of the target */
//!Setter for Callsign
//!
-(BOOL) setCallsign:(NSString *) val;
//!Getter for Callsign
//!
-(NSString *) callsign;
//!Test for pressence of Callsign
//!
-(BOOL) hasCallsign;

/* ShipName:
   Name of the target */
//!Setter for ShipName
//!
-(BOOL) setShipName:(NSString *) val;
//!Getter for ShipName
//!
-(NSString *) shipName;
//!Test for pressence of ShipName
//!
-(BOOL) hasShipName;

/* ObjectType:
   1 = Aircraft
   2 = Vessel
   3 = Vehicle (not an aircraft or vessel)
   4 = BaseStation
   5 = Aids to Navigate
   6 = Virtual Aids to Navigate
   7 = Field Transponder */
//!Setter for ObjectType
//!
-(BOOL) setObjectType:(int) val;
//!Getter for ObjectType
//!
-(int) objectType;
//!Test for pressence of ObjectType
//!
-(BOOL) hasObjectType;

/* ShipType:
   20 = WIG
   30 = fishing vessel
   31 = towing vessel
   32 = big towing vessel
   33 = dredging vessel
   34 = diving vessel
   35 = military vessel
   36 = sailing vessel
   37 = pleasure craft
   40 = HSC
   50 = pilot vessel
   51 = SAR
   52 = tug
   53 = port tender
   54 = anti pollution vessel
   55 = law enforcement vessel
   58 = medical vessel
   59 = mob83 vessel
   60 = passenger ship
   70 = cargo ship
   80 = tanker
   90 = other types of ship */
//!Setter for ShipType
//!
-(BOOL) setShipType:(int) val;
//!Getter for ShipType
//!
-(int) shipType;
//!Test for pressence of ShipType
//!
-(BOOL) hasShipType;

/* IMO:
   IMO number of the target */
//!Setter for IMO
//!
-(BOOL) setIMO:(int) val;
//!Getter for IMO
//!
-(int) IMO;
//!Test for pressence of IMO
//!
-(BOOL) hasIMO;

/* MMSI:
   MMSI number of the target */
//!Setter for MMSI
//!
-(BOOL) setMMSI:(int) val;
//!Getter for MMSI
//!
-(int) MMSI;
//!Test for pressence of MMSI
//!
-(BOOL) hasMMSI;

/* ATONType:
   0 = Unknown
   1 = Unknown fixed
   2 = Unknown floating
   3 = Fixed off shore structure
   5 = Light, without sectors
   6 = Light, with sectors
   7 = Leading Light Front
   8 = Leading Light Rear
   9 = Beacon, Cardinal N
   10 = Beacon, Cardinal E
   11 = Beacon, Cardinal S
   12 = Beacon, Cardinal W
   13 = Beacon, Port hand
   14 = Beacon, Starboard hand
   15 = Beacon, Preferred Channel port hand
   16 = Beacon, Preferred Channel starboard hand
   17 = Beacon, Isolated danger
   18 = Beacon, Safe water
   19 = Beacon, Special mark
   20 = Cardinal Mark N
   21 = Cardinal Mark E
   22 = Cardinal Mark S
   23 = Cardinal Mark W
   24 = Port hand Mark
   25 = Starboard hand Mark
   26 = Preferred Channel Port hand
   27 = Preferred Channel Starboard hand
   28 = Isolated danger
   29 = Safe Water
   30 = Special Mark
   31 = Light Vessel / LANBY/Rigs
   32 = Reference point
   33 = RACON */
//!Setter for ATONType
//!
-(BOOL) setATONType:(int) val;
//!Getter for ATONType
//!
-(int) ATONType;
//!Test for pressence of ATONType
//!
-(BOOL) hasATONType;

/* ATONName:
   Name of Aids-to-navigation */
//!Setter for ATONName
//!
-(BOOL) setATONName:(NSString *) val;
//!Getter for ATONName
//!
-(NSString *) ATONName;
//!Test for pressence of ATONName
//!
-(BOOL) hasATONName;

/* AntPosDistFromFront:
   GPS Antenna position distance from front in meters */
//!Setter for AntPosDistFromFront
//!
-(BOOL) setAntPosDistFromFront:(float) val;
//!Getter for AntPosDistFromFront
//!
-(float) antPosDistFromFront;
//!Test for pressence of AntPosDistFromFront
//!
-(BOOL) hasAntPosDistFromFront;

/* AntPosDistFromLeft:
   GPS Antenna position distance from left in meters */
//!Setter for AntPosDistFromLeft
//!
-(BOOL) setAntPosDistFromLeft:(float) val;
//!Getter for AntPosDistFromLeft
//!
-(float) antPosDistFromLeft;
//!Test for pressence of AntPosDistFromLeft
//!
-(BOOL) hasAntPosDistFromLeft;

/* NatLangShipName:
   The name of the vessel in native language */
//!Setter for NatLangShipName
//!
-(BOOL) setNatLangShipName:(NSString *) val;
//!Getter for NatLangShipName
//!
-(NSString *) natLangShipName;
//!Test for pressence of NatLangShipName
//!
-(BOOL) hasNatLangShipName;

/* PortOfRegistry:
   Port Of Registry */
//!Setter for PortOfRegistry
//!
-(BOOL) setPortOfRegistry:(NSString *) val;
//!Getter for PortOfRegistry
//!
-(NSString *) portOfRegistry;
//!Test for pressence of PortOfRegistry
//!
-(BOOL) hasPortOfRegistry;

/* CountryFlag:
   The country flag */
//!Setter for CountryFlag
//!
-(BOOL) setCountryFlag:(NSString *) val;
//!Getter for CountryFlag
//!
-(NSString *) countryFlag;
//!Test for pressence of CountryFlag
//!
-(BOOL) hasCountryFlag;

/* MaxAirDraught:
   Maximum air draught of the vessel in meters */
//!Setter for MaxAirDraught
//!
-(BOOL) setMaxAirDraught:(float) val;
//!Getter for MaxAirDraught
//!
-(float) maxAirDraught;
//!Test for pressence of MaxAirDraught
//!
-(BOOL) hasMaxAirDraught;

/* MaxDraught:
   Maximum draught of the vessel in meters */
//!Setter for MaxDraught
//!
-(BOOL) setMaxDraught:(float) val;
//!Getter for MaxDraught
//!
-(float) maxDraught;
//!Test for pressence of MaxDraught
//!
-(BOOL) hasMaxDraught;

/* DeepWaterVesselind:
   "yes" or "no" */
//!Setter for DeepWaterVesselind
//!
-(BOOL) setDeepWaterVesselind:(NSString *) val;
//!Getter for DeepWaterVesselind
//!
-(NSString *) deepWaterVesselind;
//!Test for pressence of DeepWaterVesselind
//!
-(BOOL) hasDeepWaterVesselind;
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



