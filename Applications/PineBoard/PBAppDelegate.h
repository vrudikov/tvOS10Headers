//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIResponder.h"

#import "FBApplicationTerminationAssertionServiceDelegate.h"
#import "LSApplicationWorkspaceObserverProtocol.h"
#import "PBLanguageChangeObserverDelegate.h"
#import "PBMediaRemoteObserverDelegate.h"
#import "UIApplicationDelegate.h"

@class BBDataProviderConnection, NSMutableOrderedSet, NSObject<OS_dispatch_queue>, NSString, PBLanguageChangeObserver, PBSafeAreaWindow, PBSerialNumberWindow, PBUserNotificationHandler, TVSAudioRoutingController, TVSBackgroundTask, TVSUserActivityTrigger, UIWindow;

@interface PBAppDelegate : UIResponder <FBApplicationTerminationAssertionServiceDelegate, LSApplicationWorkspaceObserverProtocol, PBMediaRemoteObserverDelegate, PBLanguageChangeObserverDelegate, UIApplicationDelegate>
{
    PBUserNotificationHandler *_userNotificationHandler;	// 8 = 0x8
    PBSafeAreaWindow *_safeAreaWindow;	// 16 = 0x10
    PBSerialNumberWindow *_serialNumberWindow;	// 24 = 0x18
    TVSUserActivityTrigger *_musicNowPlayingTrigger;	// 32 = 0x20
    _Bool _isRadioAdPlaying;	// 40 = 0x28
    _Bool _isShowingRadioAdView;	// 41 = 0x29
    _Bool _tooHot;	// 42 = 0x2a
    _Bool _awaitingFirstAppLaunch;	// 43 = 0x2b
    BBDataProviderConnection *_bulletinBoardConnection;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_bulletinBoardQueue;	// 56 = 0x38
    _Bool _shouldDisableIdleTimer;	// 64 = 0x40
    _Bool _appLaunchDisabled;	// 65 = 0x41
    _Bool _awaitingSiriOptInOfferResponse;	// 66 = 0x42
    TVSBackgroundTask *_programmingGuideBackgroundTask;	// 72 = 0x48
    id _buddyPrefsObservingToken;	// 80 = 0x50
    NSMutableOrderedSet *_mutableDeepLinkingAppHistory;	// 88 = 0x58
    PBLanguageChangeObserver *_languageChangeObserver;	// 96 = 0x60
    TVSAudioRoutingController *_audioRoutingController;	// 104 = 0x68
}

