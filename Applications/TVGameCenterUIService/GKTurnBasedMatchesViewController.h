//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GKDashboardCollectionViewController.h"

#import "GKDashboardTurnBasedInviteViewControllerDelegate.h"

@class GKCollectionViewController, GKDashboardFocusButton, GKGame, GKMatchRequest, NSMutableArray, NSString;

@interface GKTurnBasedMatchesViewController : GKDashboardCollectionViewController <GKDashboardTurnBasedInviteViewControllerDelegate>
{
    _Bool _showExistingMatches;	// 8 = 0x8
    _Bool _showPlay;	// 9 = 0x9
    _Bool _showQuit;	// 10 = 0xa
    GKGame *_game;	// 16 = 0x10
    GKMatchRequest *_matchRequest;	// 24 = 0x18
    GKCollectionViewController *_masterViewController;	// 32 = 0x20
    id <GKTurnBasedMatchesViewControllerDelegate> _delegate;	// 40 = 0x28
    NSMutableArray *_activeMatches;	// 48 = 0x30
    NSMutableArray *_completeMatches;	// 56 = 0x38
    GKDashboardFocusButton *_createGameButton;	// 64 = 0x40
    NSString *_matchIDWaitingForTurnEvent;	// 72 = 0x48
}

@property(retain, nonatomic) NSString *matchIDWaitingForTurnEvent; // @synthesize matchIDWaitingForTurnEvent=_matchIDWaitingForTurnEvent;
@property(retain, nonatomic) GKDashboardFocusButton *createGameButton; // @synthesize createGameButton=_createGameButton;
@property(retain, nonatomic) NSMutableArray *completeMatches; // @synthesize completeMatches=_completeMatches;
@property(retain, nonatomic) NSMutableArray *activeMatches; // @synthesize activeMatches=_activeMatches;
@property(nonatomic) _Bool showQuit; // @synthesize showQuit=_showQuit;
@property(nonatomic) _Bool showPlay; // @synthesize showPlay=_showPlay;
@property(nonatomic) _Bool showExistingMatches; // @synthesize showExistingMatches=_showExistingMatches;
@property(nonatomic) id <GKTurnBasedMatchesViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) GKCollectionViewController *masterViewController; // @synthesize masterViewController=_masterViewController;
@property(retain, nonatomic) GKMatchRequest *matchRequest; // @synthesize matchRequest=_matchRequest;
@property(retain, nonatomic) GKGame *game; // @synthesize game=_game;
- (_Bool)isInGame;	// IMP=0x0000000100014bac
- (void)launchGameAndShowMatch:(id)arg1;	// IMP=0x0000000100014b20
- (void)showMatch:(id)arg1;	// IMP=0x0000000100014a24
- (void)notifyGameWithMatch:(id)arg1 orError:(id)arg2;	// IMP=0x0000000100014848
- (void)turnBasedInviteViewController:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x0000000100014838
- (void)turnBasedInviteViewController:(id)arg1 didCreateMatchID:(id)arg2;	// IMP=0x0000000100014774
- (void)turnBasedInviteViewControllerWasCancelled:(id)arg1;	// IMP=0x00000001000146d4
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x00000001000145cc
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x0000000100014550
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x00000001000144a8
- (id)itemAtIndexPath:(id)arg1;	// IMP=0x00000001000143cc
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x0000000100014394
- (long long)numberOfSectionsInCollectionView:(id)arg1;	// IMP=0x000000010001438c
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;	// IMP=0x0000000100014378
- (void)finishWithError:(id)arg1;	// IMP=0x0000000100014314
- (void)didPressNewGameButton:(id)arg1;	// IMP=0x0000000100014304
- (_Bool)hasData;	// IMP=0x00000001000142a4
- (void)loadData;	// IMP=0x0000000100013cbc
- (id)preferredFocusEnvironments;	// IMP=0x0000000100013c20
- (void)showInviteControllerAnimated:(_Bool)arg1;	// IMP=0x0000000100013b14
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0000000100013a34
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000001000139cc
- (void)didPressMenuButton;	// IMP=0x00000001000138f4
- (void)viewDidLoad;	// IMP=0x0000000100013688
- (id)initWithMatchRequest:(id)arg1;	// IMP=0x00000001000135bc
- (void)dealloc;	// IMP=0x00000001000134f8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

