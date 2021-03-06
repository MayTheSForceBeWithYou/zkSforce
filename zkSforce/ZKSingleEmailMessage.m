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
// 
// Note: This file was generated by WSDL2ZKSforce. 
//		  see https://github.com/superfell/WSDL2ZKSforce
//       DO NOT HAND EDIT.
//

#import "ZKSingleEmailMessage.h"
#import "zkEnvelope.h"

@implementation ZKSingleEmailMessage

@synthesize bccAddresses, ccAddresses, charset, documentAttachments, htmlBody, inReplyTo, fileAttachments, orgWideEmailAddressId, plainTextBody, references, targetObjectId, templateId, toAddresses, whatId;

-(void)dealloc {
	[bccAddresses release];
	[ccAddresses release];
	[charset release];
	[documentAttachments release];
	[htmlBody release];
	[inReplyTo release];
	[fileAttachments release];
	[orgWideEmailAddressId release];
	[plainTextBody release];
	[references release];
	[targetObjectId release];
	[templateId release];
	[toAddresses release];
	[whatId release];
	[super dealloc];
}

-(void)serializeToEnvelope:(ZKEnvelope *)env elemName:(NSString *)elemName {
	[env startElement:elemName type:@"SingleEmailMessage"];
	[env addBoolElement:@"bccSender"            elemValue:self.bccSender];
	[env addElement:@"emailPriority"            elemValue:self.emailPriority         nillable:YES optional:NO];
	[env addElement:@"replyTo"                  elemValue:self.replyTo               nillable:YES optional:NO];
	[env addBoolElement:@"saveAsActivity"       elemValue:self.saveAsActivity];
	[env addElement:@"senderDisplayName"        elemValue:self.senderDisplayName     nillable:YES optional:NO];
	[env addElement:@"subject"                  elemValue:self.subject               nillable:YES optional:NO];
	[env addBoolElement:@"useSignature"         elemValue:self.useSignature];
	[env addElementArray:@"bccAddresses"        elemValue:self.bccAddresses];
	[env addElementArray:@"ccAddresses"         elemValue:self.ccAddresses];
	[env addElement:@"charset"                  elemValue:self.charset               nillable:YES optional:NO];
	[env addElementArray:@"documentAttachments" elemValue:self.documentAttachments];
	[env addElement:@"htmlBody"                 elemValue:self.htmlBody              nillable:YES optional:NO];
	[env addElement:@"inReplyTo"                elemValue:self.inReplyTo             nillable:YES optional:YES];
	[env addElementArray:@"fileAttachments"     elemValue:self.fileAttachments];
	[env addElement:@"orgWideEmailAddressId"    elemValue:self.orgWideEmailAddressId nillable:YES optional:YES];
	[env addElement:@"plainTextBody"            elemValue:self.plainTextBody         nillable:YES optional:NO];
	[env addElement:@"references"               elemValue:self.references            nillable:YES optional:YES];
	[env addElement:@"targetObjectId"           elemValue:self.targetObjectId        nillable:YES optional:NO];
	[env addElement:@"templateId"               elemValue:self.templateId            nillable:YES optional:NO];
	[env addElementArray:@"toAddresses"         elemValue:self.toAddresses];
	[env addElement:@"whatId"                   elemValue:self.whatId                nillable:YES optional:NO];
	[env endElement:elemName];
}
@end
