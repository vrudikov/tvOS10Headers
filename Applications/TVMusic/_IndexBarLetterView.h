//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

@class NSString, UILabel, _UIFloatingContentView;

@interface _IndexBarLetterView : UIControl
{
    _Bool _focusedAppearance;	// 8 = 0x8
    _Bool _isPlaceholder;	// 9 = 0x9
    NSString *_indexLetter;	// 16 = 0x10
    unsigned long long _index;	// 24 = 0x18
    _UIFloatingContentView *_floatingView;	// 32 = 0x20
    UILabel *_letterLabel;	// 40 = 0x28
}

@property(nonatomic) _Bool isPlaceholder; // @synthesize isPlaceholder=_isPlaceholder;
@property(nonatomic) _Bool focusedAppearance; // @synthesize focusedAppearance=_focusedAppearance;
@property(retain, nonatomic) UILabel *letterLabel; // @synthesize letterLabel=_letterLabel;
@property(retain, nonatomic) _UIFloatingContentView *floatingView; // @synthesize floatingView=_floatingView;
@property(nonatomic) unsigned long long index; // @synthesize index=_index;
@property(copy, nonatomic) NSString *indexLetter; // @synthesize indexLetter=_indexLetter;
- (void).cxx_destruct;	// IMP=0x00000001000848f0
- (id)_letterColor;	// IMP=0x00000001000846e8
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000001000845fc
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x000000010008449c
- (_Bool)canBecomeFocused;	// IMP=0x0000000100084494
- (void)setFocusedAppearance:(_Bool)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x000000010008440c
- (void)setFocusedAppearance:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x00000001000843a0
- (void)setSelected:(_Bool)arg1;	// IMP=0x000000010008425c
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000001000841e0
- (id)description;	// IMP=0x00000001000840e4
- (id)initPlaceholderWithFrame:(struct CGRect)arg1 title:(id)arg2 index:(unsigned long long)arg3;	// IMP=0x00000001000840d4
- (id)initWithFrame:(struct CGRect)arg1 title:(id)arg2 index:(unsigned long long)arg3;	// IMP=0x00000001000840c4
- (id)initWithFrame:(struct CGRect)arg1 title:(id)arg2 index:(unsigned long long)arg3 isPlaceholder:(_Bool)arg4;	// IMP=0x0000000100083cfc

@end

