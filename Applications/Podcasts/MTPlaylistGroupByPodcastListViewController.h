//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTListViewController.h"

#import "MTPlaylistLayoutControllerProtocol.h"
#import "MTPodcastGroupCellDelegate.h"
#import "MTReachabilityObserver.h"
#import "MTSourceListDelegate.h"
#import "UIViewControllerRestoration.h"

@class MTAllPropertyChangesQueryObserver, MTPlaylistSelectPodcastListViewController, MTUuidQueryObserver, NSIndexPath, NSString, UIBarButtonItem, UIButton, UIPopoverController, UIRefreshControl, UIView, UIViewController;

@interface MTPlaylistGroupByPodcastListViewController : MTListViewController <MTSourceListDelegate, MTPodcastGroupCellDelegate, UIViewControllerRestoration, MTReachabilityObserver, MTPlaylistLayoutControllerProtocol>
{
    UIViewController *_detailController;	// 8 = 0x8
    UIPopoverController *_episodePopover;	// 16 = 0x10
    NSString *_settingsUuidDisplayingPopover;	// 24 = 0x18
    UIView *_footerView;	// 32 = 0x20
    UIButton *_settingsButton;	// 40 = 0x28
    UIBarButtonItem *_settingsButtonItem;	// 48 = 0x30
    UIPopoverController *_settingsPopover;	// 56 = 0x38
    UIRefreshControl *_refreshControl;	// 64 = 0x40
    MTUuidQueryObserver *_uuidQueryObserver;	// 72 = 0x48
    unsigned long long _episodesCount;	// 80 = 0x50
    MTPlaylistSelectPodcastListViewController *_addPodcastsViewController;	// 88 = 0x58
    MTAllPropertyChangesQueryObserver *_downloadedQuery;	// 96 = 0x60
    _Bool _isRefreshing;	// 104 = 0x68
    _Bool _downloadButtonEnabled;	// 105 = 0x69
    _Bool _downloadsAvailable;	// 106 = 0x6a
    CDUnknownBlockType _settingsBlock;	// 112 = 0x70
    id <MTPlaylistLayoutViewControllerDelegate> _layoutDelegate;	// 120 = 0x78
    NSString *_playlistUuid;	// 128 = 0x80
    NSIndexPath *_previewIndexPath;	// 136 = 0x88
    id <UIViewControllerPreviewing> _previewingContext;	// 144 = 0x90
}

