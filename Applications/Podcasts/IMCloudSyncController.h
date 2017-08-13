//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IMCloudSyncOperationDelegate.h"
#import "IMCloudsyncDeserializeOperationDelegate.h"

@class IMCloudSyncClampsController, IMCloudSyncDeserializer, IMCloudSyncStoreAuthenticationController, IMCloudSyncTransaction, NSMutableArray, NSObject<OS_dispatch_queue>, NSOperationQueue, NSString, NSURL;

@interface IMCloudSyncController : NSObject <IMCloudSyncOperationDelegate, IMCloudsyncDeserializeOperationDelegate>
{
    id <IMCloudSyncControllerDelegate> _delegate;	// 8 = 0x8
    NSURL *_defaultGetURL;	// 16 = 0x10
    NSURL *_defaultSetURL;	// 24 = 0x18
    NSString *_defaultDomain;	// 32 = 0x20
    _Bool _enabled;	// 40 = 0x28
    IMCloudSyncStoreAuthenticationController *_authenticationController;	// 48 = 0x30
    _Bool _resolvingError;	// 56 = 0x38
    NSMutableArray *_pendingTransactions;	// 64 = 0x40
    IMCloudSyncClampsController *_clampsController;	// 72 = 0x48
    IMCloudSyncTransaction *_currentTransaction;	// 80 = 0x50
    NSOperationQueue *_operationQueue;	// 88 = 0x58
    IMCloudSyncDeserializer *_currentDeserializer;	// 96 = 0x60
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 104 = 0x68
    unsigned long long _backgroundTaskIdentifier;	// 112 = 0x70
}

@property(nonatomic) unsigned long long backgroundTaskIdentifier; // @synthesize backgroundTaskIdentifier=_backgroundTaskIdentifier;
@property(nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(retain, nonatomic) IMCloudSyncDeserializer *currentDeserializer; // @synthesize currentDeserializer=_currentDeserializer;
@property(nonatomic, getter=isResolvingError) _Bool resolvingError; // @synthesize resolvingError=_resolvingError;
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(retain, nonatomic) IMCloudSyncTransaction *currentTransaction; // @synthesize currentTransaction=_currentTransaction;
@property(retain, nonatomic) IMCloudSyncClampsController *clampsController; // @synthesize clampsController=_clampsController;
@property(retain, nonatomic) NSMutableArray *pendingTransactions; // @synthesize pendingTransactions=_pendingTransactions;
@property(getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(retain) IMCloudSyncStoreAuthenticationController *authenticationController; // @synthesize authenticationController=_authenticationController;
@property(copy) NSString *defaultDomain; // @synthesize defaultDomain=_defaultDomain;
@property(retain) NSURL *defaultSetURL; // @synthesize defaultSetURL=_defaultSetURL;
@property(retain) NSURL *defaultGetURL; // @synthesize defaultGetURL=_defaultGetURL;
@property id <IMCloudSyncControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)deserializeOperationDidFinish:(id)arg1 shouldReschedule:(_Bool)arg2;	// IMP=0x0000000100206530
- (void)cloudSyncOperationOperationDidFinish:(id)arg1;	// IMP=0x0000000100206524
- (void)cloudSyncOperation:(id)arg1 scheduleURLOperation:(id)arg2;	// IMP=0x00000001002064c0
- (void)operation:(id)arg1 failedWithError:(id)arg2;	// IMP=0x000000010020627c
- (void)operation:(id)arg1 didReceiveResponse:(id)arg2;	// IMP=0x000000010020613c
- (void)operation:(id)arg1 finishedWithOutput:(id)arg2;	// IMP=0x000000010020601c
- (void)_endBackgroundTask;	// IMP=0x0000000100205f7c
- (void)_beginBackgroundTask;	// IMP=0x0000000100205e18
- (void)_delegateTransactionDidFinish:(id)arg1;	// IMP=0x0000000100205ce8
- (_Bool)_delegateTransactionDidFail:(id)arg1 withError:(id)arg2;	// IMP=0x0000000100205bec
- (_Bool)_delegateShouldScheduleTransaction:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100205b38
- (void)_errorResolutionDefault:(id)arg1;	// IMP=0x0000000100205aac
- (void)_errorResolutionCancel:(id)arg1;	// IMP=0x0000000100205a38
- (void)_errorResolutionRetry:(id)arg1;	// IMP=0x0000000100205904
- (void)_resolveError:(id)arg1 resolution:(int)arg2;	// IMP=0x0000000100205804
- (_Bool)_requireUserOptInForTransaction:(id)arg1;	// IMP=0x0000000100205790
- (void)_processOperationOutput:(id)arg1 operationAuthenticated:(_Bool)arg2;	// IMP=0x0000000100205368
- (void)_transactionDidFail:(id)arg1 withError:(id)arg2;	// IMP=0x0000000100205174
- (void)_currentTransactionDidFinish;	// IMP=0x0000000100205054
- (id)_scheduleTransactionWithType:(int)arg1 URL:(id)arg2 keys:(id)arg3 processor:(id)arg4;	// IMP=0x0000000100204f9c
- (_Bool)_authenticationCanProcessTransaction:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100204ec0
- (_Bool)_clampsCanScheduleTransaction:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100204e84
- (_Bool)_isTransactionValid:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100204dec
- (_Bool)_isEnabledForTransaction:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100204d84
- (_Bool)_canScheduleTransaction:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100204d04
- (void)_addPendingTransaction:(id)arg1;	// IMP=0x0000000100204c9c
- (void)_scheduleTransaction:(id)arg1;	// IMP=0x0000000100204c2c
- (id)_requestForTransaction:(id)arg1;	// IMP=0x0000000100204b50
- (void)_processCurrentTransaction;	// IMP=0x0000000100204a74
- (void)_processPendingTransactions;	// IMP=0x00000001002049dc
- (void)_cancelTransaction:(id)arg1 error:(id)arg2;	// IMP=0x00000001002048cc
- (void)_cancelAllTransactions:(id)arg1;	// IMP=0x0000000100204728
- (void)performBlockAndWait:(CDUnknownBlockType)arg1;	// IMP=0x00000001002046fc
- (void)performBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000001002046d0
- (_Bool)isIdle;	// IMP=0x00000001002044cc
- (void)reset;	// IMP=0x0000000100204434
- (void)resolveError:(id)arg1 resolution:(int)arg2;	// IMP=0x0000000100204354
- (void)cancelScheduledTransaction:(id)arg1;	// IMP=0x0000000100204250
- (void)scheduleTransaction:(id)arg1;	// IMP=0x0000000100204134
- (id)scheduleSetTransactionWithKeys:(id)arg1 processor:(id)arg2;	// IMP=0x00000001002040e0
- (id)scheduleGetTransactionWithKeys:(id)arg1 processor:(id)arg2;	// IMP=0x000000010020408c
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000100203e88
- (void)dealloc;	// IMP=0x0000000100203cdc
- (id)init;	// IMP=0x0000000100203af4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
