//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

#import "LSApplicationWorkspaceObserverProtocol.h"
#import "SSDownloadManagerObserver.h"

@class FBSApplicationTerminationAssertion, NSError, NSString, SSDownload, SSPurchase;

@interface PBAppUpdateOperation : NSOperation <SSDownloadManagerObserver, LSApplicationWorkspaceObserverProtocol>
{
    int __state;	// 24 = 0x18
    int __ordinal;	// 28 = 0x1c
    NSString *__bundleID;	// 32 = 0x20
    FBSApplicationTerminationAssertion *__termAssertion;	// 40 = 0x28
    SSDownload *__download;	// 48 = 0x30
    NSError *__myError;	// 56 = 0x38
    SSPurchase *__pendingPurchase;	// 64 = 0x40
    NSString *_adamID;	// 72 = 0x48
    NSString *_externalVersionID;	// 80 = 0x50
}

+ (void)__newWithAdamID:(id)arg1 externalVersionID:(id)arg2 buyParams:(id)arg3 bundleID:(id)arg4 dsid:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x00000001000a0180
+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;	// IMP=0x00000001000a0090
@property(readonly) NSString *externalVersionID; // @synthesize externalVersionID=_externalVersionID;
@property(readonly) NSString *adamID; // @synthesize adamID=_adamID;
- (void).cxx_destruct;	// IMP=0x00000001000a36d8
- (void)applicationsDidFailToInstall:(id)arg1;	// IMP=0x00000001000a34a8
- (void)applicationInstallsDidCancel:(id)arg1;	// IMP=0x00000001000a3298
- (void)applicationsDidInstall:(id)arg1;	// IMP=0x00000001000a3088
- (long long)__bytesTotal;	// IMP=0x00000001000a3070
- (long long)__bytesDownloaded;	// IMP=0x00000001000a3058
@property(readonly) double percentComplete;
@property(readonly) NSError *failureError;
@property(readonly) NSString *downloadPhaseIdentifier;
- (void)download:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x00000001000a2d5c
- (void)purchase:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x00000001000a2c30
- (void)resume;	// IMP=0x00000001000a2c18
- (void)pause;	// IMP=0x00000001000a2c00
- (void)__finish;	// IMP=0x00000001000a29bc
- (void)start;	// IMP=0x00000001000a1ddc
- (_Bool)isReady;	// IMP=0x00000001000a1d80
- (_Bool)isFinished;	// IMP=0x00000001000a1d68
- (_Bool)isExecuting;	// IMP=0x00000001000a1d50
@property(readonly, getter=isInitialized) _Bool initialized;
- (_Bool)isAsynchronous;	// IMP=0x00000001000a1d30
- (void)dealloc;	// IMP=0x00000001000a1cd4
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

