//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTSingleton.h"

#import "NSUserActivityDelegate.h"

@class NSString, NSUserActivity;

@interface MTHandoffController : MTSingleton <NSUserActivityDelegate>
{
    NSUserActivity *_activity;	// 8 = 0x8
}

@property(retain, nonatomic) NSUserActivity *activity; // @synthesize activity=_activity;
- (void).cxx_destruct;	// IMP=0x0000000100116ffc
- (void)continuePlaybackActivity:(id)arg1;	// IMP=0x0000000100116970
- (id)supportedActivityTypes;	// IMP=0x000000010011691c
- (void)continueActivity:(id)arg1;	// IMP=0x0000000100116878
- (id)init;	// IMP=0x0000000100116844

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
