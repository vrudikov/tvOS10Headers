//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IMGridCollectionViewCell.h"

@class UIImageView, UILabel;

@interface IMGridCollectionViewDetailCell : IMGridCollectionViewCell
{
    UIImageView *_currentlyPlayingIcon;	// 136 = 0x88
    UILabel *_detailText;	// 144 = 0x90
}

@property(retain, nonatomic) UILabel *detailText; // @synthesize detailText=_detailText;
- (void)layoutSubviews;	// IMP=0x00000001001e71f8
- (struct CGRect)detailRectForBounds:(struct CGRect)arg1;	// IMP=0x00000001001e7150
- (struct CGRect)titleRectForBounds:(struct CGRect)arg1;	// IMP=0x00000001001e70a4
- (void)dealloc;	// IMP=0x00000001001e7034
- (void)prepareForReuse;	// IMP=0x00000001001e6fc4
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000001001e6e58
@property(nonatomic) _Bool isCurrentlyPlaying;
@property(readonly, nonatomic) UIImageView *currentlyPlayingIcon; // @synthesize currentlyPlayingIcon=_currentlyPlayingIcon;
- (void)setEnlargedSelectedState:(_Bool)arg1;	// IMP=0x00000001001e6b48
- (id)nowPlayingListItemIconSelected;	// IMP=0x00000001001e6b2c
- (id)nowPlayingListItemIcon;	// IMP=0x00000001001e6b10

@end

