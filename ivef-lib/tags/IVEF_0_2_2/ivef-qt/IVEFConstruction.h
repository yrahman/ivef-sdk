/* 
 *  Construction
 *
 *  Construction is free software: you can redistribute it and/or modify
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
 *  Generated by xsd2code on Tue May 18 15:08:32 2010.
 **********************************************************************************
 *  Copyright 2010
 *
 */

#ifndef __CONSTRUCTION_H__
#define __CONSTRUCTION_H__

#include <QtCore>
#include <cstdlib>
#include <iostream>
#include "IVEFUnType.h"

//-----------------------------------------------------------
//! \brief       Class definition of Construction
//!
//! attributes of the object regarding the physical construction
//!

class Construction : public QObject { 
    Q_OBJECT

public:
    //!constructor
    //!
    Construction();
    //!copy constructor
    //!
    Construction(const Construction&);
    //!= operator
    //!
    Construction & operator=(const Construction&/*val*/);
    //!              sets the UnType: Object type according to CODES FOR TYPES OF MEANS OF TRANSPORT Revision 2 (UNECE CEFACT Trade Facilitation Recommendation No. 28 edition 2007) Check latest version
    //!
    bool setUnType(UnType val);

    //!              gets the UnType: Object type according to CODES FOR TYPES OF MEANS OF TRANSPORT Revision 2 (UNECE CEFACT Trade Facilitation Recommendation No. 28 edition 2007) Check latest version
    //!
    //! \return     UnType
    //!
    UnType getUnType() const;

    //!              returns true if UnTypeis used (optional field).
    //!
    //! \return     bool
    bool hasUnType() const;

    //!              sets the HullColor: Color of Hull (in RGB hex) for SAR operations
    //!
    bool setHullColor(QString val);

    //!              gets the HullColor: Color of Hull (in RGB hex) for SAR operations
    //!
    //! \return     QString
    //!
    QString getHullColor() const;

    //!              returns true if HullColoris used (optional field).
    //!
    //! \return     bool
    bool hasHullColor() const;

    //!              sets the HullType: Type of hull (1 = single,  2 = double, 3 =  triple)
    //!
    bool setHullType(int val);

    //!              gets the HullType: Type of hull (1 = single,  2 = double, 3 =  triple)
    //!
    //! \return     int
    //!
    int getHullType() const;

    //!              returns true if HullTypeis used (optional field).
    //!
    //! \return     bool
    bool hasHullType() const;

    //!              sets the DeadWeight: Dead weight in tons
    //!
    bool setDeadWeight(float val);

    //!              gets the DeadWeight: Dead weight in tons
    //!
    //! \return     float
    //!
    float getDeadWeight() const;

    //!              returns true if DeadWeightis used (optional field).
    //!
    //! \return     bool
    bool hasDeadWeight() const;

    //!              sets the GrossWeight: Gross weight in tons
    //!
    bool setGrossWeight(float val);

    //!              gets the GrossWeight: Gross weight in tons
    //!
    //! \return     float
    //!
    float getGrossWeight() const;

    //!              returns true if GrossWeightis used (optional field).
    //!
    //! \return     bool
    bool hasGrossWeight() const;

    //!              sets the Length: The overall length of the target in meter as confirmed by NCA
    //!
    bool setLength(float val);

    //!              gets the Length: The overall length of the target in meter as confirmed by NCA
    //!
    //! \return     float
    //!
    float getLength() const;

    //!              returns true if Lengthis used (optional field).
    //!
    //! \return     bool
    bool hasLength() const;

    //!              sets the LloydsShipType: Number indicating type of vessel
    //!
    bool setLloydsShipType(int val);

    //!              gets the LloydsShipType: Number indicating type of vessel
    //!
    //! \return     int
    //!
    int getLloydsShipType() const;

    //!              returns true if LloydsShipTypeis used (optional field).
    //!
    //! \return     bool
    bool hasLloydsShipType() const;

    //!              sets the YearOfBuild: The year the vessel was build in 4 digits e.g. 2010
    //!
    bool setYearOfBuild(int val);

