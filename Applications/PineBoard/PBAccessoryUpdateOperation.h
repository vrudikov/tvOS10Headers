//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

#import "MobileAccessoryUpdaterDelegate.h"

@class MobileAccessoryUpdater, NSError, NSObject<OS_dispatch_semaphore>, NSString;

@interface PBAccessoryUpdateOperation : NSOperation <MobileAccessoryUpdaterDelegate>
{
    NSObject<OS_dispatch_semaphore> *_semaphore;	// 24 = 0x18
    _Bool _updateComplete;	// 32 = 0x20
    _Bool _hasResumed;	// 33 = 0x21
    NSError *_error;	// 40 = 0x28
    MobileAccessoryUpdater *_bluetoothRemoteUpdater;	// 48 = 0x30
    NSString *_groupIdentifier;	// 56 = 0x38
    NSString *_stepName;	// 64 = 0x40
}

@property(nonatomic) _Bool hasResumed; // @synthesize hasResumed=_hasResumed;
@property(copy, nonatomic) NSString *stepName; // @synthesize stepName=_stepName;
@property(nonatomic, getter=isUpdateComplete) _Bool updateComplete; // @synthesize updateComplete=_updateComplete;
@property(copy, nonatomic) NSString *groupIdentifier; // @synthesize groupIdentifier=_groupIdentifier;
@property(retain, nonatomic) MobileAccessoryUpdater *bluetoothRemoteUpdater; // @synthesize bluetoothRemoteUpdater=_bluetoothRemoteUpdater;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
- (void).cxx_destruct;	// IMP=0x00000001000609ec
- (void)stepRunning:(id)arg1 deviceClass:(id)arg2 progress:(double)arg3 overallProgress:(double)arg4 info:(id)arg5;	// IMP=0x0000000100060788
- (void)stepComplete:(id)arg1 deviceClass:(id)arg2 successful:(_Bool)arg3 info:(id)arg4 error:(id)arg5;	// IMP=0x00000001000602f8
- (void)deviceClassAttached:(id)arg1;	// IMP=0x00000001000601fc
- (void)_performUpdateSequence;	// IMP=0x000000010005ff2c
- (void)_setupMobileAccessoryUpdater;	// IMP=0x000000010005fc74
- (void)main;	// IMP=0x000000010005f968

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

