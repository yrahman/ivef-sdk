/* 
 *  TaggedItem
 *
 *  TaggedItem is free software: you can redistribute it and/or modify
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
 *  Generated by xsd2code on Wed Apr 7 16:05:22 2010.
 **********************************************************************************
 *  Copyright 2010
 *
 */

#ifndef __TAGGEDITEM_H__
#define __TAGGEDITEM_H__

#include <QtCore>

//-----------------------------------------------------------
//! \brief       Class definition of TaggedItem
//!
//! Generic key/value pairs, can be used to pass information that is not (yet) in the standard, provided server and user agree upon interface. E.g. Blue sign indication for inland waterways, references to voyage or vesseldata (URL)
//!

class TaggedItem : public QObject { 
    Q_OBJECT

public:
    //!constructor
    //!
    TaggedItem();
    //!copy constructor
    //!
    TaggedItem(const TaggedItem&);
    //!= operator
    //!
    TaggedItem & operator=(const TaggedItem&/*val*/);
    //!              sets the Key: Key for the tagged item
    //!
    void setKey(QString val);

    //!              gets the Key: Key for the tagged item
    //!
    //! \return     QString
    //!
    QString getKey() const;

    //!              sets the Value: Value of the tagged item
    //!
    void setValue(QString val);

    //!              gets the Value: Value of the tagged item
    //!
    //! \return     QString
    //!
    QString getValue() const;

    //!              generates XML of this object including attributes and child elements
    //!
    //! \return     QString
    QString toXML();

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
    QString encode(QString str);


private:
    QString m_key;
    QString m_value;

}; 

#endif

