/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:49 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ProVideo/ProVideo-Structs.h>
@interface PROPlugIn : NSObject
+(id)allocWithZone:(NSZone*)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(id)infoDictionary;
-(id)bundle;
-(id)className;
-(id)group;
-(id)version;
-(id)displayName;
-(CFUUIDRef)uuid;
-(void)setIsBlocked:(BOOL)arg1 ;
-(BOOL)isBlocked;
-(id)implementedProtocols;
-(id)blockedLookupKey;
-(BOOL)isEqualToPlugIn:(id)arg1 ;
-(id)plugInInstance;
-(id)initWithDictionary:(id)arg1 bundle:(id)arg2 delegate:(id)arg3 ;
-(void)setBlockedLookupKey:(id)arg1 pluginName:(id)arg2 version:(id)arg3 ;
-(id)sharedPlugInInstance;
-(id)helpURL;
-(id)infoString;
-(id)apiUsedByPlugInForProtocol:(id)arg1 ;
-(id)pluginKitPlug;
-(Class)plugInClass;
@end

