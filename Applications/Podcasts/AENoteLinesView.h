//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIColor;

@interface AENoteLinesView : UIView
{
    _Bool _useHalfPixelAdjustment;	// 8 = 0x8
    double _lineHeight;	// 16 = 0x10
    UIColor *_lineColor;	// 24 = 0x18
}

@property(nonatomic) _Bool useHalfPixelAdjustment; // @synthesize useHalfPixelAdjustment=_useHalfPixelAdjustment;
@property(retain, nonatomic) UIColor *lineColor; // @synthesize lineColor=_lineColor;
@property(nonatomic) double lineHeight; // @synthesize lineHeight=_lineHeight;
- (void)drawRect:(struct CGRect)arg1;	// IMP=0x00000001001f21f0
- (void)dealloc;	// IMP=0x00000001001f2194
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000001001f20c4

@end

