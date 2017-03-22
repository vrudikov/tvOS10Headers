/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:51 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/VTPeerRemoteConnectionDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, VTPeerRemoteConnection, NSString;

@interface VTPhraseSpotterControlConnection : NSObject <VTPeerRemoteConnectionDelegate> {

	NSObject*<OS_dispatch_queue> _queue;
	VTPeerRemoteConnection* _peerConnection;
	BOOL _remotePhraseSpotterEnabled;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)remoteConnection:(id)arg1 handleMessageType:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)updateRemotePhraseSpotterEnabled:(BOOL)arg1 ;
-(void)notifyRemoteOfEarlyDetect;
-(void)notifyRemoteOfTriggerEvent;
-(void)notifyRemoteOfDismissal;
@end
