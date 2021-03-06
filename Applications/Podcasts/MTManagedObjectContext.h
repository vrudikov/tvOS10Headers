//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSManagedObjectContext.h"

@interface MTManagedObjectContext : NSManagedObjectContext
{
    long long _type;	// 8 = 0x8
}

@property(nonatomic) long long type; // @synthesize type=_type;
- (void)seedCacheWithObjectsInEntity:(id)arg1 predicateFormat:(id)arg2;	// IMP=0x0000000100132c90
- (void)seedCacheWithObjectsInEntity:(id)arg1 predicate:(id)arg2;	// IMP=0x0000000100132a1c
- (void)performBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000001001329b4
- (void)performBlockAndWait:(CDUnknownBlockType)arg1;	// IMP=0x0000000100132888
- (void)validateConcurencyType;	// IMP=0x000000010013273c
- (void)handleError:(id *)arg1 withCallback:(CDUnknownBlockType)arg2;	// IMP=0x000000010013269c
- (id)existingObjectWithID:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100132488
- (id)objectWithID:(id)arg1;	// IMP=0x0000000100132404
- (id)objectRegisteredForID:(id)arg1;	// IMP=0x0000000100132380
- (unsigned long long)countForFetchRequest:(id)arg1 error:(id *)arg2;	// IMP=0x00000001001321b0
- (id)executeFetchRequest:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100131f84
- (void)insertObject:(id)arg1;	// IMP=0x0000000100131f0c
- (void)deleteObject:(id)arg1;	// IMP=0x0000000100131e00

@end

