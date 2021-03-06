//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "TVSDataClientResultsControllerDelegate.h"
#import "TVSignInLandingViewDelegate.h"

@class NSString, TVMusicCloudProgressView, TVSDataClientResultsController, TVSStateMachine, TVSignInLandingView, UIActivityIndicatorView, UIView;

@interface TVMusicCloudViewController : UIViewController <TVSignInLandingViewDelegate, TVSDataClientResultsControllerDelegate>
{
    _Bool _isUserLoggedIn;	// 8 = 0x8
    TVSStateMachine *_stateMachine;	// 16 = 0x10
    UIViewController *_topMenuViewController;	// 24 = 0x18
    TVMusicCloudProgressView *_cloudProgressView;	// 32 = 0x20
    UIActivityIndicatorView *_activityIndicatorView;	// 40 = 0x28
    TVSignInLandingView *_loginPromptView;	// 48 = 0x30
    TVSignInLandingView *_cloudMusicPromptView;	// 56 = 0x38
    UIView *_errorMessageView;	// 64 = 0x40
    UIView *_currentDisplayedView;	// 72 = 0x48
    UIView *_noMusicView;	// 80 = 0x50
    TVSDataClientResultsController *_songsResultsController;	// 88 = 0x58
}

@property(retain, nonatomic) TVSDataClientResultsController *songsResultsController; // @synthesize songsResultsController=_songsResultsController;
@property(retain, nonatomic) UIView *noMusicView; // @synthesize noMusicView=_noMusicView;
@property(nonatomic) __weak UIView *currentDisplayedView; // @synthesize currentDisplayedView=_currentDisplayedView;
@property(retain, nonatomic) UIView *errorMessageView; // @synthesize errorMessageView=_errorMessageView;
@property(retain, nonatomic) TVSignInLandingView *cloudMusicPromptView; // @synthesize cloudMusicPromptView=_cloudMusicPromptView;
@property(retain, nonatomic) TVSignInLandingView *loginPromptView; // @synthesize loginPromptView=_loginPromptView;
@property(retain, nonatomic) UIActivityIndicatorView *activityIndicatorView; // @synthesize activityIndicatorView=_activityIndicatorView;
@property(retain, nonatomic) TVMusicCloudProgressView *cloudProgressView; // @synthesize cloudProgressView=_cloudProgressView;
@property(retain, nonatomic) UIViewController *topMenuViewController; // @synthesize topMenuViewController=_topMenuViewController;
@property(nonatomic) _Bool isUserLoggedIn; // @synthesize isUserLoggedIn=_isUserLoggedIn;
@property(retain, nonatomic) TVSStateMachine *stateMachine; // @synthesize stateMachine=_stateMachine;
- (void).cxx_destruct;	// IMP=0x000000010000a540
- (void)_storeAccountChangedNotification:(id)arg1;	// IMP=0x000000010000a140
- (void)_appDidBecomeActiveNotification:(id)arg1;	// IMP=0x000000010000a120
- (void)updateBoundMusicSyncStatus;	// IMP=0x000000010000a030
- (void)tvs_bindMusicSyncStatusBindingToObject:(id)arg1 withKeyPath:(id)arg2 options:(id)arg3;	// IMP=0x0000000100009f3c
- (id)MusicSyncStatusBinding;	// IMP=0x0000000100009ec8
- (void)controller:(id)arg1 didFailQuery:(id)arg2;	// IMP=0x0000000100009e94
- (void)controller:(id)arg1 didChangeResultsForQuery:(id)arg2;	// IMP=0x0000000100009d00
- (void)authenticateUserOnSelectSignIn;	// IMP=0x0000000100009cc4
- (void)_registerStateMachineHandlers;	// IMP=0x0000000100008dec
- (void)_removeCurrentView;	// IMP=0x0000000100008d68
- (void)_showSyncingView;	// IMP=0x0000000100008ce4
- (void)_showStartSyncViewWithStateMachine:(id)arg1;	// IMP=0x0000000100008ad8
- (void)_clickedErrorRetryButton:(id)arg1;	// IMP=0x0000000100008ab8
- (void)_removeCloudPromptView;	// IMP=0x0000000100008a24
- (void)_removeErrorMessageView;	// IMP=0x0000000100008990
- (void)_showErrorView;	// IMP=0x00000001000082f8
- (void)_removeWaitingView;	// IMP=0x0000000100008264
- (void)_showWaitingView;	// IMP=0x0000000100008098
- (void)_removeLoginPromptView;	// IMP=0x0000000100007fd4
- (void)_showLoginPromptView;	// IMP=0x0000000100007d8c
- (id)_musicTopMenuViewController;	// IMP=0x0000000100007a9c
- (void)_showAuthenticationDialog;	// IMP=0x00000001000077f4
- (void)_removeTopMenu;	// IMP=0x0000000100007734
- (void)_showTopMenu;	// IMP=0x0000000100007564
- (void)_setScreenSaverEnabledForCloudLibrary;	// IMP=0x0000000100007414
- (void)_removeNoMusicView;	// IMP=0x0000000100007380
- (void)_showNoMusicView;	// IMP=0x0000000100007180
- (void)_removeCloudProgressView;	// IMP=0x00000001000070ec
- (void)_showCloudProgressView;	// IMP=0x0000000100006f9c
- (id)_handleConnectedStatusWithStateMachine:(id)arg1;	// IMP=0x0000000100006db4
- (void)_dataClientConnectionHandler:(id)arg1;	// IMP=0x0000000100006cec
- (id)preferredFocusEnvironments;	// IMP=0x0000000100006c1c
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0000000100006be8
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000100006b88
- (void)viewDidLoad;	// IMP=0x00000001000069d8
- (void)dealloc;	// IMP=0x0000000100006948
- (id)init;	// IMP=0x00000001000068b4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

