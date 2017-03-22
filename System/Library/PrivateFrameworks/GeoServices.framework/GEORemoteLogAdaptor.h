/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:22 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GEOBaseLogAdaptor.h>
#import <libobjc.A.dylib/GEOPBSessionRequesterDelegate.h>

@protocol OS_dispatch_source;
@class NSURL, NSObject, NSLock, GEORequester, GEOLogMessageCollectionRequest, NSMapTable, NSString;

@interface GEORemoteLogAdaptor : GEOBaseLogAdaptor <GEOPBSessionRequesterDelegate> {

	NSURL* _remoteURL;
	NSObject*<OS_dispatch_source> _sendLogMessageTimer;
	NSLock* _sendLogMessageTimerLock;
	GEORequester* _requester;
	GEOLogMessageCollectionRequest* _request;
	NSLock* _requestLock;
	/*^block*/id _backgroundTaskStart;
	/*^block*/id _backgroundTaskEnd;
	NSMapTable* _requesterToBackgroundTask;
	NSString* _debugRequestName;

}

@property (nonatomic,copy) id backgroundTaskStart;                     //@synthesize backgroundTaskStart=_backgroundTaskStart - In the implementation block
@property (nonatomic,copy) id backgroundTaskEnd;                       //@synthesize backgroundTaskEnd=_backgroundTaskEnd - In the implementation block
@property (nonatomic,retain) NSURL * remoteURL;                        //@synthesize remoteURL=_remoteURL - In the implementation block
@property (nonatomic,retain) NSString * debugRequestName;              //@synthesize debugRequestName=_debugRequestName - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)init;
-(void)requesterDidFinish:(id)arg1 ;
-(void)requesterDidCancel:(id)arg1 ;
-(void)requester:(id)arg1 didFailWithError:(id)arg2 ;
-(void)setDebugRequestName:(NSString *)arg1 ;
-(NSString *)debugRequestName;
-(id)initWithRemoteURL:(id)arg1 debugRequestName:(id)arg2 supportedTypes:(id)arg3 supportedSubTypes:(id)arg4 ;
-(void)queueLogMessage:(id)arg1 ;
-(void)flushLogs;
-(NSURL *)remoteURL;
-(void)setRemoteURL:(NSURL *)arg1 ;
-(void)_cleanupRequester;
-(void)_prepareRequest;
-(void)_startBackgroundTaskForRequester:(id)arg1 ;
-(void)_endBackgroundTaskForRequester:(id)arg1 ;
-(void)_sendPendingLogMessageToRemoteServer;
-(void)_scheduleSendLogMessageTimer;
-(void)_cleanupSendLogMessageTimer;
-(id)backgroundTaskStart;
-(void)setBackgroundTaskStart:(id)arg1 ;
-(id)backgroundTaskEnd;
-(void)setBackgroundTaskEnd:(id)arg1 ;
@end
