//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTBasePodcastListViewController.h"

#import "MTSourceListDelegate.h"
#import "MTStationCellDelegate.h"
#import "UIViewControllerRestoration.h"

@class MTPlaylistSelectPodcastListViewController, NSString;

@interface MTStationsViewController : MTBasePodcastListViewController <MTStationCellDelegate, MTSourceListDelegate, UIViewControllerRestoration>
{
    MTPlaylistSelectPodcastListViewController *_newPlaylistController;	// 8 = 0x8
    _Bool _folder;	// 16 = 0x10
}

+ (id)viewControllerWithRestorationIdentifierPath:(id)arg1 coder:(id)arg2;	// IMP=0x00000001000aa91c
+ (id)defaultsKey;	// IMP=0x00000001000a6804
@property(nonatomic, getter=isFolder) _Bool folder; // @synthesize folder=_folder;
- (void).cxx_destruct;	// IMP=0x00000001000aab00
- (id)metricsName;	// IMP=0x00000001000aaab4
- (void)decodeRestorableStateWithCoder:(id)arg1;	// IMP=0x00000001000aaa80
- (void)encodeRestorableStateWithCoder:(id)arg1;	// IMP=0x00000001000aa9d8
- (long long)_minEditableRow;	// IMP=0x00000001000aa720
- (void)playPlaylist:(id)arg1 selectCell:(_Bool)arg2;	// IMP=0x00000001000aa528
- (void)stationCellDidTapPlayButton:(id)arg1;	// IMP=0x00000001000aa4c8
- (id)firstValidIndexPath;	// IMP=0x00000001000aa41c
- (void)restoreSelection;	// IMP=0x00000001000aa2b0
- (void)cancelNewPlaylist:(id)arg1;	// IMP=0x00000001000aa220
- (void)doneNewPlaylist:(id)arg1;	// IMP=0x00000001000aa138
- (void)configureCell:(id)arg1 withObject:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x00000001000aa0b8
- (void)getObjectId:(id *)arg1 andIndexPath:(id *)arg2 forItemWithUuid:(id)arg3;	// IMP=0x00000001000a9e40
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;	// IMP=0x00000001000a9828
- (void)sourceList:(id)arg1 didUpdateSelectedItemUuid:(id)arg2;	// IMP=0x00000001000a9824
- (void)sourceList:(id)arg1 didSelectItemUuid:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x00000001000a97dc
- (id)defaultSystemTintColor;	// IMP=0x00000001000a9734
- (id)makeNewStationAlertController;	// IMP=0x00000001000a93b0
- (id)makeNewStationAlertView;	// IMP=0x00000001000a9184
- (void)addStation:(id)arg1;	// IMP=0x00000001000a9144
- (void)createPlaylistWithName:(id)arg1 includesAll:(_Bool)arg2 podcasts:(id)arg3;	// IMP=0x00000001000a8c7c
- (id)tableView:(id)arg1 targetIndexPathForMoveFromRowAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3;	// IMP=0x00000001000a8b84
- (void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3;	// IMP=0x00000001000a8820
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x00000001000a8720
- (void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2;	// IMP=0x00000001000a8644
- (_Bool)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;	// IMP=0x00000001000a85fc
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;	// IMP=0x00000001000a8550
- (_Bool)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2;	// IMP=0x00000001000a84a4
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;	// IMP=0x00000001000a83e4
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x00000001000a8194
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x00000001000a7e88
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x00000001000a7e38
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x00000001000a7e00
- (void)controller:(id)arg1 didChangeObject:(id)arg2 atIndexPath:(id)arg3 forChangeType:(unsigned long long)arg4 newIndexPath:(id)arg5;	// IMP=0x00000001000a7bd4
- (void)controllerDidChangeContent:(id)arg1;	// IMP=0x00000001000a7b84
- (id)attributedTitleForRefreshControl;	// IMP=0x00000001000a7a44
- (void)feedUpdateDidComplete:(id)arg1;	// IMP=0x00000001000a788c
- (void)feedUpdateDidStart;	// IMP=0x00000001000a787c
- (void)refresh:(id)arg1;	// IMP=0x00000001000a769c
- (void)setRefreshing:(_Bool)arg1;	// IMP=0x00000001000a7550
- (_Bool)showsNewStation;	// IMP=0x00000001000a74f0
- (void)updateEditButton;	// IMP=0x00000001000a7310
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x00000001000a6e00
- (void)finishedEditing:(id)arg1;	// IMP=0x00000001000a6d90
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000001000a6ce0
- (void)viewDidLoad;	// IMP=0x00000001000a6b84
- (id)newCellInstanceWithReuseIdentifier:(id)arg1;	// IMP=0x00000001000a6a74
- (id)reuseIdentifierForRow:(id)arg1;	// IMP=0x00000001000a6a60
- (void)dealloc;	// IMP=0x00000001000a69e4
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00000001000a6830

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

