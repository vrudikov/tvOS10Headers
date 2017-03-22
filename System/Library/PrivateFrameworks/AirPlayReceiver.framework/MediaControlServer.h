/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:08:09 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/AirPlayReceiver.framework/AirPlayReceiver
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <AirPlayReceiver/AirPlayReceiver-Structs.h>
@class NSObject, AirPlayLocalSlideshow;

@interface MediaControlServer : NSObject {

	NSObject*<OS_dispatch_queue> _dispatchQueue;
	AirPlayLocalSlideshow* _slideshow;
	double _lastActivity;
	AirPlayReceiverServerPrivate* _connectionsServer;

}
-(id)init:(AirPlayReceiverServerPrivate*)arg1 ;
-(void)dealloc;
-(void)invalidate;
-(void)postEvent:(id)arg1 ;
-(int)_ensurePresentationStarted:(MediaControlServerConnectionPrivate*)arg1 type:(id)arg2 ;
-(void)_ensurePresentationStopped:(MediaControlServerConnectionPrivate*)arg1 type:(id)arg2 ;
-(int)_showPhoto:(MediaControlServerConnectionPrivate*)arg1 options:(id)arg2 data:(id)arg3 path:(id)arg4 ;
-(int)_startSlideshow:(MediaControlServerConnectionPrivate*)arg1 options:(id)arg2 ;
-(int)_stopSlideshow:(MediaControlServerConnectionPrivate*)arg1 ;
-(void)_slideshowActivity:(id)arg1 ;
-(void)_slideshowWillStart:(id)arg1 ;
-(void)_slideshowWillStop:(id)arg1 ;
-(int)_startVideo:(MediaControlServerConnectionPrivate*)arg1 params:(id)arg2 ;
-(void)_stopVideo:(MediaControlServerConnectionPrivate*)arg1 ;
-(void)slideshowRequestAssetWithInfo:(id)arg1 sessionUUID:(const char*)arg2 completion:(/*^block*/id)arg3 ;
-(void)setDispatchQueue:(id)arg1 ;
@end