    //!              gets the YearOfBuild: The year the vessel was build in 4 digits e.g. 2010
    //!
    //! \return     int
    //!
    int getYearOfBuild() const;

    //!              returns true if YearOfBuildis used (optional field).
    //!
    //! \return     bool
    bool hasYearOfBuild() const;

    //!              sets the MaxAirDraught: Maximum air draught of the object in meters, to be used if voyage data is not available
    //!
    bool setMaxAirDraught(float val);

    //!              gets the MaxAirDraught: Maximum air draught of the object in meters, to be used if voyage data is not available
    //!
    //! \return     float
    //!
    float getMaxAirDraught() const;

    //!              returns true if MaxAirDraughtis used (optional field).
    //!
    //! \return     bool
    bool hasMaxAirDraught() const;

    //!              sets the MaxDraught: Maximum draught of the object in meters, to be used if voyage data is not available
    //!
    bool setMaxDraught(float val);

    //!              gets the MaxDraught: Maximum draught of the object in meters, to be used if voyage data is not available
    //!
    //! \return     float
    //!
    float getMaxDraught() const;

    //!              returns true if MaxDraughtis used (optional field).
    //!
    //! \return     bool
    bool hasMaxDraught() const;

    //!              sets the MaxPersonsOnBoard: The maximum number of persons on board of the object (crew, support, passengers, pilots)
    //!
    bool setMaxPersonsOnBoard(int val);

    //!              gets the MaxPersonsOnBoard: The maximum number of persons on board of the object (crew, support, passengers, pilots)
    //!
    //! \return     int
    //!
    int getMaxPersonsOnBoard() const;

    //!              returns true if MaxPersonsOnBoardis used (optional field).
    //!
    //! \return     bool
    bool hasMaxPersonsOnBoard() const;

    //!              sets the MaxSpeed: The maximum speed the object is able to sustain with normal draft and load
    //!
    bool setMaxSpeed(float val);

    //!              gets the MaxSpeed: The maximum speed the object is able to sustain with normal draft and load
    //!
    //! \return     float
    //!
    float getMaxSpeed() const;

    //!              returns true if MaxSpeedis used (optional field).
    //!
    //! \return     bool
    bool hasMaxSpeed() const;

    //!              sets the Width: Overall width of the target in meter as confirmed by the NCA
    //!
    bool setWidth(float val);

    //!              gets the Width: Overall width of the target in meter as confirmed by the NCA
    //!
    //! \return     float
    //!
    float getWidth() const;

    //!              returns true if Widthis used (optional field).
    //!
    //! \return     bool
    bool hasWidth() const;

    //!              generates XML of this object including attributes and child elements
    //!              returns NULL if not all required elements are available
    //!
    //! \return     QString
    QString toXML() const;

    //!              generates output of this object including attributes and child elements
    //!
    //! \return     QString
    QString toString();

    //!              generates output of this object including attributes and child elements
    //!
    //! \return     QString
    QString toString(QString lead);

    //!              encodes a string returning the encoded string
    //!
    //! \return     QString
    QString encode(QString str) const;


private:
    UnType m_unType;
    bool m_unTypePresent;
    QString m_hullColor;
    bool m_hullColorPresent;
    int m_hullType;
    bool m_hullTypePresent;
    float m_deadWeight;
    bool m_deadWeightPresent;
    float m_grossWeight;
    bool m_grossWeightPresent;
    float m_length;
    bool m_lengthPresent;
    int m_lloydsShipType;
    bool m_lloydsShipTypePresent;
    int m_yearOfBuild;
    bool m_yearOfBuildPresent;
    float m_maxAirDraught;
    bool m_maxAirDraughtPresent;
    float m_maxDraught;
    bool m_maxDraughtPresent;
    int m_maxPersonsOnBoard;
    bool m_maxPersonsOnBoardPresent;
    float m_maxSpeed;
    bool m_maxSpeedPresent;
    float m_width;
    bool m_widthPresent;

}; 

#endif
