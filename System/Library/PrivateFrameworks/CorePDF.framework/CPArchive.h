/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:04:30 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CorePDF/CorePDF-Structs.h>
#import <libobjc.A.dylib/CPDisposable.h>

@class NSMutableString, NSData;

@interface CPArchive : NSObject <CPDisposable> {

	CFArrayRef selections;
	CFArrayRef imageNodes;
	NSMutableString* plainText;
	NSMutableString* htmlString;
	NSMutableString* htmlStringNoImages;
	NSData* webArchiveData;

}
-(void)finalize;
-(id)webArchiveData;
-(void)dealloc;
-(id)init;
-(id)html;
-(void)addSelection:(CGPDFSelectionRef)arg1 ;
-(id)plainText;
-(void)dispose;
@end
