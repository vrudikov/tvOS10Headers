//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTSingleton.h"

@class MTBaseQueryObserver, MTDefaultsChangeNotifier, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>;

@interface MTBaseProcessor : MTSingleton
{
    MTBaseQueryObserver *_queryObserver;	// 8 = 0x8
    NSObject<OS_dispatch_source> *_timer;	// 16 = 0x10
    MTDefaultsChangeNotifier *_defaultsNotifier;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_workQueue;	// 32 = 0x20
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(retain, nonatomic) MTDefaultsChangeNotifier *defaultsNotifier; // @synthesize defaultsNotifier=_defaultsNotifier;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) MTBaseQueryObserver *queryObserver; // @synthesize queryObserver=_queryObserver;
- (void).cxx_destruct;	// IMP=0x0000000100095fa4
- (void)enqueueWorkBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000100095dbc
- (id)defaultPropertiesThatAffectPredicate;	// IMP=0x0000000100095db4
- (void)results:(CDUnknownBlockType)arg1;	// IMP=0x0000000100095d48
- (void)resultsChangedWithDeletedIds:(id)arg1 andInsertIds:(id)arg2;	// IMP=0x0000000100095d10
- (id)predicate;	// IMP=0x0000000100095cec
- (id)entityName;	// IMP=0x0000000100095cc8
- (double)updatePredicateDuration;	// IMP=0x0000000100095cc0
- (void)updatePredicate;	// IMP=0x0000000100095c50
- (id)createQueryObserver;	// IMP=0x0000000100095944
- (_Bool)isRunning;	// IMP=0x000000010009592c
- (void)start;	// IMP=0x0000000100095278

@end