+ (id)sharedApplicationDelegate;	// IMP=0x000000010008f748
@property(nonatomic) _Bool awaitingSiriOptInOfferResponse; // @synthesize awaitingSiriOptInOfferResponse=_awaitingSiriOptInOfferResponse;
@property(nonatomic) _Bool appLaunchDisabled; // @synthesize appLaunchDisabled=_appLaunchDisabled;
@property(retain, nonatomic) TVSAudioRoutingController *audioRoutingController; // @synthesize audioRoutingController=_audioRoutingController;
@property(nonatomic) _Bool shouldDisableIdleTimer; // @synthesize shouldDisableIdleTimer=_shouldDisableIdleTimer;
@property(retain, nonatomic) PBLanguageChangeObserver *languageChangeObserver; // @synthesize languageChangeObserver=_languageChangeObserver;
@property(readonly, nonatomic) NSMutableOrderedSet *mutableDeepLinkingAppHistory; // @synthesize mutableDeepLinkingAppHistory=_mutableDeepLinkingAppHistory;
@property(retain, nonatomic) id buddyPrefsObservingToken; // @synthesize buddyPrefsObservingToken=_buddyPrefsObservingToken;
@property(retain, nonatomic) TVSBackgroundTask *programmingGuideBackgroundTask; // @synthesize programmingGuideBackgroundTask=_programmingGuideBackgroundTask;
- (void).cxx_destruct;	// IMP=0x000000010009c028
- (void)applicationsDidUninstall:(id)arg1;	// IMP=0x000000010009bb64
- (void)applicationsDidInstall:(id)arg1;	// IMP=0x000000010009baf4
- (_Bool)_assertApplicationForBundleIdentifier:(id)arg1 allowsCacheDeletionWithError:(id *)arg2;	// IMP=0x000000010009ba28
- (_Bool)_assertApplicationForBundleIdentifier:(id)arg1 notInUseWithError:(id *)arg2;	// IMP=0x000000010009b848
- (void)service:(id)arg1 didRelinquishTerminationAssertion:(id)arg2;	// IMP=0x000000010009b778
- (void)service:(id)arg1 didAcquireTerminationAssertion:(id)arg2;	// IMP=0x000000010009b5a4
- (void)service:(id)arg1 canAcquireTerminationAssertion:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000010009b394
- (_Bool)_applicationForPIDIsPlaying:(int)arg1;	// IMP=0x000000010009b310
- (_Bool)_requestSleepForReason:(unsigned long long)arg1;	// IMP=0x000000010009b1a0
- (_Bool)_requestWakeForReason:(unsigned long long)arg1;	// IMP=0x000000010009b030
- (void)stopSiriWithContext:(id)arg1;	// IMP=0x000000010009afb8
- (void)startSiriWithContext:(id)arg1;	// IMP=0x000000010009aee0
- (void)activateSiriWithContext:(id)arg1;	// IMP=0x000000010009ae08
- (void)_setLateNightModeEnabled:(_Bool)arg1;	// IMP=0x000000010009ad54
- (void)_handleDisableLateNightModeNotification:(id)arg1;	// IMP=0x000000010009ad44
- (void)_handleEnableLateNightModeNotification:(id)arg1;	// IMP=0x000000010009ad34
- (void)_performObliterationIfNeeded;	// IMP=0x000000010009a7c8
- (void)_dequeuePendingProfiles;	// IMP=0x000000010009a608
- (void)_toggleEffectiveUserInterfaceStyle;	// IMP=0x000000010009a4f0
- (_Bool)_wakeDeviceForSiriInteractionWithContext:(id)arg1;	// IMP=0x000000010009a3f4
- (void)_prepareForDeviceWake;	// IMP=0x000000010009a334
- (void)_prepareForDeviceSleep;	// IMP=0x000000010009a324
- (void)_setConstantAudioOutputEnabled:(_Bool)arg1;	// IMP=0x000000010009a2c0
- (void)_updateConstantAudioOutput;	// IMP=0x000000010009a1f0
- (void)_dismissRadioAdViewController;	// IMP=0x000000010009a1a8
- (void)_showRadioAdViewController;	// IMP=0x000000010009a0f8
- (void)_presentNowPlayingViewController:(id)arg1;	// IMP=0x000000010009a040
- (_Bool)_presentNowPlayingSystemUIWithOptions:(id)arg1;	// IMP=0x0000000100099e68
- (_Bool)_sendFocusedAppMessagePresentNowPlayingUI;	// IMP=0x0000000100099dd8
- (void)_displayDialogForPermissionRequest:(id)arg1 fromResponder:(id)arg2;	// IMP=0x00000001000998a8
- (_Bool)handlePermissionRequest:(id)arg1;	// IMP=0x0000000100099644
- (_Bool)_nowPlayingAppFocused;	// IMP=0x00000001000994dc
- (_Bool)_keyboardFocusedInApp:(id)arg1;	// IMP=0x0000000100099400
- (_Bool)_shouldShowSiri;	// IMP=0x0000000100099270
- (void)_setupWebinspector;	// IMP=0x0000000100099208
- (void)_startObservingPurpleBuddyPrefs;	// IMP=0x0000000100099144
- (_Bool)_shouldEnableNavigationSoundsForBundleIdentifier:(id)arg1 context:(id)arg2;	// IMP=0x0000000100099058
- (void)_resumeActivity;	// IMP=0x0000000100098f60
- (void)_stopAllActivity;	// IMP=0x0000000100098d6c
- (void)_pausePlayback;	// IMP=0x0000000100098d5c
- (void)_handleThermalNotification:(id)arg1;	// IMP=0x0000000100098aa0
- (void)_getNowPlayingViewControllerClassName:(id *)arg1 serviceIdentifier:(id *)arg2;	// IMP=0x0000000100098800
- (void)_handleMusicNowPlayingTrigger:(id)arg1;	// IMP=0x0000000100098600
- (void)_setIdleTimerDisabled:(_Bool)arg1;	// IMP=0x00000001000985e8
- (void)_loadBundles;	// IMP=0x00000001000985a0
- (void)_configureAskPermission;	// IMP=0x0000000100098484
- (void)_presentSiriOptInDialogWithViewController:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010009818c
- (_Bool)_presentTVButtonBehaviorAlert;	// IMP=0x0000000100097f14
- (_Bool)_suggestUserEnableDictation;	// IMP=0x0000000100097d64
- (_Bool)_suggestUserEnableAssistantAndDictation;	// IMP=0x0000000100097b58
- (void)_launchAppSwitcher;	// IMP=0x0000000100097964
- (void)_launchTVSettingsWithOpenURL:(id)arg1;	// IMP=0x0000000100097880
- (_Bool)_launchNowPlayingApp;	// IMP=0x0000000100097770
- (_Bool)_launchWhatsNewAppAfterOSUpdate;	// IMP=0x0000000100097694
- (_Bool)_launchConferenceRoomDisplayAppWithOptions:(unsigned long long)arg1;	// IMP=0x00000001000975e4
- (void)_launchPurpleBuddy;	// IMP=0x00000001000973b8
- (_Bool)_launchTVWatchList;	// IMP=0x0000000100096fb0
- (_Bool)_launchTVSearch;	// IMP=0x0000000100096e88
- (void)_ensureTVAirPlayRunning;	// IMP=0x0000000100096d3c
- (void)_deactivateApplicationWithOptions:(id)arg1;	// IMP=0x0000000100096c00
- (void)_deactivateFocusedAppWithOptions:(id)arg1;	// IMP=0x00000001000969e4
- (void)handleFocusedAppRequestDeactivation;	// IMP=0x0000000100096910
- (void)launchWhatsNewAppInBackground:(_Bool)arg1;	// IMP=0x000000010009685c
- (void)launchKioskAppFromSetup;	// IMP=0x000000010009634c
- (_Bool)_launchKioskAppWithOptions:(id)arg1;	// IMP=0x0000000100096244
- (void)launchKioskApp;	// IMP=0x0000000100096170
- (id)_kioskAppBundleID;	// IMP=0x00000001000960f8
- (void)_updateNowPlayingTrigger;	// IMP=0x0000000100095ff8
- (void)_sendActionOrShowUnconfiguredAlertForAction:(long long)arg1;	// IMP=0x0000000100095b74
- (void)_startBulletinBoardServer;	// IMP=0x0000000100095a5c
- (void)_handleStoreAccountChangedNotification;	// IMP=0x0000000100095950
- (void)_resetProgrammingGuideRefreshTaskWithTimeIntervalInSeconds:(double)arg1;	// IMP=0x0000000100095820
- (void)_updateProgrammingGuide;	// IMP=0x0000000100095678
- (void)_updateWhatsNewCheckTimeInterval;	// IMP=0x000000010009552c
- (void)_performInitialSoftwareUpdateCheckIfNecessary;	// IMP=0x00000001000953ec
- (void)_updateSoftwareUpdateServiceURLBagConfiguration;	// IMP=0x0000000100095264
- (void)_startStoreURLBagMonitoring;	// IMP=0x0000000100095024
- (void)_startSoftwareUpdateService;	// IMP=0x0000000100094e84
- (void)_handleProgrammingGuideDidUpdateNotification;	// IMP=0x0000000100094e08
- (void)_handleStoreURLBagDidLoadNotification;	// IMP=0x0000000100094db4
- (void)_kickoffAppDepotReload;	// IMP=0x0000000100094d1c
- (void)appTransitionDidCompleteForContext:(id)arg1;	// IMP=0x0000000100094a1c
- (void)appTransitionWillBeginForContext:(id)arg1;	// IMP=0x0000000100094988
- (void)observer:(id)arg1 didObserveLanguageChange:(_Bool)arg2 localeChange:(_Bool)arg3;	// IMP=0x0000000100094768
- (void)_setupLanguageChangeObserving;	// IMP=0x0000000100094694
- (void)mediaRemoteObserverNowPlayingInfoDidChange:(id)arg1 nowPlayingInfo:(id)arg2;	// IMP=0x0000000100094544
- (void)mediaRemoteObserverNowPlayingAppDidChange:(id)arg1;	// IMP=0x0000000100094498
- (void)mediaRemoteObserverIsPlayingDidChange:(id)arg1;	// IMP=0x00000001000942fc
- (_Bool)mediaRemoteObserverShouldShowTrackChangeBulletin:(id)arg1;	// IMP=0x0000000100094198
- (_Bool)_wouldExpectPlayPauseLongPressShouldPresentNowPlayingSystemUI;	// IMP=0x0000000100093ff4
- (_Bool)_wouldExpectPlayPauseButtonDownShouldPause;	// IMP=0x0000000100093f10
- (void)handleDirectionalTapEvent:(id)arg1;	// IMP=0x0000000100093e2c
- (void)handleSelectTapEvent;	// IMP=0x0000000100093d90
- (void)handleExposeAllTapEvent;	// IMP=0x0000000100093d84
- (void)handleTVLongPressEvent:(id)arg1;	// IMP=0x0000000100093b60
- (void)handleTVQuadrupleTapEvent;	// IMP=0x0000000100093b54
- (void)handleTVTripleTapEvent;	// IMP=0x0000000100093b04
- (void)handleTVDoubleTapEvent;	// IMP=0x0000000100093af8
- (void)handleTVTapEvent;	// IMP=0x00000001000934c0
- (void)handlePowerOffTapEvent;	// IMP=0x00000001000934b0
- (void)handlePowerOnTapEvent;	// IMP=0x00000001000934a0
- (void)handlePowerToggleTapEvent;	// IMP=0x0000000100093420
- (void)handleVolumeDownLongPressEvent:(id)arg1;	// IMP=0x0000000100093334
- (void)handleVolumeUpLongPressEvent:(id)arg1;	// IMP=0x0000000100093248
- (void)handlePlayPauseLongPressEvent:(id)arg1;	// IMP=0x0000000100093148
- (void)handleFastForwardLongPressEvent:(id)arg1;	// IMP=0x00000001000930dc
- (void)handleRewindLongPressEvent:(id)arg1;	// IMP=0x0000000100093070
- (void)handleSkipBackwardsRepeatingPressEvent:(id)arg1;	// IMP=0x0000000100093054
- (void)handleSkipForwardsRepeatingPressEvent:(id)arg1;	// IMP=0x0000000100093038
- (void)_handleSkipGestureRecognizer:(id)arg1 withCommand:(unsigned int)arg2 interval:(double)arg3;	// IMP=0x0000000100092f48
- (void)handlePreviousTrackTapEvent;	// IMP=0x0000000100092f38
- (void)handleNextTrackTapEvent;	// IMP=0x0000000100092f28
- (void)handleFastForwardTapEvent;	// IMP=0x0000000100092efc
- (void)handleRewindTapEvent;	// IMP=0x0000000100092ed0
- (void)_changePlaybackRateWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000100092d68
- (void)handleStopTapEvent;	// IMP=0x0000000100092d58
- (void)handlePauseTapEvent;	// IMP=0x0000000100092d48
- (void)handlePlayTapEvent;	// IMP=0x0000000100092d38
- (void)handlePlayPauseTapEvent;	// IMP=0x0000000100092c90
- (_Bool)shouldTogglePlayPauseOnButtonDown;	// IMP=0x0000000100092c1c
- (void)_sendMediaRemoteCommand:(unsigned int)arg1;	// IMP=0x0000000100092c0c
- (void)_sendMediaRemoteCommand:(unsigned int)arg1 withOptions:(id)arg2;	// IMP=0x0000000100092b78
- (_Bool)_shouldSendMediaRemoteCommand:(unsigned int)arg1;	// IMP=0x000000010009297c
- (void)handleMicrophoneButtonDownEvent:(id)arg1;	// IMP=0x0000000100092918
- (void)handleMicrophoneLongPressEvent:(id)arg1;	// IMP=0x000000010009279c
- (void)handleMicrophoneTapEvent:(id)arg1;	// IMP=0x0000000100092680
- (_Bool)handleUnhandledMenuEvent;	// IMP=0x0000000100092510
- (void)_updateTripleTapMenu;	// IMP=0x0000000100092434
- (void)handleMenuLongPressEvent:(id)arg1;	// IMP=0x00000001000920f0
- (void)handleACHomeSingleTapEvent;	// IMP=0x00000001000920e0
- (void)handleMenuSingleTapEvent;	// IMP=0x00000001000920d0
- (_Bool)_handleMenuOrACHomeSingleTapEventWithYesForMenuNoForACHome:(_Bool)arg1;	// IMP=0x0000000100091e88
- (void)handleMenuDoubleTapEvent;	// IMP=0x0000000100091e84
- (void)handleMenuTripleTapEvent;	// IMP=0x0000000100091d54
- (void)_registerProcessManagerNotificationHandlers;	// IMP=0x0000000100091784
- (void)_startSteadyStateServices;	// IMP=0x00000001000916a0
- (void)_handleProcessDidActivate:(id)arg1 suspended:(_Bool)arg2;	// IMP=0x0000000100091300
- (void)_handleProcessWillActivate:(id)arg1 suspended:(_Bool)arg2 withContext:(id)arg3;	// IMP=0x000000010009129c
- (void)_handleProcessDidExit:(id)arg1;	// IMP=0x0000000100090fb4
- (void)_handlePineBoardPrefsDidChange;	// IMP=0x0000000100090f60
- (_Bool)application:(id)arg1 openURL:(id)arg2 options:(id)arg3;	// IMP=0x0000000100090e68
- (_Bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;	// IMP=0x000000010008fbd0
- (void)tvs_bindAccessibilityMenuOptionsBindingToObject:(id)arg1 withKeyPath:(id)arg2 options:(id)arg3;	// IMP=0x000000010008fadc
- (id)AccessibilityMenuOptionsBinding;	// IMP=0x000000010008fa68
@property(readonly, nonatomic) TVSUserActivityTrigger *musicNowPlayingTrigger;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000010008f8d0
- (void)dealloc;	// IMP=0x000000010008f828
- (id)init;	// IMP=0x000000010008f7a4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) UIWindow *window;

@end

