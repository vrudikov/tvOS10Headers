//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TVHSNavigationItem.h"

@interface TVHSTVShowsByNameNavigationItem : TVHSNavigationItem
{
}

- (id)_seasonWithID:(id)arg1 forShowName:(id)arg2;	// IMP=0x000000010000becc
- (id)_showWithName:(id)arg1;	// IMP=0x000000010000bd2c
- (id)_showAtIndexPath:(id)arg1;	// IMP=0x000000010000bcb8
- (id)_cellForContentItemAtIndexPath:(id)arg1 tableView:(id)arg2;	// IMP=0x000000010000b9d4
- (id)_playlistsViewController;	// IMP=0x000000010000b960
- (id)_playlistsPreviewDataClientResultsController;	// IMP=0x000000010000b8fc
- (id)_selectViewControllerForContentItemAtIndexPath:(id)arg1;	// IMP=0x000000010000b76c
- (id)_playViewControllerForContentItemAtIndexPath:(id)arg1;	// IMP=0x000000010000b678
- (id)_previewViewControllerForContentItemAtIndexPath:(id)arg1;	// IMP=0x000000010000b60c
- (struct UIEdgeInsets)_previewViewPaddingForContentItemAtIndexPath:(id)arg1;	// IMP=0x000000010000b574
- (_Bool)reloadDataForContentItemViewController:(id)arg1;	// IMP=0x000000010000b38c
- (id)initWithDataClient:(id)arg1;	// IMP=0x000000010000b270

@end

