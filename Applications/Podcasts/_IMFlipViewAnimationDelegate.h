//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IMFlipViewTransition;

@interface _IMFlipViewAnimationDelegate : NSObject
{
    long long tag;	// 8 = 0x8
    IMFlipViewTransition *_flipView;	// 16 = 0x10
}

+ (id)delegateWithTag:(long long)arg1 flipView:(id)arg2;	// IMP=0x00000001001ac74c
@property(retain, nonatomic) IMFlipViewTransition *flipView; // @synthesize flipView=_flipView;
@property(nonatomic) long long tag; // @synthesize tag;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;	// IMP=0x00000001001ac7cc
- (void)animationDidStart:(id)arg1;	// IMP=0x00000001001ac7c8
- (void)dealloc;	// IMP=0x00000001001ac6f8
- (id)init;	// IMP=0x00000001001ac6bc

@end

