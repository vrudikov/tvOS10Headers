//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "LSApplicationWorkspaceObserverProtocol.h"
#import "TVASPurchaseFlowControllerDelegate.h"

@class NSHashTable, NSMapTable, NSString, TVASPurchaseFlowController;

@interface TVASBuyButtonManager : NSObject <LSApplicationWorkspaceObserverProtocol, TVASPurchaseFlowControllerDelegate>
{
    NSHashTable *_vendedBuyButtons;	// 8 = 0x8
    NSMapTable *_buyButtonsToInfo;	// 16 = 0x10
    TVASPurchaseFlowController *_purchaseController;	// 24 = 0x18
}

+ (id)sharedManager;	// IMP=0x0000000100004bc8
@property(retain, nonatomic) TVASPurchaseFlowController *purchaseController; // @synthesize purchaseController=_purchaseController;
@property(retain, nonatomic) NSMapTable *buyButtonsToInfo; // @synthesize buyButtonsToInfo=_buyButtonsToInfo;
@property(retain, nonatomic) NSHashTable *vendedBuyButtons; // @synthesize vendedBuyButtons=_vendedBuyButtons;
- (void).cxx_destruct;	// IMP=0x0000000100007c74
- (void)_simulatePurchaseWithAdamID:(id)arg1 externalVersionID:(id)arg2;	// IMP=0x0000000100007994
- (void)_loadAndRunAutomatedPurchases;	// IMP=0x0000000100007688
- (void)_setupDistributedNotificationListener;	// IMP=0x00000001000075c8
- (void)purchaseDidFailForAdamID:(id)arg1;	// IMP=0x00000001000073a8
- (void)purchaseDidBeginForAdamID:(id)arg1;	// IMP=0x0000000100007188
- (void)applicationsDidUninstall:(id)arg1;	// IMP=0x0000000100006dc0
- (void)applicationsDidFailToInstall:(id)arg1;	// IMP=0x00000001000069f8
- (void)applicationsDidInstall:(id)arg1;	// IMP=0x000000010000656c
- (void)applicationInstallsDidChange:(id)arg1;	// IMP=0x00000001000061b8
- (void)applicationInstallsDidStart:(id)arg1;	// IMP=0x0000000100005ea0
- (id)_vendedBuyButtonsWithKey:(id)arg1 value:(id)arg2;	// IMP=0x0000000100005c64
- (void)_presentViewController:(id)arg1;	// IMP=0x0000000100005b88
- (void)_handleBuyButtonAction:(id)arg1;	// IMP=0x0000000100005300
- (id)buyButtonWithElement:(id)arg1 existingView:(id)arg2;	// IMP=0x0000000100004dcc
- (id)init;	// IMP=0x0000000100004c7c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

