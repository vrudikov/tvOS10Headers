//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIGestureRecognizer.h"

#import "UIGestureRecognizerDelegate.h"

@class NSMutableSet, NSString, UIView;

@interface AETouchOutsideViewGestureRecognizer : UIGestureRecognizer <UIGestureRecognizerDelegate>
{
    UIView *mWatchView;	// 8 = 0x8
    NSMutableSet *mTargets;	// 16 = 0x10
}

@property(nonatomic) UIView *watchView; // @synthesize watchView=mWatchView;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;	// IMP=0x00000001001da91c
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000001001da574
- (void)removeTarget:(id)arg1 action:(SEL)arg2;	// IMP=0x00000001001da328
- (void)addTarget:(id)arg1 action:(SEL)arg2;	// IMP=0x00000001001da28c
- (void)dealloc;	// IMP=0x00000001001da220
- (id)initWithTarget:(id)arg1 action:(SEL)arg2 watchView:(id)arg3;	// IMP=0x00000001001da158

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

