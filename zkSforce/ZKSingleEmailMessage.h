// Copyright (c) 2013 Simon Fell
//
// Permission is hereby granted, free of charge, to any person obtaining a 
// copy of this software and associated documentation files (the "Software"), 
// to deal in the Software without restriction, including without limitation
// the rights to use, copy, modify, merge, publish, distribute, sublicense, 
// and/or sell copies of the Software, and to permit persons to whom the 
// Software is furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included 
// in all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS 
// OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, 
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE 
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER 
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, 
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN 
// THE SOFTWARE.
//

#import "ZKEmail.h"

/*
<complexType name="SingleEmailMessage" xmlns="http://www.w3.org/2001/XMLSchema" xmlns:ens="urn:sobject.partner.soap.sforce.com" xmlns:tns="urn:partner.soap.sforce.com" xmlns:fns="urn:fault.partner.soap.sforce.com" xmlns:xsd="http://www.w3.org/2001/XMLSchema" xmlns:soap="http://schemas.xmlsoap.org/wsdl/soap/" xmlns="http://schemas.xmlsoap.org/wsdl/">
  <complexContent>
    <extension base="tns:Email">
      <sequence>
        <element nillable="true" type="xsd:string" maxOccurs="25" minOccurs="0" name="bccAddresses"/>
        <element nillable="true" type="xsd:string" maxOccurs="25" minOccurs="0" name="ccAddresses"/>
        <element nillable="true" type="xsd:string" name="charset"/>
        <element type="tns:ID" maxOccurs="unbounded" minOccurs="0" name="documentAttachments"/>
        <element nillable="true" type="xsd:string" name="htmlBody"/>
        <element nillable="true" type="xsd:string" minOccurs="0" name="inReplyTo"/>
        <element type="tns:EmailFileAttachment" maxOccurs="unbounded" minOccurs="0" name="fileAttachments"/>
        <element nillable="true" type="tns:ID" maxOccurs="1" minOccurs="0" name="orgWideEmailAddressId"/>
        <element nillable="true" type="xsd:string" name="plainTextBody"/>
        <element nillable="true" type="xsd:string" minOccurs="0" name="references"/>
        <element nillable="true" type="tns:ID" name="targetObjectId"/>
        <element nillable="true" type="tns:ID" name="templateId"/>
        <element nillable="true" type="xsd:string" maxOccurs="100" minOccurs="0" name="toAddresses"/>
        <element nillable="true" type="tns:ID" name="whatId"/>
      </sequence>
    </extension>
  </complexContent>
</complexType>
*/
@interface ZKSingleEmailMessage : ZKEmail {
	NSArray   *bccAddresses;
	NSArray   *ccAddresses;
	NSString  *charset;
	NSArray   *documentAttachments;
	NSString  *htmlBody;
	NSString  *inReplyTo;
	NSArray   *fileAttachments;
	NSString  *orgWideEmailAddressId;
	NSString  *plainTextBody;
	NSString  *references;
	NSString  *targetObjectId;
	NSString  *templateId;
	NSArray   *toAddresses;
	NSString  *whatId;
}
@property (retain) NSArray   *bccAddresses;  // of NSString
@property (retain) NSArray   *ccAddresses;  // of NSString
@property (retain) NSString  *charset; 
@property (retain) NSArray   *documentAttachments;  // of NSString
@property (retain) NSString  *htmlBody; 
@property (retain) NSString  *inReplyTo; 
@property (retain) NSArray   *fileAttachments;  // of ZKEmailFileAttachment
@property (retain) NSString  *orgWideEmailAddressId; 
@property (retain) NSString  *plainTextBody; 
@property (retain) NSString  *references; 
@property (retain) NSString  *targetObjectId; 
@property (retain) NSString  *templateId; 
@property (retain) NSArray   *toAddresses;  // of NSString
@property (retain) NSString  *whatId; 
@end
