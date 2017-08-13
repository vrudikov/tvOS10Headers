//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTGenericCell.h"

@class MTChevronView, UIButton, UILabel;

@interface MTStationCell : MTGenericCell
{
    id <MTStationCellDelegate> _delegate;	// 24 = 0x18
    UIButton *_playButton;	// 32 = 0x20
    MTChevronView *_chevronView;	// 40 = 0x28
    UILabel *_moreLabel;	// 48 = 0x30
}

@property(retain, nonatomic) UILabel *moreLabel; // @synthesize moreLabel=_moreLabel;
@property(retain, nonatomic) MTChevronView *chevronView; // @synthesize chevronView=_chevronView;
@property(retain, nonatomic) UIButton *playButton; // @synthesize playButton=_playButton;
@property(nonatomic) __weak id <MTStationCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;	// IMP=0x00000001000730d0
- (void)playTapped:(id)arg1;	// IMP=0x0000000100072fac
- (id)_moreEpisodesTextForStation:(id)arg1;	// IMP=0x0000000100072c80
- (id)_upNextTextForStation:(id)arg1;	// IMP=0x0000000100072b24
- (id)_titleTextForStationFolder:(id)arg1;	// IMP=0x0000000100072998
- (_Bool)_isTopLevelStationFromITunes:(id)arg1;	// IMP=0x0000000100072934
- (_Bool)_isStationFolder:(id)arg1;	// IMP=0x00000001000728cc
- (_Bool)_playButtonEnabledForStation:(id)arg1;	// IMP=0x0000000100072878
- (id)_sideViewForStation:(id)arg1;	// IMP=0x000000010007281c
- (id)_subtitleForStation:(id)arg1;	// IMP=0x000000010007279c
- (id)_titleForStation:(id)arg1;	// IMP=0x000000010007278c
- (void)setPlayButtonHidden:(_Bool)arg1;	// IMP=0x0000000100072788
- (void)setPlayButtonEnabled:(_Bool)arg1;	// IMP=0x0000000100072784
- (void)layoutSubviews;	// IMP=0x0000000100072484
- (void)updateColors;	// IMP=0x00000001000723ec
- (void)updateFonts;	// IMP=0x00000001000722f8
- (void)configureSubviews;	// IMP=0x000000010007225c
- (void)updateWithObject:(id)arg1;	// IMP=0x000000010007209c

@end

