//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GKDashboardMultiplayerViewController.h"

@class NSMutableDictionary;

@interface GKDashboardTurnBasedInviteViewController : GKDashboardMultiplayerViewController
{
    id <GKDashboardTurnBasedInviteViewControllerDelegate> _delegateWeak;	// 8 = 0x8
    NSMutableDictionary *_inviteMessageDictionary;	// 16 = 0x10
    long long _mode;	// 24 = 0x18
}

@property(nonatomic) long long mode; // @synthesize mode=_mode;
@property(retain, nonatomic) NSMutableDictionary *inviteMessageDictionary; // @synthesize inviteMessageDictionary=_inviteMessageDictionary;
- (void)invitePlayers:(id)arg1;	// IMP=0x000000010000dc84
- (void)playNow;	// IMP=0x000000010000dc74
- (void)createGameWithPlayersToInvite:(id)arg1;	// IMP=0x000000010000d630
- (void)finishWithError:(id)arg1;	// IMP=0x000000010000d45c
- (void)finishWithMatchID:(id)arg1;	// IMP=0x000000010000d420
- (void)cancel;	// IMP=0x000000010000d3dc
- (void)cleanupStateForCancelOrError;	// IMP=0x000000010000d3a0
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x000000010000d2fc
- (void)viewDidLoad;	// IMP=0x000000010000d29c
@property(nonatomic) id <GKDashboardTurnBasedInviteViewControllerDelegate> delegate; // @synthesize delegate=_delegateWeak;
- (void)dealloc;	// IMP=0x000000010000d208

@end
