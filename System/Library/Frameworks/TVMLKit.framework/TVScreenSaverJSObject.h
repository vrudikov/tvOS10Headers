/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:34 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/IKJSObject.h>
#import <TVMLKit/TVScreenSaverJSObject.h>

@protocol TVScreenSaverJSObject <JSExport>
@required
-(BOOL)isCurrentScreenSaver;
-(id)getScreenSaverName;
-(id)getScreenSaverInfo;
-(void)setScreenSaver:(id)arg1 :(id)arg2;

@end


@interface TVScreenSaverJSObject : IKJSObject <TVScreenSaverJSObject>
-(BOOL)isCurrentScreenSaver;
-(id)getScreenSaverName;
-(id)getScreenSaverInfo;
-(void)setScreenSaver:(id)arg1 :(id)arg2 ;
-(void)requestImagesWithOptions:(id)arg1 completion:(/*^block*/id)arg2 ;
@end
