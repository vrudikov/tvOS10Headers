/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:08:42 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SFRemoteHotspotClient.h>
#import <libobjc.A.dylib/SFCompanionXPCManagerObserver.h>

@protocol SFRemoteHotspotSessionDelegate, SFRemoteHotspotProtocol;
@class NSString;

@interface SFRemoteHotspotSession : NSObject <SFRemoteHotspotClient, SFCompanionXPCManagerObserver> {

	BOOL _browsing;
	id<SFRemoteHotspotSessionDelegate> _delegate;
	id<SFRemoteHotspotProtocol> _connectionProxy;

}

@property (assign) BOOL browsing;                                            //@synthesize browsing=_browsing - In the implementation block
@property (retain) id<SFRemoteHotspotProtocol> connectionProxy;              //@synthesize connectionProxy=_connectionProxy - In the implementation block
@property (assign) id<SFRemoteHotspotSessionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id<SFRemoteHotspotSessionDelegate>)arg1 ;
-(id)init;
-(id<SFRemoteHotspotSessionDelegate>)delegate;
-(void)stopBrowsing;
-(void)xpcManagerConnectionInterrupted;
-(void)startBrowsing;
-(BOOL)browsing;
-(id<SFRemoteHotspotProtocol>)connectionProxy;
-(void)setBrowsing:(BOOL)arg1 ;
-(void)enableHotspotForDevice:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)updatedFoundDeviceList:(id)arg1 ;
-(void)enableRemoteHotspotForDevice:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)setConnectionProxy:(id<SFRemoteHotspotProtocol>)arg1 ;
@end

