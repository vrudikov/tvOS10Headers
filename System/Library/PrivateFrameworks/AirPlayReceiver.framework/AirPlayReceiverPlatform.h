/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:08:09 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/AirPlayReceiver.framework/AirPlayReceiver
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AirPlayReceiver/AirPlayReceiver-Structs.h>
@class AirPlayControllerServer;

@interface AirPlayReceiverPlatform : NSObject {

	AirPlayReceiverUIPrivateRef _ui;
	AirPlayReceiverServerPrivate* _server;
	int _uiErrorNotifyToken;
	int _uiNotifyTokens[24];
	int _lockDownActivationStateToken;
	unsigned char _playbackPrevented;
	int _playbackAllowNotifyToken;
	int _playbackPreventNotifyToken;
	int _prefChangedNotifyToken;
	int _managedDefaultsChangedNotificationToken;
	int _systemBufferSamples;
	int _systemSampleRate;
	unsigned char _voiceForSiri;
	unsigned char _voiceForTelephony;
	AirPlayControllerServer* _controllerServer;

}
-(void)_handleAVAudioSessionServicesReset:(id)arg1 ;
@end

