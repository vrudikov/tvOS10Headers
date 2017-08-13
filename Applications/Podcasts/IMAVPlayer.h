//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AVAudioSessionDelegate.h"
#import "IMAVVideoViewDelegate.h"

@class AVPlayer, AVPlayerItem, AVPlayerLayer, IMAVExternalVideoView, IMAVPlayerLayerView, IMAVVideoView, IMPlayerChapterInfo, IMPlayerItem, IMPlayerManifest, NSMutableArray, NSObject<OS_dispatch_source>, NSString, NSTimer, NSURL, UIWindow;

@interface IMAVPlayer : NSObject <IMAVVideoViewDelegate, AVAudioSessionDelegate>
{
    NSURL *_lastPlayingURL;	// 8 = 0x8
    id _periodicTimeObserver;	// 16 = 0x10
    unsigned long long _backgroundTask;	// 24 = 0x18
    NSTimer *_hdcpTimer;	// 32 = 0x20
    NSTimer *_seekTimer;	// 40 = 0x28
    NSMutableArray *_timeObservers;	// 48 = 0x30
    NSMutableArray *_observingTimes;	// 56 = 0x38
    _Bool _timeObserverNeedsUpdate;	// 64 = 0x40
    _Bool _seekForward;	// 65 = 0x41
    struct {
        unsigned int delegateStateChanged:1;
        unsigned int delegateErrorDidOccur:1;
        unsigned int delegateMediaTypeAvailable:1;
        unsigned int delegateDurationAvailable:1;
        unsigned int delegateCallbackForTime:1;
        unsigned int delegateLoadStateChanged:1;
        unsigned int delegatePeriodicUpdate:1;
        unsigned int delegateHasDidChangePlayerItem:1;
        unsigned int delegateHasDidStopPlayerItem:1;
        unsigned int delegateHasDidEndedPlayerItem:1;
        unsigned int delegateLoadedDurationChanged:1;
        unsigned int delegateChapterStarted:1;
        unsigned int delegateCurrentManifestItemChanged:1;
    } _delegateFlags;	// 68 = 0x44
    NSObject<OS_dispatch_source> *_fadeOutTimer;	// 72 = 0x48
    _Bool _providesVideoView;	// 80 = 0x50
    _Bool _externalDisplay;	// 81 = 0x51
    _Bool _scrubbing;	// 82 = 0x52
    _Bool _isUpdatingCurrentTime;	// 83 = 0x53
    _Bool _wasInterrupted;	// 84 = 0x54
    _Bool _wasInterruptedEarly;	// 85 = 0x55
    int _loops;	// 88 = 0x58
    float _scanRate;	// 92 = 0x5c
    double _currentTime;	// 96 = 0x60
    id <IMAVPlayerDelegate> _delegate;	// 104 = 0x68
    unsigned long long _state;	// 112 = 0x70
    unsigned long long _loadState;	// 120 = 0x78
    AVPlayer *_player;	// 128 = 0x80
    AVPlayerItem *_playerItem;	// 136 = 0x88
    NSString *_playerMode;	// 144 = 0x90
    IMPlayerManifest *_manifest;	// 152 = 0x98
    IMPlayerItem *_currentItem;	// 160 = 0xa0
    unsigned long long _autoStop;	// 168 = 0xa8
    double _autoStopTimerTime;	// 176 = 0xb0
    double _autoStopMediaTime;	// 184 = 0xb8
    unsigned long long _videoScale;	// 192 = 0xc0
    unsigned long long _currentChapterIndex;	// 200 = 0xc8
    unsigned long long _chapterMetadataMode;	// 208 = 0xd0
    unsigned long long _playbackSpeed;	// 216 = 0xd8
    NSTimer *_autoStopTimer;	// 224 = 0xe0
    double _autoStopTimerPausedTime;	// 232 = 0xe8
    IMAVVideoView *_videoView;	// 240 = 0xf0
    AVPlayerLayer *_videoLayer;	// 248 = 0xf8
    IMAVPlayerLayerView *_videoLayerView;	// 256 = 0x100
    IMAVExternalVideoView *_externalVideoView;	// 264 = 0x108
    UIWindow *_externalVideoWindow;	// 272 = 0x110
}

