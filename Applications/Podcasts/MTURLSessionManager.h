//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTSingleton.h"

#import "NSURLSessionDownloadDelegate.h"
#import "NSURLSessionTaskDelegate.h"

@class NSObject<OS_dispatch_queue>, NSString, NSURLSession;

@interface MTURLSessionManager : MTSingleton <NSURLSessionTaskDelegate, NSURLSessionDownloadDelegate>
{
    CDUnknownBlockType _sessionCompletionHandler;	// 8 = 0x8
    NSURLSession *_sessionForForegroundDownloads;	// 16 = 0x10
    NSURLSession *_sessionForBackgroundDownloads;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_startQueue;	// 32 = 0x20
}

+ (id)originalURLForTask:(id)arg1;	// IMP=0x0000000100122530
+ (long long)statusCodeForTask:(id)arg1;	// IMP=0x00000001001224e0
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *startQueue; // @synthesize startQueue=_startQueue;
@property(retain, nonatomic) NSURLSession *sessionForBackgroundDownloads; // @synthesize sessionForBackgroundDownloads=_sessionForBackgroundDownloads;
@property(retain, nonatomic) NSURLSession *sessionForForegroundDownloads; // @synthesize sessionForForegroundDownloads=_sessionForForegroundDownloads;
@property(copy, nonatomic) CDUnknownBlockType sessionCompletionHandler; // @synthesize sessionCompletionHandler=_sessionCompletionHandler;
- (void).cxx_destruct;	// IMP=0x0000000100122670
- (void)task:(id)arg1 didFailWithError:(id)arg2 orStatusCode:(long long)arg3;	// IMP=0x00000001001224a8
- (void)task:(id)arg1 didCompleteWithData:(id)arg2;	// IMP=0x0000000100122470
- (void)URLSessionDidFinishEventsForBackgroundURLSession:(id)arg1;	// IMP=0x0000000100122380
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3;	// IMP=0x00000001001221d8
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x000000010012207c
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;	// IMP=0x0000000100121cd0
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100121774
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000100120780
- (void)startDownloadTaskForURL:(id)arg1 userInitiated:(_Bool)arg2 useBackgroundFetch:(_Bool)arg3;	// IMP=0x00000001001203fc
- (void)configureSession:(id)arg1;	// IMP=0x00000001001203d0
- (id)sessionForConfiguration:(id)arg1;	// IMP=0x00000001001201f8
- (void)loadSessionsIfNeeded;	// IMP=0x000000010011ffe4
- (id)init;	// IMP=0x000000010011ff14

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

