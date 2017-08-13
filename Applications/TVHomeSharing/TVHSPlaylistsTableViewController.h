//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TVHSPreviewTableViewController.h"

@interface TVHSPlaylistsTableViewController : TVHSPreviewTableViewController
{
    CDUnknownBlockType _playlistItemsViewControllerBlock;	// 8 = 0x8
    CDUnknownBlockType _playlistsPreviewDataClientResultsControllerBlock;	// 16 = 0x10
}

@property(copy, nonatomic) CDUnknownBlockType playlistsPreviewDataClientResultsControllerBlock; // @synthesize playlistsPreviewDataClientResultsControllerBlock=_playlistsPreviewDataClientResultsControllerBlock;
@property(copy, nonatomic) CDUnknownBlockType playlistItemsViewControllerBlock; // @synthesize playlistItemsViewControllerBlock=_playlistItemsViewControllerBlock;
- (void).cxx_destruct;	// IMP=0x0000000100039cbc
- (void)_configureCell:(id)arg1 withPlaylist:(id)arg2;	// IMP=0x0000000100039b08
- (id)_playlistForIndexPath:(id)arg1;	// IMP=0x0000000100039a44
- (id)_previewDataClientResultsControllerForPlaylist:(id)arg1;	// IMP=0x00000001000399a0
- (id)_playlistItemsViewControllerForPlaylist:(id)arg1;	// IMP=0x00000001000398fc
- (id)_previewViewControllerForContentItem:(id)arg1;	// IMP=0x0000000100039828
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x00000001000396c8
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x00000001000395f8
- (void)viewDidLoad;	// IMP=0x0000000100039540
- (id)initWithPlaylistFolder:(id)arg1;	// IMP=0x0000000100039464

@end

