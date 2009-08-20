/* 
 *  PosReport
 *
 *  PosReport is free software: you can redistribute it and/or modify
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
 *  Generated by xsd2code on Thu Aug 20 19:56:40 2009.
 **********************************************************************************
 *  Copyright 2008
 *
 */

#ifndef __POSREPORT_H__
#define __POSREPORT_H__

#include <QtCore>
#include "IVEFPos.h"
#include "IVEFSensor.h"

//-----------------------------------------------------------
//! \brief       Class definition of PosReport
//!
//! DATA describing a position report of an object
//!

class PosReport : public QObject { 
    Q_OBJECT

public:
    //!constructor
    //!
    PosReport();
    //!copy constructor
    //!
    PosReport(const PosReport&);
    //!= operator
    //!
    PosReport & operator=(const PosReport&/*val*/);
    //!              sets the Pos
    //!
    void setPos(Pos val);

    //!              gets the Pos
    //!
    //! \return     Pos
    //!
    Pos getPos() const;

    //!              adds a Sensor.
    //!
    void addSensor(Sensor val);

    //!              gets the i-th Sensor.
    //!
    Sensor getSensorAt(int i) const;

    //!              return the number of Sensor objects.
    //!
    //! \return     int
    int countOfSensors() const;

    //!              sets the Id: The identification of this track
    //!
    void setId(int val);

    //!              gets the Id: The identification of this track
    //!
    //! \return     int
    //!
    int getId() const;

    //!              sets the SourceId: The identification of the node who initially created this message
    //!
    void setSourceId(int val);

    //!              gets the SourceId: The identification of the node who initially created this message
    //!
    //! \return     int
    //!
    int getSourceId() const;

    //!              sets the UpdateTime: Date and time in ISO 8601 UTC format (YYYY-MM-DDThh:mm:ss.sssZ)  this position was measured.
    //!
    void setUpdateTime(QDateTime val);

    //!              gets the UpdateTime: Date and time in ISO 8601 UTC format (YYYY-MM-DDThh:mm:ss.sssZ)  this position was measured.
    //!
    //! \return     QDateTime
    //!
    QDateTime getUpdateTime() const;

    //!              sets the SOG: Speed over ground in meters per second
    //!
    void setSOG(float val);

    //!              gets the SOG: Speed over ground in meters per second
    //!
    //! \return     float
    //!
    float getSOG() const;

    //!              sets the COG: Course over ground  in degrees. (0-360)
    //!
    void setCOG(float val);

    //!              gets the COG: Course over ground  in degrees. (0-360)
    //!
    //! \return     float
    //!
    float getCOG() const;

    //!              sets the Lost: 'yes' or 'no'
    //!
    void setLost(QString val);

    //!              gets the Lost: 'yes' or 'no'
    //!
    //! \return     QString
    //!
    QString getLost() const;

    //!              sets the RateOfTurn: Rate of turn in degrees per minute
    //!
    void setRateOfTurn(float val);

    //!              gets the RateOfTurn: Rate of turn in degrees per minute
    //!
    //! \return     float
    //!
    float getRateOfTurn() const;

    //!              returns true if RateOfTurnis used (optional field).
    //!
    //! \return     bool
    bool hasRateOfTurn();

    //!              sets the Orientation: Orientation of the target in degrees
    //!
    void setOrientation(float val);

    //!              gets the Orientation: Orientation of the target in degrees
    //!
    //! \return     float
    //!
    float getOrientation() const;

    //!              returns true if Orientationis used (optional field).
    //!
    //! \return     bool
    bool hasOrientation();

    //!              sets the Length: Length of the target in meter
    //!
    void setLength(float val);

    //!              gets the Length: Length of the target in meter
    //!
    //! \return     float
    //!
    float getLength() const;

    //!              returns true if Lengthis used (optional field).
    //!
    //! \return     bool
    bool hasLength();

    //!              sets the Breadth: Breadth of the target in  meter
    //!
    void setBreadth(float val);