+ (void)mainThread:(CDUnknownBlockType)arg1;	// IMP=0x0000000100220888
+ (void)performAsync:(CDUnknownBlockType)arg1;	// IMP=0x00000001002207d8
+ (void)perform:(CDUnknownBlockType)arg1;	// IMP=0x0000000100220760
+ (unsigned long long)decrementPlaybackSpeed:(unsigned long long)arg1;	// IMP=0x0000000100219104
+ (unsigned long long)incrementPlaybackSpeed:(unsigned long long)arg1;	// IMP=0x00000001002190ec
+ (unsigned long long)playbackSpeedForRate:(float)arg1;	// IMP=0x0000000100219098
+ (float)rateForPlaybackSpeed:(unsigned long long)arg1;	// IMP=0x0000000100219080
+ (void)initializePlayerQueue;	// IMP=0x00000001002170d4
+ (id)sharedPlayer;	// IMP=0x000000010021700c
+ (void)setBackgroundAVPlayerQueueEnabled:(_Bool)arg1;	// IMP=0x0000000100216ff0
@property(nonatomic) float scanRate; // @synthesize scanRate=_scanRate;
@property(retain, nonatomic) UIWindow *externalVideoWindow; // @synthesize externalVideoWindow=_externalVideoWindow;
@property(retain, nonatomic) IMAVExternalVideoView *externalVideoView; // @synthesize externalVideoView=_externalVideoView;
@property(retain, nonatomic) IMAVPlayerLayerView *videoLayerView; // @synthesize videoLayerView=_videoLayerView;
@property(retain, nonatomic) AVPlayerLayer *videoLayer; // @synthesize videoLayer=_videoLayer;
@property(retain, nonatomic) IMAVVideoView *videoView; // @synthesize videoView=_videoView;
@property(nonatomic) double autoStopTimerPausedTime; // @synthesize autoStopTimerPausedTime=_autoStopTimerPausedTime;
@property(retain, nonatomic) NSTimer *autoStopTimer; // @synthesize autoStopTimer=_autoStopTimer;
@property(nonatomic) _Bool wasInterruptedEarly; // @synthesize wasInterruptedEarly=_wasInterruptedEarly;
@property(nonatomic) _Bool wasInterrupted; // @synthesize wasInterrupted=_wasInterrupted;
@property(nonatomic) _Bool isUpdatingCurrentTime; // @synthesize isUpdatingCurrentTime=_isUpdatingCurrentTime;
@property(retain, nonatomic) id periodicTimeObserver; // @synthesize periodicTimeObserver=_periodicTimeObserver;
@property(nonatomic) unsigned long long playbackSpeed; // @synthesize playbackSpeed=_playbackSpeed;
@property(nonatomic) _Bool scrubbing; // @synthesize scrubbing=_scrubbing;
@property(nonatomic) int loops; // @synthesize loops=_loops;
@property(nonatomic) unsigned long long chapterMetadataMode; // @synthesize chapterMetadataMode=_chapterMetadataMode;
@property(nonatomic) unsigned long long currentChapterIndex; // @synthesize currentChapterIndex=_currentChapterIndex;
@property(readonly, nonatomic) _Bool externalDisplay; // @synthesize externalDisplay=_externalDisplay;
@property(nonatomic) unsigned long long videoScale; // @synthesize videoScale=_videoScale;
@property(nonatomic) _Bool providesVideoView; // @synthesize providesVideoView=_providesVideoView;
@property(nonatomic) double autoStopMediaTime; // @synthesize autoStopMediaTime=_autoStopMediaTime;
@property(nonatomic) double autoStopTimerTime; // @synthesize autoStopTimerTime=_autoStopTimerTime;
@property(nonatomic) unsigned long long autoStop; // @synthesize autoStop=_autoStop;
@property(retain, nonatomic) IMPlayerItem *currentItem; // @synthesize currentItem=_currentItem;
@property(retain, nonatomic) IMPlayerManifest *manifest; // @synthesize manifest=_manifest;
@property(retain, nonatomic) NSString *playerMode; // @synthesize playerMode=_playerMode;
@property(retain, nonatomic) AVPlayerItem *playerItem; // @synthesize playerItem=_playerItem;
@property(retain, nonatomic) AVPlayer *player; // @synthesize player=_player;
@property(nonatomic) unsigned long long loadState; // @synthesize loadState=_loadState;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(nonatomic) __weak id <IMAVPlayerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double currentTime; // @synthesize currentTime=_currentTime;
- (void).cxx_destruct;	// IMP=0x0000000100220e9c
- (void)_assertMainThread;	// IMP=0x00000001002209d0
- (void)_assertBackgroundThread;	// IMP=0x00000001002208e8
- (void)mainThread:(CDUnknownBlockType)arg1;	// IMP=0x0000000100220830
- (void)perform:(CDUnknownBlockType)arg1;	// IMP=0x0000000100220708
- (void)clearAutoStop;	// IMP=0x00000001002206b0
- (void)enforceAutoStopForMode:(unsigned long long)arg1;	// IMP=0x0000000100220630
- (void)_autoStopTimerFired;	// IMP=0x0000000100220620
- (void)_clearAutoStopTimmer;	// IMP=0x000000010022058c
- (void)_pauseAutoStopTimer;	// IMP=0x0000000100220540
- (void)_setupAutoStopTimer;	// IMP=0x0000000100220378
@property(readonly, nonatomic) double autoStopTimeRemaining;
- (void)previousChapter;	// IMP=0x0000000100220088
- (void)nextChapter;	// IMP=0x0000000100220050
- (void)onChaptersLoaded:(id)arg1;	// IMP=0x000000010021ff14
- (void)_setChapterIndex:(unsigned long long)arg1;	// IMP=0x000000010021fec0
- (void)setupChapterAtTime:(double)arg1;	// IMP=0x000000010021fa10
@property(readonly, nonatomic) IMPlayerChapterInfo *currentChapter;
- (void)setupChapterTimeObservers;	// IMP=0x000000010021f634
@property(readonly, nonatomic) unsigned long long chapterCount;
- (_Bool)hasChapters;	// IMP=0x000000010021f59c
- (void)_setNowPlayingInfo:(id)arg1;	// IMP=0x000000010021f4f4
- (void)updateNowPlayingInfo;	// IMP=0x000000010021e994
- (void)forceTriggerTimeObserverAt:(double)arg1;	// IMP=0x000000010021e44c
- (void)triggerTimeObserverAt:(id)arg1;	// IMP=0x000000010021e368
- (void)setupTimeObserver:(id)arg1;	// IMP=0x000000010021e128
- (void)updateTimeObservers;	// IMP=0x000000010021dfb8
- (void)sendPeriodicTimeEvent:(double)arg1 duration:(double)arg2 finished:(_Bool)arg3;	// IMP=0x000000010021de74
- (void)removePeriodicTimeObserver;	// IMP=0x000000010021ddcc
- (void)addPeriodicTimeObserver;	// IMP=0x000000010021db98
- (void)clearTimeObservers;	// IMP=0x000000010021da48
- (void)removeAllTimeObservers;	// IMP=0x000000010021da00
- (void)removeCMTimeObserver:(CDStruct_1b6d18a9)arg1;	// IMP=0x000000010021d984
- (void)addCMTimeObserver:(CDStruct_1b6d18a9)arg1;	// IMP=0x000000010021d8a8
- (void)removeTimeObserver:(double)arg1;	// IMP=0x000000010021d860
- (void)addTimeObserver:(double)arg1;	// IMP=0x000000010021d810
@property(readonly, nonatomic) _Bool isScanning;
- (void)scanWithRate:(float)arg1;	// IMP=0x000000010021d760
@property(readonly, nonatomic) double loadedDuration;
@property(readonly, nonatomic) double duration;
- (_Bool)isDurationReady;	// IMP=0x000000010021d4b4
- (void)onSeekTimer:(id)arg1;	// IMP=0x000000010021d438
@property(readonly, nonatomic) _Bool isSeeking;
- (void)endSeek;	// IMP=0x000000010021d3dc
- (void)cancelSeek;	// IMP=0x000000010021d3a0
- (void)startSeek:(_Bool)arg1;	// IMP=0x000000010021d2dc
- (void)_updatePlayerTimeCompleted:(double)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010021d0f4
- (void)_updatePlayerToCurrentTime:(CDUnknownBlockType)arg1;	// IMP=0x000000010021ce90
- (void)_postNotificationName:(id)arg1 userInfo:(id)arg2;	// IMP=0x000000010021cb54
- (void)_playerStalled;	// IMP=0x000000010021cb44
- (void)_failedToPlayToEndNotification:(id)arg1;	// IMP=0x000000010021c9d8
- (void)sendItemEndedNotification;	// IMP=0x000000010021c92c
- (void)playerItemDidReachEnd:(id)arg1;	// IMP=0x000000010021c81c
- (void)_tracksDidLoad;	// IMP=0x000000010021c5d4
- (void)_durationAvailable;	// IMP=0x000000010021c528
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000010021b57c
- (void)resetPlayer:(id)arg1;	// IMP=0x000000010021b410
- (void)stopObservingPlayerItem:(id)arg1;	// IMP=0x000000010021b33c
- (void)_createPlayer;	// IMP=0x000000010021af98
- (void)onRouteChange:(id)arg1;	// IMP=0x000000010021af00
- (void)handleAudioSessionInterruption:(id)arg1;	// IMP=0x000000010021ad8c
- (void)handlePlayerInterruption:(id)arg1;	// IMP=0x000000010021ad54
- (void)videoView:(id)arg1 willMoveToWindow:(id)arg2;	// IMP=0x000000010021aca8
- (void)onClosedCaptioningChanged:(id)arg1;	// IMP=0x000000010021ac24
- (void)onScreenDisonnection:(id)arg1;	// IMP=0x000000010021ac18
- (void)onScreenConnection:(id)arg1;	// IMP=0x000000010021ac0c
- (void)_updateClosedCaptionState;	// IMP=0x000000010021abc4
- (void)updateVideoViewScale;	// IMP=0x000000010021aa30
- (void)createExternalDisplayOnScreen:(id)arg1;	// IMP=0x000000010021a890
- (void)destroyExternalDisplay;	// IMP=0x000000010021a814
- (void)updateVideoView;	// IMP=0x000000010021a3cc
- (void)updateVideoViewIfNeeded;	// IMP=0x000000010021a31c
@property(readonly, nonatomic) _Bool airplayVideoActive;
- (id)stillFrameAt:(double)arg1 maxSize:(struct CGSize)arg2 scale:(double)arg3;	// IMP=0x0000000100219ed0
- (void)endBackgroundTask;	// IMP=0x0000000100219dd0
- (void)beginBackgroundTask;	// IMP=0x0000000100219b04
@property(readonly, nonatomic) _Bool isPlaybackActive;
@property(readonly, nonatomic) _Bool isPlaybackRequested;
- (_Bool)isAtEnd;	// IMP=0x0000000100219a68
- (_Bool)isStalled;	// IMP=0x0000000100219a44
- (void)cancelFadeOut;	// IMP=0x00000001002196e4
- (void)fadeOutWithDuration:(double)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100219340
- (void)fadeOutWithDuration:(double)arg1;	// IMP=0x0000000100219330
- (void)fadeOut;	// IMP=0x0000000100219320
- (void)sleep;	// IMP=0x0000000100219298
- (void)togglePlayPause;	// IMP=0x0000000100219254
- (void)pause;	// IMP=0x0000000100219244
- (void)play;	// IMP=0x000000010021911c
@property(nonatomic) float rate;
@property(nonatomic) _Bool shouldEnforceHDCP;
- (void)hdcpTimer:(id)arg1;	// IMP=0x0000000100218b3c
- (void)previousRemote:(_Bool)arg1;	// IMP=0x00000001002188d4
- (void)previousRemote;	// IMP=0x00000001002188c4
- (void)nextRemote;	// IMP=0x0000000100218800
- (void)_resumeLoading;	// IMP=0x0000000100218698
- (_Bool)_canPauseLoading;	// IMP=0x00000001002185f4
- (void)_pauseLoading;	// IMP=0x0000000100218500
- (void)_updateLoadingState;	// IMP=0x00000001002184a8
- (void)updateRateForCurrentState;	// IMP=0x0000000100217f94
- (void)_updatePlayerForCurrentItem;	// IMP=0x0000000100217b24
- (void)manifestCurrentItemDidChange;	// IMP=0x00000001002174c8
- (void)previousMediaItem;	// IMP=0x0000000100217230
- (void)nextMediaItem;	// IMP=0x0000000100217160
- (void)dealloc;	// IMP=0x0000000100216e20
- (id)init;	// IMP=0x00000001002168e8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