+ (id)viewControllerWithRestorationIdentifierPath:(id)arg1 coder:(id)arg2;	// IMP=0x00000001000e3690
+ (id)stationPodcastPredicateForPlaylist:(id)arg1;	// IMP=0x00000001000ddbfc
@property(retain, nonatomic) id <UIViewControllerPreviewing> previewingContext; // @synthesize previewingContext=_previewingContext;
@property(retain, nonatomic) NSIndexPath *previewIndexPath; // @synthesize previewIndexPath=_previewIndexPath;
@property(nonatomic) _Bool downloadsAvailable; // @synthesize downloadsAvailable=_downloadsAvailable;
@property(nonatomic) _Bool downloadButtonEnabled; // @synthesize downloadButtonEnabled=_downloadButtonEnabled;
@property(nonatomic) _Bool isRefreshing; // @synthesize isRefreshing=_isRefreshing;
@property(retain, nonatomic) NSString *playlistUuid; // @synthesize playlistUuid=_playlistUuid;
@property(nonatomic) __weak id <MTPlaylistLayoutViewControllerDelegate> layoutDelegate; // @synthesize layoutDelegate=_layoutDelegate;
@property(copy, nonatomic) CDUnknownBlockType settingsBlock; // @synthesize settingsBlock=_settingsBlock;
- (void).cxx_destruct;	// IMP=0x00000001000e3b8c
- (id)metricDataSource;	// IMP=0x00000001000e3994
- (id)metricsName;	// IMP=0x00000001000e3968
- (void)playlistSettingsDidChange;	// IMP=0x00000001000e3824
- (void)decodeRestorableStateWithCoder:(id)arg1;	// IMP=0x00000001000e3768
- (void)encodeRestorableStateWithCoder:(id)arg1;	// IMP=0x00000001000e36b8
- (void)podcastGroupCellDidTapInfoButton:(id)arg1;	// IMP=0x00000001000e35f0
- (void)addUUIDQueryObserver;	// IMP=0x00000001000e33c0
- (void)_modifyEpisodesForSettingsWithBlock:(CDUnknownBlockType)arg1 atIndexPaths:(id)arg2 ctx:(id)arg3;	// IMP=0x00000001000e3038
- (void)_showDetailViewControllerForIndexPath:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00000001000e2f9c
- (id)_detailViewControllerForIndexPath:(id)arg1;	// IMP=0x00000001000e2ea8
- (void)playlistSettingsDidChangeSetting:(id)arg1;	// IMP=0x00000001000e2d64
- (void)controllerDidChangeContent:(id)arg1;	// IMP=0x00000001000e2b98
- (void)controller:(id)arg1 didChangeObject:(id)arg2 atIndexPath:(id)arg3 forChangeType:(unsigned long long)arg4 newIndexPath:(id)arg5;	// IMP=0x00000001000e2a60
- (id)objectAtIndexPath:(id)arg1;	// IMP=0x00000001000e2a2c
- (void)markSelectedItems:(_Bool)arg1;	// IMP=0x00000001000e2478
- (void)_updatePlaylistSuppressUpdates:(_Bool)arg1;	// IMP=0x00000001000e1fcc
- (void)_updatePlaylist;	// IMP=0x00000001000e1fbc
- (void)selectedItemAtIndexPath:(id)arg1;	// IMP=0x00000001000e1e9c
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x00000001000e1dfc
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x00000001000e1df4
- (_Bool)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;	// IMP=0x00000001000e1dec
- (void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3;	// IMP=0x00000001000e1a78
- (_Bool)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2;	// IMP=0x00000001000e1a58
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;	// IMP=0x00000001000e1a38
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;	// IMP=0x00000001000e17d0
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x00000001000e1524
- (void)sourceList:(id)arg1 didUpdateSelectedItemUuid:(id)arg2;	// IMP=0x00000001000e1520
- (void)sourceList:(id)arg1 didSelectItemUuid:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x00000001000e14d8
- (void)markSelectedItemsAsSaved:(_Bool)arg1;	// IMP=0x00000001000e118c
- (void)endRefreshing;	// IMP=0x00000001000e10e0
- (void)feedUpdateDidComplete:(id)arg1;	// IMP=0x00000001000e0c68
- (void)feedUpdateDidStart;	// IMP=0x00000001000e0bd8
- (void)refreshPlaylist:(id)arg1;	// IMP=0x00000001000e0754
- (id)footerView;	// IMP=0x00000001000e052c
- (void)updateDownloadButtonState;	// IMP=0x00000001000e04b8
- (id)episodeListForSettings:(id)arg1;	// IMP=0x00000001000e03ec
- (void)configureAllVisibleCells;	// IMP=0x00000001000e01f4
- (void)transitionToState:(long long)arg1 animated:(_Bool)arg2;	// IMP=0x00000001000e0040
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x00000001000dff9c
- (void)updateEditingState:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x00000001000dfd0c
- (void)reachabilityChangedFrom:(_Bool)arg1 to:(_Bool)arg2;	// IMP=0x00000001000dfc14
- (void)contentSizeCategoryDidChange:(id)arg1;	// IMP=0x00000001000dfb14
- (void)finishedAdding:(id)arg1;	// IMP=0x00000001000df844
- (void)cancel:(id)arg1;	// IMP=0x00000001000df830
- (void)delete:(id)arg1;	// IMP=0x00000001000df670
- (void)finishedSettings:(id)arg1;	// IMP=0x00000001000df65c
- (void)showSettings:(id)arg1;	// IMP=0x00000001000df638
- (void)downloadAll:(id)arg1;	// IMP=0x00000001000df5f0
- (id)settingsButtonItem;	// IMP=0x00000001000df508
- (id)settingsButton;	// IMP=0x00000001000df390
- (id)editingToolbarItems;	// IMP=0x00000001000df200
- (id)toolbarButtonItems;	// IMP=0x00000001000df110
- (id)leftEditingItems;	// IMP=0x00000001000df104
- (id)leftButtonItems;	// IMP=0x00000001000df048
- (id)emptyListMessage;	// IMP=0x00000001000df028
- (void)configureCell:(id)arg1 withObject:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x00000001000def10
- (id)newCellInstanceWithReuseIdentifier:(id)arg1;	// IMP=0x00000001000deea4
- (id)reuseIdentifierForRow:(id)arg1;	// IMP=0x00000001000dee78
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;	// IMP=0x00000001000dede4
- (id)previewPlayAction;	// IMP=0x00000001000deb70
- (id)previewActionItems;	// IMP=0x00000001000deab4
- (void)previewingContext:(id)arg1 commitViewController:(id)arg2;	// IMP=0x00000001000dea14
- (id)previewingContext:(id)arg1 viewControllerForLocation:(struct CGPoint)arg2;	// IMP=0x00000001000de95c
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x00000001000de830
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;	// IMP=0x00000001000de784
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x00000001000de6d8
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00000001000de38c
- (void)viewDidLoad;	// IMP=0x00000001000de0e8
- (void)dealloc;	// IMP=0x00000001000ddfd8
- (id)initWithStation:(id)arg1;	// IMP=0x00000001000ddc50

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

