//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class IMSearchField;

@interface IMSearchTableHeader : UIView
{
    IMSearchField *_searchField;	// 8 = 0x8
    UIView *_topLineView;	// 16 = 0x10
    UIView *_bottomLineView;	// 24 = 0x18
}

@property(readonly, nonatomic) IMSearchField *searchField; // @synthesize searchField=_searchField;
- (void)layoutSubviews;	// IMP=0x00000001001bbea4
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000001001bbcac
- (void)dealloc;	// IMP=0x00000001001bbc10

@end

