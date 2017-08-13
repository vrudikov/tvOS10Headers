//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IMAsynchronousTask, IMUniversalPlaybackPositionSyncHandler, NSDate, NSObject<OS_dispatch_queue>, NSTimer;

@interface IMUniversalPlaybackPositionStore : NSObject
{
    _Bool _hasLocalChangesToSync;	// 8 = 0x8
    _Bool _canRequestStoreSignIn;	// 9 = 0x9
    _Bool _refreshTimerActive;	// 10 = 0xa
    _Bool _isActive;	// 11 = 0xb
    _Bool _initialAutosyncNeeded;	// 12 = 0xc
    id <MZUniversalPlaybackPositionDataSource> _dataSource;	// 16 = 0x10
    unsigned long long _automaticSynchronizeOptions;	// 24 = 0x18
    IMAsynchronousTask *_synchronizeTask;	// 32 = 0x20
    IMAsynchronousTask *_bagLookupTask;	// 40 = 0x28
    IMUniversalPlaybackPositionSyncHandler *_syncHandler;	// 48 = 0x30
    NSDate *_dateToFireNextTimer;	// 56 = 0x38
    NSTimer *_timer;	// 64 = 0x40
    NSObject<OS_dispatch_queue> *_queue;	// 72 = 0x48
    id _accountsObserver;	// 80 = 0x50
    id _prefsObserver;	// 88 = 0x58
    double _autorefreshRate;	// 96 = 0x60
    double _bagSpecifiedPollingInterval;	// 104 = 0x68
}

+ (id)keyValueStoreItemIdentifierForItem:(id)arg1;	// IMP=0x00000001000495ac
@property(nonatomic) double bagSpecifiedPollingInterval; // @synthesize bagSpecifiedPollingInterval=_bagSpecifiedPollingInterval;
@property(nonatomic) double autorefreshRate; // @synthesize autorefreshRate=_autorefreshRate;
@property(nonatomic) id prefsObserver; // @synthesize prefsObserver=_prefsObserver;
@property(nonatomic) id accountsObserver; // @synthesize accountsObserver=_accountsObserver;
@property(nonatomic) _Bool initialAutosyncNeeded; // @synthesize initialAutosyncNeeded=_initialAutosyncNeeded;
@property(nonatomic) _Bool isActive; // @synthesize isActive=_isActive;
@property(nonatomic) _Bool refreshTimerActive; // @synthesize refreshTimerActive=_refreshTimerActive;
@property(nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) NSDate *dateToFireNextTimer; // @synthesize dateToFireNextTimer=_dateToFireNextTimer;
@property(retain, nonatomic) IMUniversalPlaybackPositionSyncHandler *syncHandler; // @synthesize syncHandler=_syncHandler;
@property(retain, nonatomic) IMAsynchronousTask *bagLookupTask; // @synthesize bagLookupTask=_bagLookupTask;
@property(retain, nonatomic) IMAsynchronousTask *synchronizeTask; // @synthesize synchronizeTask=_synchronizeTask;
@property(nonatomic) _Bool canRequestStoreSignIn; // @synthesize canRequestStoreSignIn=_canRequestStoreSignIn;
@property(nonatomic) _Bool hasLocalChangesToSync; // @synthesize hasLocalChangesToSync=_hasLocalChangesToSync;
@property(nonatomic) unsigned long long automaticSynchronizeOptions; // @synthesize automaticSynchronizeOptions=_automaticSynchronizeOptions;
@property id <MZUniversalPlaybackPositionDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void)_onQueueResumeTimer;	// IMP=0x000000010004b2f0
- (_Bool)_timerIsStopped;	// IMP=0x000000010004b2a4
- (void)_onQueueSuspendTimer;	// IMP=0x000000010004b248
- (void)_onQueueStartNewTimer;	// IMP=0x000000010004b230
- (void)_onQueueStartNewTimerWithTimeIntervalSinceNow:(double)arg1;	// IMP=0x000000010004b1c4
- (void)_onQueueStopTimer;	// IMP=0x000000010004b174
- (void)_onQueueScheduleTimer;	// IMP=0x000000010004b038
- (void)_timerFired:(id)arg1;	// IMP=0x000000010004afa8
- (void)_updateAutorefreshRateSettingAndRestartTimer:(_Bool)arg1;	// IMP=0x000000010004aed4
- (double)_effectiveAutorefreshRate;	// IMP=0x000000010004adfc
- (void)_updateForStoreAccountsChange;	// IMP=0x000000010004acfc
- (void)_onQueueLoadBagContextWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010004a614
- (void)_updateSettingsFromLoadedBagContext:(id)arg1;	// IMP=0x000000010004a4d0
- (id)_accountForSyncing;	// IMP=0x000000010004a4a4
- (void)_debugDisplayEntireBagDictionary:(id)arg1;	// IMP=0x000000010004a4a0
- (void)_onQueueSynchronizeImmediatelyWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000100049c64
- (void)_onQueueSynchronizeWithAutosynchronizeMask:(unsigned long long)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000100049c48
- (void)checkForAvailabilityWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000100049aa8
- (void)synchronizeImmedietlyWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000100049a9c
- (void)synchronizeImmediatelyWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000001000499c0
- (_Bool)automaticallySynchronizeOnBecomeActive;	// IMP=0x00000001000499b4
- (_Bool)_automaticallySynchronizeOnBecomeActive;	// IMP=0x0000000100049994
- (void)setAutomaticallySynchronizeOnBecomeActive:(_Bool)arg1;	// IMP=0x000000010004994c
- (_Bool)automaticallySynchronizeLocalChangesOnResignActive;	// IMP=0x0000000100049940
- (_Bool)_automaticallySynchronizeLocalChangesOnResignActive;	// IMP=0x0000000100049920
- (void)setAutomaticallySynchronizeLocalChangesOnResignActive:(_Bool)arg1;	// IMP=0x00000001000498d8
- (void)resignActive;	// IMP=0x0000000100049724
- (void)becomeActive;	// IMP=0x000000010004967c
- (void)_onQueueUpdateTimerForAutomaticSyncOptionChanges;	// IMP=0x0000000100049644
- (void)_onQueueUpdateTimerForActiveChanges;	// IMP=0x00000001000495c0
- (void)dealloc;	// IMP=0x000000010004943c
- (id)initWithInitialUpdateDelay:(double)arg1;	// IMP=0x000000010004942c
- (id)initWithInitialUpdateDelay:(double)arg1 isActive:(_Bool)arg2;	// IMP=0x00000001000490cc
- (id)init;	// IMP=0x00000001000490b8

@end
