/* 
 *  ServiceRequest
 *
 *  ServiceRequest is free software: you can redistribute it and/or modify
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
 *  Generated by xsd2code on Mon Apr 26 22:11:26 2010.
 **********************************************************************************
 *  Copyright 2010
 *
 */

#ifndef __SERVICEREQUEST_H__
#define __SERVICEREQUEST_H__

#include <QtCore>
#include <cstdlib>
#include <iostream>
#include "IVEFArea.h"
#include "IVEFTransmission.h"
#include "IVEFItem.h"
#include "IVEFObject.h"

//-----------------------------------------------------------
//! \brief       Class definition of ServiceRequest
//!
//! 
//!

class ServiceRequest : public QObject { 
    Q_OBJECT

public:
    //!constructor
    //!
    ServiceRequest();
    //!copy constructor
    //!
    ServiceRequest(const ServiceRequest&);
    //!= operator
    //!
    ServiceRequest & operator=(const ServiceRequest&/*val*/);
    //!              adds a Area.
    //!
    bool addArea(Area val);

    //!              gets the i-th Area.
    //!
    Area getAreaAt(int i) const;

    //!              return the number of Area objects.
    //!
    //! \return     int
    int countOfAreas() const;

    //!              sets the Transmission
    //!
    bool setTransmission(Transmission val);

    //!              gets the Transmission
    //!
    //! \return     Transmission
    //!
    Transmission getTransmission() const;

    //!              adds a Item.
    //!
    bool addItem(Item val);

    //!              gets the i-th Item.
    //!
    Item getItemAt(int i) const;

    //!              return the number of Item objects.
    //!
    //! \return     int
    int countOfItems() const;

    //!              adds a Object.
    //!
    bool addObject(Object val);

    //!              gets the i-th Object.
    //!
    Object getObjectAt(int i) const;

    //!              return the number of Object objects.
    //!
    //! \return     int
    int countOfObjects() const;

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
    QVector<Area> m_areas;
    bool m_areaPresent;
    Transmission m_transmission;
    bool m_transmissionPresent;
    QVector<Item> m_items;
    bool m_itemPresent;
    QVector<Object> m_objects;
    bool m_objectPresent;

}; 

#endif

