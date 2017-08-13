//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIToolbar.h"

@class UIColor, UIView;

@interface MTToolbar : UIToolbar
{
    UIView *_separatorView;	// 8 = 0x8
    UIColor *_separatorColor;	// 16 = 0x10
}

@property(retain, nonatomic) UIColor *separatorColor; // @synthesize separatorColor=_separatorColor;
- (void).cxx_destruct;	// IMP=0x000000010003fb7c
- (void)layoutSubviews;	// IMP=0x000000010003fa74
- (id)_separatorColor;	// IMP=0x000000010003fa00
@property(nonatomic, getter=isSeparatorHidden) _Bool separatorHidden;
- (void)setupView;	// IMP=0x000000010003f790
- (id)init;	// IMP=0x000000010003f738

@end

