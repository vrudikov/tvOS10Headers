//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface IMPulseEvent : NSObject
{
    struct _opaque_pthread_mutex_t {
        long long __sig;
        char __opaque[56];
    } _mutex;	// 8 = 0x8
    struct _opaque_pthread_cond_t {
        long long __sig;
        char __opaque[40];
    } _cond;	// 72 = 0x48
    int _gate_open;	// 120 = 0x78
}

- (void)pulse;	// IMP=0x0000000100194b68
- (void)wait;	// IMP=0x0000000100194b04
- (void)dealloc;	// IMP=0x0000000100194aa0
- (id)init;	// IMP=0x00000001001949e0

@end

