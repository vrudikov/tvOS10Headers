//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ADSOptInConnection_RPC.h"
#import "NSXPCListenerDelegate.h"

@class NSMutableArray, NSString, NSXPCListener;

@interface ADSOptInConnectionManager : NSObject <NSXPCListenerDelegate, ADSOptInConnection_RPC>
{
    _Bool _refreshInFlight;	// 8 = 0x8
    NSXPCListener *_xpcListener;	// 16 = 0x10
    NSMutableArray *_refreshCompletionHandlers;	// 24 = 0x18
    double _optInBTAPollInterval;	// 32 = 0x20
}

+ (_Bool)limitAdTrackingRestrictionEnabled;	// IMP=0x000000010002ebf8
+ (id)startOptInConnection;	// IMP=0x000000010002eae0
@property(nonatomic) double optInBTAPollInterval; // @synthesize optInBTAPollInterval=_optInBTAPollInterval;
@property(retain, nonatomic) NSMutableArray *refreshCompletionHandlers; // @synthesize refreshCompletionHandlers=_refreshCompletionHandlers;
@property(nonatomic) _Bool refreshInFlight; // @synthesize refreshInFlight=_refreshInFlight;
@property(retain, nonatomic) NSXPCListener *xpcListener; // @synthesize xpcListener=_xpcListener;
- (void)getiAdIDsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100030df0
- (void)handlePushNotification:(id)arg1;	// IMP=0x0000000100030dec
- (void)primeAdSheetDataStore;	// IMP=0x0000000100030d58
- (void)handleAccountChange:(CDUnknownBlockType)arg1;	// IMP=0x0000000100030a64
- (void)handleAccountChange;	// IMP=0x0000000100030a4c
- (void)setOptInStatus:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100030194
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x000000010002ffa4
- (void)_adjustOptInStatusForUserDeviceIfNeeded;	// IMP=0x000000010002fdfc
- (id)optInStatusStringRepresentation:(long long)arg1;	// IMP=0x000000010002fd60
- (void)scheduleBTAJobAtTimeIntervalFromNow:(double)arg1 forceReschedule:(_Bool)arg2;	// IMP=0x000000010002fca8
- (void)refreshOptInStatusRefreshingWeakToken:(_Bool)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010002f614
- (void)_callRefreshCompletionHandlersWithStatus:(long long)arg1;	// IMP=0x000000010002f464
- (void)refreshOptInStatus;	// IMP=0x000000010002f450
- (void)_refreshWeakTokenWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010002ef18
- (id)initWithLimitAdTrackingBTAPollingInterval:(double)arg1;	// IMP=0x000000010002ec38

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

