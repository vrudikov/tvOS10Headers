//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSAutoreleasePool;

@interface IMAutoreleasePool : NSObject
{
    NSAutoreleasePool *_pool;	// 8 = 0x8
    int _count;	// 16 = 0x10
    int _maxCount;	// 20 = 0x14
    id _target;	// 24 = 0x18
    SEL _action;	// 32 = 0x20
    void *_context;	// 40 = 0x28
}

@property(nonatomic) int maxCount; // @synthesize maxCount=_maxCount;
@property(readonly, nonatomic) int count; // @synthesize count=_count;
- (void)dealloc;	// IMP=0x000000010018c600
- (void)increaseCount;	// IMP=0x000000010018c56c
- (void)_resetPool;	// IMP=0x000000010018c4e0
- (void)setTarget:(id)arg1 action:(SEL)arg2 context:(void *)arg3;	// IMP=0x000000010018c4b8
- (id)init;	// IMP=0x000000010018c428

@end

