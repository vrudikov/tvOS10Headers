//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSManagedObjectContext, NSMutableArray, NSMutableSet, NSPredicate, NSString;

@interface MTEntityUpdaterCache : NSObject
{
    NSArray *_properties;	// 8 = 0x8
    NSMutableArray *_objectsByProperty;	// 16 = 0x10
    NSArray *_propertiesToFetch;	// 24 = 0x18
    NSManagedObjectContext *_ctx;	// 32 = 0x20
    NSPredicate *_predicate;	// 40 = 0x28
    NSMutableSet *_unvisited;	// 48 = 0x30
    NSString *_entityName;	// 56 = 0x38
    CDUnknownBlockType _allowKeyForValue;	// 64 = 0x40
}

@property(copy, nonatomic) CDUnknownBlockType allowKeyForValue; // @synthesize allowKeyForValue=_allowKeyForValue;
- (void).cxx_destruct;	// IMP=0x0000000100081b7c
- (void)enumerateUnvisitedItemUuids:(CDUnknownBlockType)arg1;	// IMP=0x0000000100081a08
- (void)_addDictionary:(id)arg1;	// IMP=0x00000001000818d4
- (void)addEntityToCache:(id)arg1;	// IMP=0x0000000100081884
- (void)_buildMap;	// IMP=0x0000000100081538
- (id)propertyDictionaryForSearchItem:(id)arg1;	// IMP=0x0000000100081304
- (id)initWithPredicate:(id)arg1 entityName:(id)arg2 ctx:(id)arg3 properties:(id)arg4 fetchProperties:(id)arg5;	// IMP=0x000000010008116c

@end

