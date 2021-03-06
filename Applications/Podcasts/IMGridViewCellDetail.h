//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IMGridViewCell.h"

@class UIImageView, UILabel;

@interface IMGridViewCellDetail : IMGridViewCell
{
    UIImageView *_currentlyPlayingIcon;	// 136 = 0x88
    UILabel *_detailText;	// 144 = 0x90
}

@property(retain, nonatomic) UILabel *detailText; // @synthesize detailText=_detailText;
- (void)layoutSubviews;	// IMP=0x00000001001b847c
- (struct CGRect)detailRectForBounds:(struct CGRect)arg1;	// IMP=0x00000001001b83d4
- (struct CGRect)titleRectForBounds:(struct CGRect)arg1;	// IMP=0x00000001001b832c
- (void)dealloc;	// IMP=0x00000001001b82bc
- (void)prepareForReuse;	// IMP=0x00000001001b8260
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000001001b80f4
@property(nonatomic) _Bool isCurrentlyPlaying;
@property(readonly, nonatomic) UIImageView *currentlyPlayingIcon; // @synthesize currentlyPlayingIcon=_currentlyPlayingIcon;
- (void)setEnlargedSelectedState:(_Bool)arg1;	// IMP=0x00000001001b7de4
- (id)nowPlayingListItemIconSelected;	// IMP=0x00000001001b7dc8
- (id)nowPlayingListItemIcon;	// IMP=0x00000001001b7dac

@end

