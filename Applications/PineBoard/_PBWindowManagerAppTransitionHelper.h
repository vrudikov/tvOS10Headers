//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PBAppTransitionContextDelegate.h"

@class NSString, PBAppTransitionTransaction;

@interface _PBWindowManagerAppTransitionHelper : NSObject <PBAppTransitionContextDelegate>
{
    PBAppTransitionTransaction *_transitionTransaction;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000100036264
- (void)_runCompletionsForContext:(id)arg1;	// IMP=0x0000000100036208
- (void)contextTransitionDidFail:(id)arg1;	// IMP=0x00000001000361fc
- (void)contextForegroundUpdateComplete:(id)arg1;	// IMP=0x00000001000361f0
- (void)contextReadyForFinalTransition:(id)arg1;	// IMP=0x00000001000361d8
- (id)initWithTransitionTransaction:(id)arg1;	// IMP=0x000000010003614c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

