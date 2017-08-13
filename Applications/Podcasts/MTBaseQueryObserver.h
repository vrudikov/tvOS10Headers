//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSFetchedResultsControllerDelegate.h"

@class NSFetchedResultsController, NSMutableDictionary, NSString;

@interface MTBaseQueryObserver : NSObject <NSFetchedResultsControllerDelegate>
{
    NSFetchedResultsController *_frc;	// 8 = 0x8
    _Bool _isObserving;	// 16 = 0x10
    NSString *_identifier;	// 24 = 0x18
    NSMutableDictionary *_handlers;	// 32 = 0x20
}

+ (Class)fetchedResultsControllerClass;	// IMP=0x00000001000e67e8
@property(retain, nonatomic) NSMutableDictionary *handlers; // @synthesize handlers=_handlers;
@property(nonatomic) _Bool isObserving; // @synthesize isObserving=_isObserving;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;	// IMP=0x00000001000e73c0
- (void)removeAllResultsChangedHandlers;	// IMP=0x00000001000e72e0
- (void)stop;	// IMP=0x00000001000e7038
- (void)removeResultsChangedHandler:(id)arg1;	// IMP=0x00000001000e6fb4
- (id)addResultsChangedHandler:(id)arg1;	// IMP=0x00000001000e6ed8
- (id)uuids;	// IMP=0x00000001000e6ce4
- (void)results:(CDUnknownBlockType)arg1;	// IMP=0x00000001000e6b44
- (void)startObserving;	// IMP=0x00000001000e68b4
- (void)setPredicate:(id)arg1;	// IMP=0x00000001000e680c
- (id)_frc;	// IMP=0x00000001000e67fc
- (id)initWithFetchRequest:(id)arg1;	// IMP=0x00000001000e6680
- (id)initWithEntityName:(id)arg1 predicate:(id)arg2 sortDescriptors:(id)arg3 returnObjectsAsFaults:(_Bool)arg4;	// IMP=0x00000001000e6578
- (id)initWithEntityName:(id)arg1 predicate:(id)arg2 sortDescriptors:(id)arg3;	// IMP=0x00000001000e64fc
- (id)initWithEntityName:(id)arg1 predicate:(id)arg2;	// IMP=0x00000001000e6494

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

