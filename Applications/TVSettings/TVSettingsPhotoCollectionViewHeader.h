//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionReusableView.h"

@class NSString, UILabel;

@interface TVSettingsPhotoCollectionViewHeader : UICollectionReusableView
{
    UILabel *_titleLabel;	// 8 = 0x8
    UILabel *_subtitleLabel;	// 16 = 0x10
}

@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;	// IMP=0x0000000100085304
@property(copy, nonatomic) NSString *subtitle;
@property(copy, nonatomic) NSString *title;
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100084e4c

@end

