//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IMProcessAssertion, NSString;

@interface IMTaskAssertion : NSObject
{
    CDUnknownBlockType _expireHandler;	// 8 = 0x8
    NSString *_debugInfo;	// 16 = 0x10
    IMProcessAssertion *_processAssertion;	// 24 = 0x18
}

+ (id)newBackgroundTaskWithExpirationHandler:(CDUnknownBlockType)arg1 debugInfo:(id)arg2;	// IMP=0x000000010006efcc
- (id)description;	// IMP=0x000000010006f1e0
- (void)invalidate;	// IMP=0x000000010006f154
- (void)performExpirationHandler;	// IMP=0x000000010006f090
- (void)dealloc;	// IMP=0x000000010006f010
- (id)initWithExpirationHandler:(CDUnknownBlockType)arg1 debugInfo:(id)arg2;	// IMP=0x000000010006eea0

@end

