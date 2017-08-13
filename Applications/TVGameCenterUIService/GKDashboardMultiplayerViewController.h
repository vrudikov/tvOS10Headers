//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GKDashboardCollectionViewController.h"

#import "UIGestureRecognizerDelegate.h"

@class GKDashboardMultiplayerDataSource, GKDashboardMultiplayerPickerViewController, GKGame, GKMatchRequest, NSString, UIActivityIndicatorView, UIButton, UILabel;

@interface GKDashboardMultiplayerViewController : GKDashboardCollectionViewController <UIGestureRecognizerDelegate>
{
    _Bool _didAcceptGameInvite;	// 8 = 0x8
    _Bool _statusViewHidden;	// 9 = 0x9
    _Bool _needsFloatIn;	// 10 = 0xa
    UILabel *_statusLabel;	// 16 = 0x10
    GKMatchRequest *_matchRequest;	// 24 = 0x18
    GKMatchRequest *_originalMatchRequest;	// 32 = 0x20
    NSString *_defaultInvitationMessage;	// 40 = 0x28
    GKGame *_game;	// 48 = 0x30
    UILabel *_multiplayerTitleLabel;	// 56 = 0x38
    UILabel *_playerRangeLabel;	// 64 = 0x40
    UIActivityIndicatorView *_spinner;	// 72 = 0x48
    UIButton *_playButton;	// 80 = 0x50
    UIButton *_inviteButton;	// 88 = 0x58
    GKDashboardMultiplayerPickerViewController *_picker;	// 96 = 0x60
}

@property(retain, nonatomic) GKDashboardMultiplayerPickerViewController *picker; // @synthesize picker=_picker;
@property(nonatomic) _Bool needsFloatIn; // @synthesize needsFloatIn=_needsFloatIn;
@property(nonatomic) UIButton *inviteButton; // @synthesize inviteButton=_inviteButton;
@property(nonatomic) UIButton *playButton; // @synthesize playButton=_playButton;
@property(nonatomic) UIActivityIndicatorView *spinner; // @synthesize spinner=_spinner;
@property(nonatomic) UILabel *playerRangeLabel; // @synthesize playerRangeLabel=_playerRangeLabel;
@property(nonatomic) UILabel *multiplayerTitleLabel; // @synthesize multiplayerTitleLabel=_multiplayerTitleLabel;
@property(nonatomic) _Bool statusViewHidden; // @synthesize statusViewHidden=_statusViewHidden;
@property(nonatomic) _Bool didAcceptGameInvite; // @synthesize didAcceptGameInvite=_didAcceptGameInvite;
@property(retain, nonatomic) GKGame *game; // @synthesize game=_game;
@property(copy, nonatomic) NSString *defaultInvitationMessage; // @synthesize defaultInvitationMessage=_defaultInvitationMessage;
@property(readonly, copy, nonatomic) GKMatchRequest *originalMatchRequest; // @synthesize originalMatchRequest=_originalMatchRequest;
@property(readonly, copy, nonatomic) GKMatchRequest *matchRequest; // @synthesize matchRequest=_matchRequest;
@property(nonatomic) UILabel *statusLabel; // @synthesize statusLabel=_statusLabel;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x00000001000404e4
- (void)playersToInvite:(id)arg1;	// IMP=0x00000001000404ac
- (void)localPlayerAcceptedGameInvite:(id)arg1;	// IMP=0x0000000100040474
- (void)removedPlayer:(id)arg1;	// IMP=0x0000000100040470
- (void)invitePlayers:(id)arg1;	// IMP=0x000000010004046c
- (void)cancel;	// IMP=0x0000000100040468
- (void)playNow;	// IMP=0x0000000100040464
- (id)preferredFocusEnvironments;	// IMP=0x000000010004037c
- (void)didPressPlayButton;	// IMP=0x000000010004021c
- (void)didFinishPickingPlayers:(id)arg1;	// IMP=0x0000000100040128
- (void)didPressInviteButton;	// IMP=0x000000010003feec
- (void)willPresentPlayerPicker:(id)arg1;	// IMP=0x000000010003fee8
- (long long)maxAvailablePlayers;	// IMP=0x000000010003fec4
- (void)removePlayer:(id)arg1;	// IMP=0x000000010003fdfc
- (void)removeAutomatchPlayer;	// IMP=0x000000010003fdb8
- (void)addAutomatchPlayer;	// IMP=0x000000010003fd74
- (void)updatePlayerRangeLabel;	// IMP=0x000000010003fc30
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;	// IMP=0x000000010003fbf4
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x000000010003fb64
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000010003faa0
- (void)viewDidLoad;	// IMP=0x000000010003f880
- (void)setupDataSourcePlayerChangeHandler;	// IMP=0x000000010003f4e0
- (void)configureDataSource;	// IMP=0x000000010003f130
@property(readonly, nonatomic) GKDashboardMultiplayerDataSource *multiplayerDataSource;
- (void)dealloc;	// IMP=0x000000010003f050
- (id)initWithMatchRequest:(id)arg1;	// IMP=0x000000010003eecc
- (id)init;	// IMP=0x000000010003ed1c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

