//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionReusableView.h"

@class NSLayoutConstraint, NSString, UIColor, UIFont, UILabel;

@interface GKDashboardSectionHeaderView : UICollectionReusableView
{
    _Bool _onDarkBackground;	// 8 = 0x8
    UIColor *_titleColor;	// 16 = 0x10
    UILabel *_titleLabel;	// 24 = 0x18
    NSLayoutConstraint *_leftMarginConstraint;	// 32 = 0x20
    NSLayoutConstraint *_rightMarginConstraint;	// 40 = 0x28
}

+ (struct CGSize)platformSizeForTitle:(id)arg1 withFont:(id)arg2;	// IMP=0x000000010002fbfc
+ (double)widthForTitle:(id)arg1 withFont:(id)arg2;	// IMP=0x000000010002fabc
+ (double)defaultHeight;	// IMP=0x000000010002fab0
@property(nonatomic) NSLayoutConstraint *rightMarginConstraint; // @synthesize rightMarginConstraint=_rightMarginConstraint;
@property(nonatomic) NSLayoutConstraint *leftMarginConstraint; // @synthesize leftMarginConstraint=_leftMarginConstraint;
@property(nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIColor *titleColor; // @synthesize titleColor=_titleColor;
@property(nonatomic) _Bool onDarkBackground; // @synthesize onDarkBackground=_onDarkBackground;
- (struct CGSize)intrinsicContentSize;	// IMP=0x000000010002fde8
@property(copy, nonatomic) UIFont *font; // @dynamic font;
@property(copy, nonatomic) NSString *title; // @dynamic title;
- (void)dealloc;	// IMP=0x000000010002fcb4
- (void)awakeFromNib;	// IMP=0x000000010002fc48

@end

