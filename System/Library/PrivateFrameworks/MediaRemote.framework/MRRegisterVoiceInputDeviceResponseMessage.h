/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:42 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MRProtocolMessage.h>

@interface MRRegisterVoiceInputDeviceResponseMessage : MRProtocolMessage

@property (nonatomic,readonly) unsigned deviceID; 
@property (nonatomic,readonly) unsigned errorCode; 
-(unsigned long long)type;
-(unsigned)errorCode;
-(id)initWithDeviceID:(unsigned)arg1 errorCode:(unsigned)arg2 ;
-(unsigned)deviceID;
@end
