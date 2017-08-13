//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTCollectionReusableView.h"

@class MTSectionHeaderView, NSString, UILabel;

@interface MTCollectionSectionHeaderView : MTCollectionReusableView
{
    MTSectionHeaderView *_sectionHeaderView;	// 8 = 0x8
}

+ (id)font;	// IMP=0x00000001000234ac
+ (double)height;	// IMP=0x0000000100023498
@property(retain, nonatomic) MTSectionHeaderView *sectionHeaderView; // @synthesize sectionHeaderView=_sectionHeaderView;
- (void).cxx_destruct;	// IMP=0x0000000100023ae0
- (void)applyLayoutAttributes:(id)arg1;	// IMP=0x00000001000239b4
- (void)prepareForReuse;	// IMP=0x0000000100023884
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000001000237cc
@property(retain, nonatomic) NSString *backdropGroupName;
@property(readonly, nonatomic) UILabel *textLabel;
@property(nonatomic) double maxWidth;
- (_Bool)isFloating;	// IMP=0x0000000100023668
- (void)setNeedsLayout;	// IMP=0x0000000100023610
- (void)layoutSubviews;	// IMP=0x00000001000235a4
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000001000234c0

@end
