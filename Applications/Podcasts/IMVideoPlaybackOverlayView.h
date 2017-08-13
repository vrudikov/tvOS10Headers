//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "IMVideoOverlay.h"
#import "MPDetailSliderDelegate.h"
#import "UIPopoverPresentationControllerDelegate.h"

@class IMAVPlayer, IMKnockoutButton, IMPlayerItem, MPAVItem, MPAudioAndSubtitlesController, MPDetailSlider, MPVolumeSlider, NSArray, NSLayoutConstraint, NSString, UIActivityIndicatorView, UIButton, UILabel, UINavigationBar, UIStatusBar, _UIBackdropView;

@interface IMVideoPlaybackOverlayView : UIView <UIPopoverPresentationControllerDelegate, IMVideoOverlay, MPDetailSliderDelegate>
{
    MPDetailSlider *_scrubber;	// 8 = 0x8
    _UIBackdropView *_bottomBarBackdropView;	// 16 = 0x10
    IMKnockoutButton *_playPauseButton;	// 24 = 0x18
    IMKnockoutButton *_fullscreenButton;	// 32 = 0x20
    IMKnockoutButton *_pictureInPictureButton;	// 40 = 0x28
    _UIBackdropView *_topBarBackdropView;	// 48 = 0x30
    UIStatusBar *_statusBar;	// 56 = 0x38
    UIButton *_doneButton;	// 64 = 0x40
    UIActivityIndicatorView *_loadingIndicator;	// 72 = 0x48
    UILabel *_loadingLabel;	// 80 = 0x50
    UIButton *_scaleButton;	// 88 = 0x58
    UILabel *_scrubInstructions1;	// 96 = 0x60
    UILabel *_scrubInstructions2;	// 104 = 0x68
    MPVolumeSlider *_volumeSlider;	// 112 = 0x70
    IMKnockoutButton *_leftButton;	// 120 = 0x78
    IMKnockoutButton *_rightButton;	// 128 = 0x80
    UIButton *_audioAndSubtitlesButton;	// 136 = 0x88
    UIView *_topBarLayoutGuide;	// 144 = 0x90
    UIView *_topBarItemsGuide;	// 152 = 0x98
    UIView *_bottomBarTopLayoutGuide;	// 160 = 0xa0
    UIView *_bottomBarBottomLayoutGuide;	// 168 = 0xa8
    UIView *_bottomBarItemsGuide;	// 176 = 0xb0
    MPAudioAndSubtitlesController *_audioAndSubtitlesController;	// 184 = 0xb8
    _Bool _ticking;	// 192 = 0xc0
    _Bool _ignoreTouchUp;	// 193 = 0xc1
    _Bool _shouldResumePlayback;	// 194 = 0xc2
    _Bool _seekForward;	// 195 = 0xc3
    NSLayoutConstraint *_topBarBottomConstraint;	// 200 = 0xc8
    NSLayoutConstraint *_bottomBarHeightConstraint;	// 208 = 0xd0
    NSLayoutConstraint *_topItemsTrailingConstraint;	// 216 = 0xd8
    NSLayoutConstraint *_bottomItemsRightConstraint;	// 224 = 0xe0
    NSLayoutConstraint *_volumeSliderRightConstraint;	// 232 = 0xe8
    NSLayoutConstraint *_volumeSliderWidthConstraint;	// 240 = 0xf0
    NSArray *_topItemsConstraints;	// 248 = 0xf8
    NSArray *_bottomItemsConstraints;	// 256 = 0x100
    NSArray *_topItems;	// 264 = 0x108
    NSArray *_bottomItems;	// 272 = 0x110
    MPAVItem *_avItem;	// 280 = 0x118
    _Bool allowsWirelessPlayback;	// 288 = 0x120
    _Bool navigationBarHidden;	// 289 = 0x121
    _Bool _automaticallyHandleTransportControls;	// 290 = 0x122
    _Bool _allowsExitFromFullscreen;	// 291 = 0x123
    _Bool _allowsPictureInPicture;	// 292 = 0x124
    id <IMVideoOverlayDelegate> _delegate;	// 296 = 0x128
    IMAVPlayer *_player;	// 304 = 0x130
    IMPlayerItem *_item;	// 312 = 0x138
    unsigned long long disabledParts;	// 320 = 0x140
    unsigned long long desiredParts;	// 328 = 0x148
    unsigned long long visibleParts;	// 336 = 0x150
    long long _style;	// 344 = 0x158
}

