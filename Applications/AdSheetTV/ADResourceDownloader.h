//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface ADResourceDownloader : NSObject
{
    _Bool _allowsConcurrentDownloads;	// 8 = 0x8
    NSMutableArray *_activeJobs;	// 16 = 0x10
    NSMutableArray *_downloadQueue;	// 24 = 0x18
}

@property(retain, nonatomic) NSMutableArray *downloadQueue; // @synthesize downloadQueue=_downloadQueue;
@property(retain, nonatomic) NSMutableArray *activeJobs; // @synthesize activeJobs=_activeJobs;
@property(nonatomic) _Bool allowsConcurrentDownloads; // @synthesize allowsConcurrentDownloads=_allowsConcurrentDownloads;
- (void)cancelRequest:(id)arg1;	// IMP=0x000000010001ea8c
- (void)cancelAllRequests;	// IMP=0x000000010001e5e0
- (void)cancelRequestForURL:(id)arg1;	// IMP=0x000000010001e0bc
- (void)insertJobBarrier:(CDUnknownBlockType)arg1;	// IMP=0x000000010001df74
- (void)downloadRequestJob:(id)arg1;	// IMP=0x000000010001de44
- (id)connection:(id)arg1 willCacheResponse:(id)arg2;	// IMP=0x000000010001de3c
- (void)connection:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2;	// IMP=0x000000010001dccc
- (void)connection:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x000000010001d98c
- (void)connectionDidFinishLoading:(id)arg1;	// IMP=0x000000010001d5e8
- (void)connection:(id)arg1 didReceiveData:(id)arg2;	// IMP=0x000000010001d598
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;	// IMP=0x000000010001cbe4
- (id)jobForConnection:(id)arg1;	// IMP=0x000000010001cabc
- (void)_processNextJob;	// IMP=0x000000010001c384
- (id)init;	// IMP=0x000000010001c2e4
- (void)dealloc;	// IMP=0x000000010001c264

@end

