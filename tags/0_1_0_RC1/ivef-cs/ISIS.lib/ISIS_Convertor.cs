using System;
using System.IO;
using System.Text;
using System.Xml;
using System.Xml.Serialization;

namespace ISIS.lib
{
    public class ISIS_Convertor
    {
        public string CreateMSG(VesselData[] vd)
        {
            MSG_VesselData msg = new MSG_VesselData();
            msg.Body = vd;

            return SerializeObject(msg, typeof(MSG_VesselData));
        }
        public string CreateMSG(LoginResponse vd)
        {
            MSG_LoginResponse msg = new MSG_LoginResponse();
            msg.Body = new MSG_LoginResponseBody();
            msg.Body.LoginResponse = vd;

            return SerializeObject(msg, typeof(MSG_LoginResponse));
        }

        public object ParseMsg(XmlReader reader)
        {
            string ISIS_msg = reader.Name.ToUpper();

            Type type = null;

            switch (ISIS_msg)
            {
                case "MSG_VESSELDATA" : type = typeof(MSG_VesselData); break;
                case "MSG_LOGINRESPONSE": type = typeof(MSG_LoginResponse); break;
 
                default: return null;
            }

            object obj = DeserializeObject(reader, type);

            switch (ISIS_msg)
            {
                case "MSG_VESSELDATA":
                {
                    MSG_VesselData msg_vd = (MSG_VesselData)obj;
                    return msg_vd.Body;
                }

                case "MSG_LOGINRESPONSE":
                {
                    MSG_LoginResponse msg_lr = (MSG_LoginResponse)obj;
                    return msg_lr.Body.LoginResponse;
                }
            }
            // it never should come here
            return null;
        }


        private String SerializeObject(Object pObject, Type type)
        {
            try
            {
                XmlSerializerNamespaces ns = new XmlSerializerNamespaces();
                ns.Add("", "");

                XmlWriterSettings writerSettings = new XmlWriterSettings();
                writerSettings.OmitXmlDeclaration = false;  // get rid of ﻿'<?xml version="1.0" encoding="utf-8"?>' in the first line
                writerSettings.Indent = true;
                writerSettings.NewLineOnAttributes = true;

                String XmlizedString = null;
                MemoryStream memoryStream = new MemoryStream();
                XmlSerializer xs = new XmlSerializer(type);
                XmlWriter xmlWriter = XmlWriter.Create(memoryStream, writerSettings);
                xs.Serialize(xmlWriter, pObject);

                XmlizedString = UTF8ByteArrayToString(memoryStream.ToArray());
                return XmlizedString;
            }

            catch (Exception e)
            {
                System.Console.WriteLine(e);
                return null;
            }
        }


        /// <summary>
        /// Method to reconstruct an Object from an XML Reader
        /// </summary>
        /// <param name="pXmlizedString"></param>
        /// <returns></returns>
        private Object DeserializeObject(XmlReader xr, Type type)
        {
            XmlSerializer xs = new XmlSerializer(type);
            return xs.Deserialize(xr);
        }


        /// <summary>
        /// To convert a Byte Array of Unicode values (UTF-8 encoded) to a complete String.
        /// </summary>
        /// <param name="characters">Unicode Byte Array to be converted to String</param>
        /// <returns>String converted from Unicode Byte Array</returns>
        private String UTF8ByteArrayToString(Byte[] characters)
        {
            UTF8Encoding encoding = new UTF8Encoding();
            String constructedString = encoding.GetString(characters);
            return (constructedString);
        }



        /// <summary>
        /// Converts the String to UTF8 Byte array and is used in De serialization
        /// </summary>
        /// <param name="pXmlString"></param>
        /// <returns></returns>
        private Byte[] StringToUTF8ByteArray(String pXmlString)
        {
            UTF8Encoding encoding = new UTF8Encoding();
            Byte[] byteArray = encoding.GetBytes(pXmlString);

            return byteArray;
        }


    }
}
