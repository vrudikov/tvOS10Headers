//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IMTableViewController.h"

#import "NSFetchedResultsControllerDelegate.h"

@class NSFetchedResultsController, NSString;

@interface IMFRCTableViewController : IMTableViewController <NSFetchedResultsControllerDelegate>
{
    NSFetchedResultsController *_fetchedResultsController;	// 8 = 0x8
    id _frcTableViewControllerSetupSource;	// 16 = 0x10
    struct {
        unsigned int delegateHasPredicateForController:1;
        unsigned int delegateHasSortDescriptorsForController:1;
        unsigned int delegateHasFetchLimit:1;
        unsigned int delegateHasFetchBatchSize:1;
        unsigned int delegateHasSectionNameKeyPathForController:1;
    } _fetchedResultsControllerSetupFlags;	// 24 = 0x18
    _Bool _resultsAreCurrent;	// 28 = 0x1c
}

@property(nonatomic) __weak id <IMFRCTableViewControllerSetupSource> frcTableViewControllerSetupSource; // @synthesize frcTableViewControllerSetupSource=_frcTableViewControllerSetupSource;
- (long long)numberOfRows;	// IMP=0x00000001002092b8
- (long long)indexForIndexPath:(id)arg1;	// IMP=0x00000001002091f4
- (void)controllerDidChangeContent:(id)arg1;	// IMP=0x00000001002091d0
- (void)controller:(id)arg1 didChangeSection:(id)arg2 atIndex:(unsigned long long)arg3 forChangeType:(unsigned long long)arg4;	// IMP=0x0000000100209124
- (void)controller:(id)arg1 didChangeObject:(id)arg2 atIndexPath:(id)arg3 forChangeType:(unsigned long long)arg4 newIndexPath:(id)arg5;	// IMP=0x0000000100208f14
- (void)controllerWillChangeContent:(id)arg1;	// IMP=0x0000000100208ef0
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x0000000100208e60
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x0000000100208d28
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x0000000100208cf8
- (void)configureCell:(id)arg1 atIndexPath:(id)arg2 withObject:(id)arg3;	// IMP=0x0000000100208c6c
- (id)entityNameForFRC;	// IMP=0x0000000100208bdc
- (id)managedObjectContextForFRC;	// IMP=0x0000000100208b4c
- (void)resetFetchResultsCurrent:(_Bool)arg1;	// IMP=0x0000000100208b3c
- (void)managedObjectContextDidSave:(id)arg1;	// IMP=0x0000000100208b2c
- (void)performFetch;	// IMP=0x0000000100208ab8
- (void)reloadData;	// IMP=0x0000000100208a78
@property(readonly, nonatomic) NSFetchedResultsController *fetchedResultsController; // @synthesize fetchedResultsController=_fetchedResultsController;
- (void)viewDidUnload;	// IMP=0x000000010020853c
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0000000100208508
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000001002084b8
- (void)dealloc;	// IMP=0x0000000100208420

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

