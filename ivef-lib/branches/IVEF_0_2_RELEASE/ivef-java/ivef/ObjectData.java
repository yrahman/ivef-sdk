/* 
 *  ObjectData
 *
 *  ObjectData is free software: you can redistribute it and/or modify
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
 *  Generated by xsd2code on Thu Apr 22 11:27:32 2010.
 **********************************************************************************
 *  Copyright 2010
 *
 */

package ivef;

import java.util.*;
import java.text.DecimalFormat;
import java.text.DateFormat;
import java.text.SimpleDateFormat;

import ivef.TrackData;
import ivef.VesselData;
import ivef.VoyageData;
import ivef.TaggedItem;

public class ObjectData { 

    private TrackData m_trackData; // default value is uninitialized
    private boolean m_trackDataPresent;
    private Vector<VesselData> m_vesselDatas = new Vector<VesselData>();
    private Vector<VoyageData> m_voyageDatas = new Vector<VoyageData>();
    private Vector<TaggedItem> m_taggedItems = new Vector<TaggedItem>();

    public ObjectData() {

        m_trackDataPresent = false;
    }

    public ObjectData(ObjectData val) {

        m_trackDataPresent = val.hasTrackData();
        m_trackData = val.getTrackData();
        for(int i=0; i < val.countOfVesselDatas(); i++ ) {
            m_vesselDatas.add( val.getVesselDataAt(i) );
        }
        for(int i=0; i < val.countOfVoyageDatas(); i++ ) {
            m_voyageDatas.add( val.getVoyageDataAt(i) );
        }
        for(int i=0; i < val.countOfTaggedItems(); i++ ) {
            m_taggedItems.add( val.getTaggedItemAt(i) );
        }
    }

    public void setTrackData(TrackData val) {

        m_trackDataPresent = true;
        m_trackData = val;
    }

    public TrackData getTrackData() {

        return m_trackData;
    }

    public boolean hasTrackData() {

        return m_trackDataPresent;
    }

    public void addVesselData(VesselData val) {

        m_vesselDatas.add(val);
    }

    public VesselData getVesselDataAt(int i) {

        return (VesselData) m_vesselDatas.get(i);
    }

    public int countOfVesselDatas() {

        return m_vesselDatas.size();
    }

    public void addVoyageData(VoyageData val) {

        m_voyageDatas.add(val);
    }

    public VoyageData getVoyageDataAt(int i) {

        return (VoyageData) m_voyageDatas.get(i);
    }

    public int countOfVoyageDatas() {

        return m_voyageDatas.size();
    }

    public void addTaggedItem(TaggedItem val) {

        m_taggedItems.add(val);
    }

    public TaggedItem getTaggedItemAt(int i) {

        return (TaggedItem) m_taggedItems.get(i);
    }

    public int countOfTaggedItems() {

        return m_taggedItems.size();
    }

    public String toXML() {

        String xml = "<ObjectData";
        DateFormat df = new SimpleDateFormat("yyyy-MM-dd'T'HH:mm:ss.SSS'Z'");
        DecimalFormat nf = new DecimalFormat("0.000000");

        xml += ">\n";
        if ( hasTrackData() ) {
            xml +=  m_trackData.toXML() ;
            }
        for(int i=0; i < m_vesselDatas.size(); i++ ) {
           VesselData attribute = (VesselData) m_vesselDatas.get(i);
            xml += attribute.toXML();
        }
        for(int i=0; i < m_voyageDatas.size(); i++ ) {
           VoyageData attribute = (VoyageData) m_voyageDatas.get(i);
            xml += attribute.toXML();
        }
        for(int i=0; i < m_taggedItems.size(); i++ ) {
           TaggedItem attribute = (TaggedItem) m_taggedItems.get(i);
            xml += attribute.toXML();
        }
        xml += "</ObjectData>\n";
        return xml;
    }

    public String toString(String lead) {

        String str = lead + "ObjectData\n";
        DateFormat df = new SimpleDateFormat("yyyy-MM-dd'T'HH:mm:ss.SSS'Z'");
        DecimalFormat nf = new DecimalFormat("0.000000");

        if ( hasTrackData() ) {
            str +=  m_trackData.toString(lead + "    ") ;
        }
        for(int i=0; i < m_vesselDatas.size(); i++ ) {
           VesselData attribute = (VesselData) m_vesselDatas.get(i);
           str += attribute.toString(lead + "    ");
        }
        for(int i=0; i < m_voyageDatas.size(); i++ ) {
           VoyageData attribute = (VoyageData) m_voyageDatas.get(i);
           str += attribute.toString(lead + "    ");
        }
        for(int i=0; i < m_taggedItems.size(); i++ ) {
           TaggedItem attribute = (TaggedItem) m_taggedItems.get(i);
           str += attribute.toString(lead + "    ");
        }
        return str;
    }
    public String encode( String str) {

        str = str.replaceAll("&", "&amp;");
        str = str.replaceAll("<", "&lt;");
        str = str.replaceAll(">", "&gt;");
        str = str.replaceAll("\"", "&quot;");
        return str;
    }


}
