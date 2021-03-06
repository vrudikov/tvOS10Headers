/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:00 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVFAudio/AVFAudio-Structs.h>
@class NSString;

@interface AVAudioSessionChannelDescription : NSObject {

	void* _impl;

}

@property (readonly) NSString * channelName; 
@property (readonly) NSString * owningPortUID; 
@property (readonly) unsigned long long channelNumber; 
@property (readonly) unsigned channelLabel; 
+(id)privateCreate:(id)arg1 portUID:(id)arg2 channelNumber:(unsigned)arg3 ;
+(id)privateCreateArray:(id)arg1 portUID:(id)arg2 ;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)owningPortUID;
-(unsigned long long)channelNumber;
-(unsigned)channelLabel;
-(ChannelDescriptionImpl*)privateGetImplementation;
-(BOOL)isEqualToChannel:(id)arg1 ;
-(NSString *)channelName;
@end

