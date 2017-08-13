//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTStationsViewController.h"

@class NSIndexPath, NSString;

@interface MTiTunesFolderViewController : MTStationsViewController
{
    NSIndexPath *_lastSelectedIndexPath;	// 8 = 0x8
    _Bool _folder;	// 16 = 0x10
    NSString *_playlistUuid;	// 24 = 0x18
    id <MTEpisodeListViewControllerDelegate> _selectionDelegate;	// 32 = 0x20
}

@property(nonatomic) __weak id <MTEpisodeListViewControllerDelegate> selectionDelegate; // @synthesize selectionDelegate=_selectionDelegate;
@property(retain, nonatomic) NSString *playlistUuid; // @synthesize playlistUuid=_playlistUuid;
@property(nonatomic, getter=isFolder) _Bool folder; // @synthesize folder=_folder;
- (void).cxx_destruct;	// IMP=0x0000000100124da4
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x0000000100124bec
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;	// IMP=0x0000000100124b40
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x000000010012493c
- (void)restoreSelection;	// IMP=0x0000000100124938
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x00000001001248dc
- (void)iTunesFoldersAreNotRefreshable;	// IMP=0x00000001001248a0
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00000001001247fc
- (id)initWithPlaylist:(id)arg1;	// IMP=0x00000001001244dc

@end

