//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTDictionaryDiff.h"

@interface MTDefaultsChangeNotifier : MTDictionaryDiff
{
    _Bool _running;	// 8 = 0x8
}

@property(nonatomic, getter=isRunning) _Bool running; // @synthesize running=_running;
- (void)_defaultsChanged;	// IMP=0x0000000100052534
- (void)stop;	// IMP=0x0000000100052470
- (void)start;	// IMP=0x00000001000523bc
- (void)dealloc;	// IMP=0x0000000100052330
- (id)init;	// IMP=0x00000001000522d8

@end

