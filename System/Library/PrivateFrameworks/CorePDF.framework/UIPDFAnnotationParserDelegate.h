/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:04:31 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSXMLParserDelegate.h>

@class NSMutableString, UIPDFAnnotation, NSString;

@interface UIPDFAnnotationParserDelegate : NSObject <NSXMLParserDelegate> {

	NSMutableString* _characters;
	BOOL _parseError;
	UIPDFAnnotation* _annotation;

}

@property (nonatomic,retain) UIPDFAnnotation * annotation;              //@synthesize annotation=_annotation - In the implementation block
@property (nonatomic,readonly) BOOL parseError;                         //@synthesize parseError=_parseError - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)init;
-(UIPDFAnnotation *)annotation;
-(void)setAnnotation:(UIPDFAnnotation *)arg1 ;
-(void)parserDidStartDocument:(id)arg1 ;
-(void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5 ;
-(void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 ;
-(void)parser:(id)arg1 foundCharacters:(id)arg2 ;
-(void)parser:(id)arg1 parseErrorOccurred:(id)arg2 ;
-(BOOL)parseError;
@end
