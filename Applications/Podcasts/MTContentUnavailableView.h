//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "MTColorThemeable.h"

@class MTColorTheme, NSString, UIButton, UIImage, UIImageView, UILabel;

@interface MTContentUnavailableView : UIView <MTColorThemeable>
{
    UILabel *_titleLabel;	// 8 = 0x8
    UILabel *_messageLabel;	// 16 = 0x10
    UIView *_containerView;	// 24 = 0x18
    UIImageView *_imageView;	// 32 = 0x20
    UIButton *_button;	// 40 = 0x28
    NSString *_title;	// 48 = 0x30
    NSString *_message;	// 56 = 0x38
    UIImage *_placeholderImage;	// 64 = 0x40
    NSString *_buttonText;	// 72 = 0x48
    CDUnknownBlockType _buttonCallback;	// 80 = 0x50
    MTColorTheme *_colorTheme;	// 88 = 0x58
}

+ (id)messageLabelWithFrame:(struct CGRect)arg1;	// IMP=0x000000010002c510
@property(retain, nonatomic) MTColorTheme *colorTheme; // @synthesize colorTheme=_colorTheme;
@property(copy, nonatomic) CDUnknownBlockType buttonCallback; // @synthesize buttonCallback=_buttonCallback;
@property(retain, nonatomic) NSString *buttonText; // @synthesize buttonText=_buttonText;
@property(retain, nonatomic) UIImage *placeholderImage; // @synthesize placeholderImage=_placeholderImage;
@property(retain, nonatomic) NSString *message; // @synthesize message=_message;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;	// IMP=0x000000010002d854
- (void)_sizeCategoryDidChange:(id)arg1;	// IMP=0x000000010002d68c
- (void)_buttonClick;	// IMP=0x000000010002d610
- (void)layoutSubviews;	// IMP=0x000000010002d1f8
- (void)dealloc;	// IMP=0x000000010002c8b0
- (id)initWithFrame:(struct CGRect)arg1 title:(id)arg2 message:(id)arg3;	// IMP=0x000000010002c6b4
- (id)initWithFrame:(struct CGRect)arg1 title:(id)arg2;	// IMP=0x000000010002c6a4
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000010002c694

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