@property(nonatomic) _Bool allowsPictureInPicture; // @synthesize allowsPictureInPicture=_allowsPictureInPicture;
@property(nonatomic) _Bool allowsExitFromFullscreen; // @synthesize allowsExitFromFullscreen=_allowsExitFromFullscreen;
@property(nonatomic) _Bool automaticallyHandleTransportControls; // @synthesize automaticallyHandleTransportControls=_automaticallyHandleTransportControls;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(nonatomic) _Bool navigationBarHidden; // @synthesize navigationBarHidden;
@property(nonatomic) unsigned long long visibleParts; // @synthesize visibleParts;
@property(nonatomic) unsigned long long desiredParts; // @synthesize desiredParts;
@property(nonatomic) unsigned long long disabledParts; // @synthesize disabledParts;
@property(nonatomic) _Bool allowsWirelessPlayback; // @synthesize allowsWirelessPlayback;
@property(retain, nonatomic) IMPlayerItem *item; // @synthesize item=_item;
@property(retain, nonatomic) IMAVPlayer *player; // @synthesize player=_player;
@property(nonatomic) __weak id <IMVideoOverlayDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;	// IMP=0x00000001002165f0
- (void)hideAlternateTracks;	// IMP=0x0000000100216470
- (void)showAlternateTracks;	// IMP=0x000000010021646c
- (void)setDesiredParts:(unsigned long long)arg1 animate:(_Bool)arg2;	// IMP=0x0000000100216468
- (void)setVisibleParts:(unsigned long long)arg1 animate:(_Bool)arg2;	// IMP=0x0000000100216464
@property(readonly, retain, nonatomic) UINavigationBar *navigationBar;
- (void)_updateVolumeSlider;	// IMP=0x0000000100216458
- (_Bool)updateTimeBasedValues;	// IMP=0x0000000100216250
- (void)_updateLoadingIndicator;	// IMP=0x0000000100215c04
- (void)_updateScaleButton;	// IMP=0x00000001002158ec
- (void)_unregisterForPlayerNotifications:(id)arg1;	// IMP=0x0000000100215818
- (void)_unregisterForItemNotifications:(id)arg1;	// IMP=0x000000010021575c
- (void)_startSeeking;	// IMP=0x00000001002156e8
- (void)_notifyDelegateOfUserEventEnd:(unsigned long long)arg1;	// IMP=0x0000000100215644
- (void)_notifyDelegateOfUserEventCancel:(unsigned long long)arg1;	// IMP=0x00000001002155a0
- (void)_notifyDelegateOfUserEventBegin:(unsigned long long)arg1;	// IMP=0x00000001002154fc
- (void)_notifyDelegateOfUserEvent:(unsigned long long)arg1;	// IMP=0x00000001002154c0
- (void)_registerForPlayerNotifications:(id)arg1;	// IMP=0x00000001002153d4
- (void)_registerForItemNotifications:(id)arg1;	// IMP=0x0000000100215308
- (id)_newFrostedGlassBackdropView;	// IMP=0x0000000100215228
- (id)_imageNamed:(id)arg1;	// IMP=0x0000000100215170
- (_Bool)_canSkipToSeekableEnd;	// IMP=0x0000000100215168
- (_Bool)_canPlayFastReverse;	// IMP=0x0000000100215160
- (void)_configureTransportControls;	// IMP=0x0000000100214c24
- (void)_configureAuxiliaryButtons:(_Bool)arg1;	// IMP=0x0000000100214914
- (void)_setButtons:(id)arg1 inBar:(id)arg2 animated:(_Bool)arg3;	// IMP=0x0000000100214254
- (void)_videoViewDidMoveToWindow:(id)arg1;	// IMP=0x0000000100214248
- (void)_tick:(id)arg1;	// IMP=0x0000000100214198
- (void)_seekabilityChanged:(id)arg1;	// IMP=0x000000010021418c
- (void)_playbackStateChanged:(id)arg1;	// IMP=0x0000000100213f60
- (void)_itemReadyToPlay:(id)arg1;	// IMP=0x0000000100213f18
- (void)_itemChanged:(id)arg1;	// IMP=0x0000000100213d5c
- (void)_effectiveScaleModeDidChange:(id)arg1;	// IMP=0x0000000100213d50
- (void)_durationAvailable:(id)arg1;	// IMP=0x0000000100213bcc
- (void)_alternateTracksAvailable:(id)arg1;	// IMP=0x0000000100213b44
- (void)_activeAudioRouteDidChange:(id)arg1;	// IMP=0x0000000100213b38
- (void)_skipButtonTouchUpOutside:(id)arg1;	// IMP=0x0000000100213a94
- (void)_skipButtonTouchUpInside:(id)arg1;	// IMP=0x0000000100213848
- (void)_skipButtonTouchCancel:(id)arg1;	// IMP=0x0000000100213798
- (void)_skipButtonTouchDown:(id)arg1;	// IMP=0x00000001002136a8
- (void)_scaleButtonTapped:(id)arg1;	// IMP=0x0000000100213640
- (void)_playPauseButtonTapped:(id)arg1;	// IMP=0x00000001002135ec
- (void)_observeControl:(id)arg1;	// IMP=0x0000000100213530
- (void)_pictureInPictureButtonTapped:(id)arg1;	// IMP=0x0000000100213494
- (void)_fullscreenButtonTapped:(id)arg1;	// IMP=0x00000001002133f8
- (void)_doneButtonTapped:(id)arg1;	// IMP=0x000000010021335c
- (void)_buttonInteractionEnded:(id)arg1;	// IMP=0x000000010021334c
- (void)_buttonInteractionCanceled:(id)arg1;	// IMP=0x000000010021333c
- (void)_buttonInteractionBegan:(id)arg1;	// IMP=0x000000010021332c
- (void)_audioAndSubtitlesButtonTapped:(id)arg1;	// IMP=0x0000000100213074
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000100212f34
- (void)_handleDismissAudioAndSubtitlesController;	// IMP=0x0000000100212ecc
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1;	// IMP=0x0000000100212ec4
- (void)popoverPresentationControllerDidDismissPopover:(id)arg1;	// IMP=0x0000000100212eb8
- (void)_showScrubInstructions;	// IMP=0x0000000100212bb4
- (void)_hideScrubInstructions;	// IMP=0x00000001002129d0
- (void)detailSliderTrackingDidCancel:(id)arg1;	// IMP=0x00000001002128ec
- (void)detailSliderTrackingDidEnd:(id)arg1;	// IMP=0x0000000100212808
- (void)detailSliderTrackingDidBegin:(id)arg1;	// IMP=0x00000001002126f8
- (void)detailSlider:(id)arg1 didChangeValue:(float)arg2;	// IMP=0x000000010021262c
- (void)detailSlider:(id)arg1 didChangeScrubSpeed:(long long)arg2;	// IMP=0x00000001002125cc
- (void)stopTicking;	// IMP=0x00000001002125b4
- (void)startTicking;	// IMP=0x000000010021257c
- (void)setHidden:(_Bool)arg1 animated:(_Bool)arg2 animateAlongside:(CDUnknownBlockType)arg3 completionBlock:(CDUnknownBlockType)arg4;	// IMP=0x000000010020f784
- (void)setHidden:(_Bool)arg1 animated:(_Bool)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000010020f76c
- (void)setHidden:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x000000010020f75c
- (void)setHidden:(_Bool)arg1;	// IMP=0x000000010020f6c8
@property(readonly, nonatomic) double bottomBarHeight;
@property(nonatomic) _Bool allowsDetailScrubbing;
@property(nonatomic) _Bool allowsScrubbing;
- (void)removeFromSuperview;	// IMP=0x000000010020f484
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x000000010020f424
- (void)setBounds:(struct CGRect)arg1;	// IMP=0x000000010020f3c4
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x000000010020f2d8
- (void)layoutSubviews;	// IMP=0x000000010020f1f8
- (void)updateConstraints;	// IMP=0x000000010020ee40
- (void)didMoveToWindow;	// IMP=0x000000010020edc0
- (void)dealloc;	// IMP=0x000000010020eb74
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2;	// IMP=0x000000010020e9d8
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000010020e9c8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
