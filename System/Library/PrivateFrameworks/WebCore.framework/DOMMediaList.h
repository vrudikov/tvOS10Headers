/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:01:56 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebCore/DOMObject.h>

@class NSString;

@interface DOMMediaList : DOMObject

@property (copy) NSString * mediaText; 
@property (readonly) unsigned length; 
-(NSString *)mediaText;
-(void)setMediaText:(NSString *)arg1 ;
-(void)deleteMedium:(id)arg1 ;
-(void)appendMedium:(id)arg1 ;
-(void)dealloc;
-(unsigned)length;
-(id)item:(unsigned)arg1 ;
@end