    //!              gets the Breadth: Breadth of the target in  meter
    //!
    //! \return     float
    //!
    float getBreadth() const;

    //!              returns true if Breadthis used (optional field).
    //!
    //! \return     bool
    bool hasBreadth();

    //!              sets the Altitude: The altitude of the target above the WGS-84 ellipsoid in meters
    //!
    void setAltitude(float val);

    //!              gets the Altitude: The altitude of the target above the WGS-84 ellipsoid in meters
    //!
    //! \return     float
    //!
    float getAltitude() const;

    //!              returns true if Altitudeis used (optional field).
    //!
    //! \return     bool
    bool hasAltitude();

    //!              sets the NavStatus: Navigation status of the target\n
    //!              0 = under way using engine\n
    //!              1 = at anchor\n
    //!              2 = not under command\n
    //!              3 = restricted manoeuvrability\n
    //!              4 = constrained by her draught\n
    //!              5 = moored\n
    //!              6 = aground\n
    //!              7 = engaged in fishing\n
    //!              8 = under way sailing\n
    //!              9 - 14 = reserved for future use\n
    //!              15 = undefined default
    //!
    void setNavStatus(int val);

    //!              gets the NavStatus: Navigation status of the target\n
    //!              0 = under way using engine\n
    //!              1 = at anchor\n
    //!              2 = not under command\n
    //!              3 = restricted manoeuvrability\n
    //!              4 = constrained by her draught\n
    //!              5 = moored\n
    //!              6 = aground\n
    //!              7 = engaged in fishing\n
    //!              8 = under way sailing\n
    //!              9 - 14 = reserved for future use\n
    //!              15 = undefined default
    //!
    //! \return     int
    //!
    int getNavStatus() const;

    //!              returns true if NavStatusis used (optional field).
    //!
    //! \return     bool
    bool hasNavStatus();

    //!              sets the UpdSensorType: Type of detection or track type:\n
    //!              1 = radar\n
    //!              2 = ais\n
    //!              3 = ais+radar\n
    //!              4 = deadreckoning\n
    //!              5 = other
    //!
    void setUpdSensorType(int val);

    //!              gets the UpdSensorType: Type of detection or track type:\n
    //!              1 = radar\n
    //!              2 = ais\n
    //!              3 = ais+radar\n
    //!              4 = deadreckoning\n
    //!              5 = other
    //!
    //! \return     int
    //!
    int getUpdSensorType() const;

    //!              returns true if UpdSensorTypeis used (optional field).
    //!
    //! \return     bool
    bool hasUpdSensorType();

    //!              sets the ATONOffPos: "1" or "0". Indicates whether or not the ATON is on position or not
    //!
    void setATONOffPos(bool val);

    //!              gets the ATONOffPos: "1" or "0". Indicates whether or not the ATON is on position or not
    //!
    //! \return     bool
    //!
    bool getATONOffPos() const;

    //!              returns true if ATONOffPosis used (optional field).
    //!
    //! \return     bool
    bool hasATONOffPos();

    //!              generates XML of this object including attributes and child elements
    //!
    //! \return     QString
    QString toXML();

    //!              generates output of this object including attributes and child elements
    //!
    //! \return     QString
    QString toString(QString lead);

    //!              encodes a string returning the encoded string
    //!
    //! \return     QString
    QString encode(QString str);


private:
    Pos m_pos;
    QVector<Sensor> m_sensors;
    int m_id;
    int m_sourceId;
    QDateTime m_updateTime;
    float m_SOG;
    float m_COG;
    QString m_lost;
    float m_rateOfTurn;
    bool m_rateOfTurnPresent;
    float m_orientation;
    bool m_orientationPresent;
    float m_length;
    bool m_lengthPresent;
    float m_breadth;
    bool m_breadthPresent;
    float m_altitude;
    bool m_altitudePresent;
    int m_navStatus;
    bool m_navStatusPresent;
    int m_updSensorType;
    bool m_updSensorTypePresent;
    bool m_ATONOffPos;
    bool m_ATONOffPosPresent;

}; 

#endif

