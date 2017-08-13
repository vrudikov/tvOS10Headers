//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

@class MTNowPlayingIndicatorView, MTVibrantImageView, UIImage, UIImageView, UIView;

@interface MTEpisodeArtworkView : UIControl
{
    _Bool _currentPlayerItem;	// 8 = 0x8
    UIImageView *_imageView;	// 16 = 0x10
    UIView *_dimmingView;	// 24 = 0x18
    MTVibrantImageView *_vibrantImageView;	// 32 = 0x20
    MTNowPlayingIndicatorView *_barsView;	// 40 = 0x28
}

@property(retain, nonatomic) MTNowPlayingIndicatorView *barsView; // @synthesize barsView=_barsView;
@property(retain, nonatomic) MTVibrantImageView *vibrantImageView; // @synthesize vibrantImageView=_vibrantImageView;
@property(retain, nonatomic) UIView *dimmingView; // @synthesize dimmingView=_dimmingView;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic, getter=isCurrentPlayerItem) _Bool currentPlayerItem; // @synthesize currentPlayerItem=_currentPlayerItem;
- (void).cxx_destruct;	// IMP=0x0000000100030b7c
- (_Bool)canBecomeFocused;	// IMP=0x0000000100030a84
- (void)_updateBarMetricsForArtworkSize:(struct CGSize)arg1;	// IMP=0x000000010003082c
- (id)_blurredArtworkForArtwork:(id)arg1;	// IMP=0x0000000100030730
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000001000303fc
- (void)layoutSubviews;	// IMP=0x000000010003028c
- (void)updatePlaybackState;	// IMP=0x00000001000301f8
- (void)stopObservingPlaybackState;	// IMP=0x0000000100030198
- (void)startObservingPlaybackState;	// IMP=0x0000000100030130
@property(retain, nonatomic) UIImage *artwork;
- (void)dealloc;	// IMP=0x000000010002fcf0
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000010002fc5c

@end

