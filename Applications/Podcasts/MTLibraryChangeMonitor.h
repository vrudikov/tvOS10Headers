//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSHashTable;

@interface MTLibraryChangeMonitor : NSObject
{
    NSHashTable *_notifiers;	// 8 = 0x8
}

+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010003f0c8
+ (id)sharedInstance;	// IMP=0x000000010003eff4
@property(retain, nonatomic) NSHashTable *notifiers; // @synthesize notifiers=_notifiers;
- (void).cxx_destruct;	// IMP=0x000000010003f724
- (void)notify:(id)arg1;	// IMP=0x000000010003f2ec
- (void)removeChangeNotifier:(id)arg1;	// IMP=0x000000010003f240
- (void)addChangeNotifier:(id)arg1;	// IMP=0x000000010003f194
- (id)init;	// IMP=0x000000010003f110
- (id)copy;	// IMP=0x000000010003f0e8

@end
