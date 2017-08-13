//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TVDataQueryViewController.h"

#import "TVDataQueryViewControllerDelegate.h"

@class NSString, TVHSPreviewTableViewController;

@interface TVHSDataQueryViewController : TVDataQueryViewController <TVDataQueryViewControllerDelegate>
{
    CDUnknownBlockType _tableViewControllerBlock;	// 8 = 0x8
    TVHSPreviewTableViewController *_tableViewController;	// 16 = 0x10
}

@property(retain, nonatomic) TVHSPreviewTableViewController *tableViewController; // @synthesize tableViewController=_tableViewController;
@property(copy, nonatomic) CDUnknownBlockType tableViewControllerBlock; // @synthesize tableViewControllerBlock=_tableViewControllerBlock;
- (void).cxx_destruct;	// IMP=0x000000010000a914
- (void)_setResultsViewControllerIfNeeded;	// IMP=0x000000010000a808
- (unsigned long long)_proccessResultsForQuery:(id)arg1;	// IMP=0x000000010000a720
- (void)_setQueryResults:(id)arg1;	// IMP=0x000000010000a6b4
- (void)_configureTableViewController:(id)arg1;	// IMP=0x000000010000a6b0
- (unsigned long long)dataQueryViewController:(id)arg1 didChangeResultsForQuery:(id)arg2;	// IMP=0x000000010000a648
- (id)initWithDataClientResultsController:(id)arg1;	// IMP=0x000000010000a5ec

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

