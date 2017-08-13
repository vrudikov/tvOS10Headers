//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TVPlaybackViewControllerDelegate.h"

@class NSString, TVMusicLibraryActionButton, TVMusicNowPlayingViewController, TVPlaybackViewController;

@interface TVMusicNowPlayingManager : NSObject <TVPlaybackViewControllerDelegate>
{
    id <TVSMediaItem> _mediaItemForNowPlayingControls;	// 8 = 0x8
    TVMusicLibraryActionButton *_addToLibraryButton;	// 16 = 0x10
    TVMusicLibraryActionButton *_lyricsButton;	// 24 = 0x18
    TVMusicLibraryActionButton *_contextMenuButton;	// 32 = 0x20
    TVPlaybackViewController *_playbackViewController;	// 40 = 0x28
}

+ (id)sharedInstance;	// IMP=0x0000000100035664
@property(retain, nonatomic) TVPlaybackViewController *playbackViewController; // @synthesize playbackViewController=_playbackViewController;
- (void).cxx_destruct;	// IMP=0x0000000100037288
- (void)showPlaybackControllerWithPlayer:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0000000100036f60
- (void)showPlaybackControllerWithPlayer:(id)arg1;	// IMP=0x0000000100036f50
- (id)newPlaybackControllerWithPlayer:(id)arg1 initialPlaybackType:(long long)arg2;	// IMP=0x0000000100036e6c
- (id)newPlaybackControllerWithPlayer:(id)arg1;	// IMP=0x0000000100036d90
- (void)_showLyricsAction:(id)arg1;	// IMP=0x000000010003681c
- (void)_addToLibraryAction:(id)arg1;	// IMP=0x0000000100036514
- (id)_controlsForMediaItem:(id)arg1 showAddButton:(_Bool)arg2 hasLyrics:(_Bool)arg3;	// IMP=0x00000001000361ec
- (void)playbackViewController:(id)arg1 controlsForMediaItem:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100035be4
- (_Bool)playbackViewControllerProvidesCustomControls:(id)arg1;	// IMP=0x0000000100035bdc
- (void)contextMenuForMediaItem:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100035b94
- (void)_nowPlayingViewWillLoad:(id)arg1;	// IMP=0x0000000100035a14
- (void)_nowPlayingViewWillDisappear:(id)arg1;	// IMP=0x0000000100035950
- (void)_nowPlayingViewWillAppear:(id)arg1;	// IMP=0x00000001000358f0
@property(readonly, nonatomic) TVMusicNowPlayingViewController *musicNowPlayingViewController;
- (void)dealloc;	// IMP=0x00000001000357d8
- (id)init;	// IMP=0x00000001000356e4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
