//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class IMKnockoutButton, _UIBackdropView;

@interface IMVideoPlaybackInlineView : UIView
{
    _UIBackdropView *_pipBackdrop;	// 8 = 0x8
    IMKnockoutButton *_pipButton;	// 16 = 0x10
    _UIBackdropView *_fullScreenBackdrop;	// 24 = 0x18
    IMKnockoutButton *_fullScreenButton;	// 32 = 0x20
}

@property(retain, nonatomic) IMKnockoutButton *fullScreenButton; // @synthesize fullScreenButton=_fullScreenButton;
@property(retain, nonatomic) _UIBackdropView *fullScreenBackdrop; // @synthesize fullScreenBackdrop=_fullScreenBackdrop;
@property(retain, nonatomic) IMKnockoutButton *pipButton; // @synthesize pipButton=_pipButton;
@property(retain, nonatomic) _UIBackdropView *pipBackdrop; // @synthesize pipBackdrop=_pipBackdrop;
- (void).cxx_destruct;	// IMP=0x00000001001f5df4
- (id)_imageNamed:(id)arg1;	// IMP=0x00000001001f5c5c
- (void)layoutSubviews;	// IMP=0x00000001001f5300

@end

