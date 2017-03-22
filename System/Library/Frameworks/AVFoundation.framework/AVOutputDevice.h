/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:07 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class AVOutputDeviceInternal, NSString, NSDictionary;

@interface AVOutputDevice : NSObject {

	AVOutputDeviceInternal* _outputDevice;

}

@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSString * ID; 
@property (nonatomic,readonly) long long deviceType; 
@property (nonatomic,readonly) NSString * modelID; 
@property (nonatomic,readonly) BOOL hasBatteryLevel; 
@property (nonatomic,readonly) float batteryLevel; 
@property (nonatomic,readonly) NSDictionary * modelSpecificInformation; 
+(id)sharedLocalDevice;
-(void)finalize;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)name;
-(float)batteryLevel;
-(id)_weakReference;
-(id)initWithFigEndpoint:(OpaqueFigEndpointRef)arg1 ;
-(double)frecencyScore;
-(NSString *)modelID;
-(OpaqueFigEndpointRef)figEndpoint;
-(id)_figEndpointPropertyValueForKey:(CFStringRef)arg1 ;
-(BOOL)hasBatteryLevel;
-(NSDictionary *)modelSpecificInformation;
-(void)setSecondDisplayEnabled:(BOOL)arg1 ;
-(void)updateFrecencyScore;
-(long long)deviceType;
-(NSString *)ID;
@end
