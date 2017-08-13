//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MTFetchedResultsControllerProtocol.h"
#import "NSFetchedResultsControllerDelegate.h"

@class NSArray, NSFetchRequest, NSFetchedResultsController, NSManagedObjectContext, NSMutableArray, NSMutableDictionary, NSString;

@interface MTFetchedResultsController : NSObject <NSFetchedResultsControllerDelegate, MTFetchedResultsControllerProtocol>
{
    NSFetchedResultsController *_frc;	// 8 = 0x8
    NSMutableDictionary *_propertyCache;	// 16 = 0x10
    NSMutableArray *_changes;	// 24 = 0x18
    NSArray *_propertyKeys;	// 32 = 0x20
    NSManagedObjectContext *_managedObjectContext;	// 40 = 0x28
    id <NSFetchedResultsControllerDelegate> _delegate;	// 48 = 0x30
}

@property(nonatomic) __weak id <NSFetchedResultsControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSManagedObjectContext *managedObjectContext; // @synthesize managedObjectContext=_managedObjectContext;
@property(copy, nonatomic) NSArray *propertyKeys; // @synthesize propertyKeys=_propertyKeys;
- (void).cxx_destruct;	// IMP=0x000000010001d21c
- (_Bool)_hasManagedObjectChanged:(id)arg1;	// IMP=0x000000010001d0f4
- (void)_removeObjectFromCacheWithId:(id)arg1;	// IMP=0x000000010001d0dc
- (void)_updateCacheWithManagedObject:(id)arg1;	// IMP=0x000000010001d034
- (id)_dictionaryFromCacheForObjectID:(id)arg1;	// IMP=0x000000010001d01c
- (id)_dictionaryForObject:(id)arg1;	// IMP=0x000000010001cf90
- (void)controllerDidChangeContent:(id)arg1;	// IMP=0x000000010001cc90
- (void)controllerWillChangeContent:(id)arg1;	// IMP=0x000000010001cbf0
- (void)controller:(id)arg1 didChangeObject:(id)arg2 atIndexPath:(id)arg3 forChangeType:(unsigned long long)arg4 newIndexPath:(id)arg5;	// IMP=0x000000010001c96c
- (_Bool)performFetch:(id *)arg1;	// IMP=0x000000010001c8a8
- (id)indexPathForObject:(id)arg1;	// IMP=0x000000010001c890
- (id)objectAtIndexPath:(id)arg1;	// IMP=0x000000010001c878
@property(readonly, nonatomic) NSArray *fetchedObjects;
@property(readonly, nonatomic) NSFetchRequest *fetchRequest;
- (id)initWithFetchRequest:(id)arg1 managedObjectContext:(id)arg2 sectionNameKeyPath:(id)arg3 cacheName:(id)arg4;	// IMP=0x000000010001c6c8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

