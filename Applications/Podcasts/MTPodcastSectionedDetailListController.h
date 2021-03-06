//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTEpisodeListViewController.h"

#import "MTPodcastDetailDataSourceDelegate.h"

@class MTPodcastDetailDataSource, NSString;

@interface MTPodcastSectionedDetailListController : MTEpisodeListViewController <MTPodcastDetailDataSourceDelegate>
{
    NSString *_podcastUUID;	// 8 = 0x8
    MTPodcastDetailDataSource *_dataSource;	// 16 = 0x10
}

@property(retain, nonatomic) MTPodcastDetailDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(readonly, copy, nonatomic) NSString *podcastUUID; // @synthesize podcastUUID=_podcastUUID;
- (void).cxx_destruct;	// IMP=0x000000010008ac48
- (void)reloadSectionHeaderForSection:(id)arg1;	// IMP=0x000000010008aa68
- (void)episodeSection:(id)arg1 didChangeObject:(id)arg2 atIndexPath:(id)arg3 forChangeType:(unsigned long long)arg4 newIndexPath:(id)arg5;	// IMP=0x000000010008a744
- (void)sectionDidChangeContent:(id)arg1;	// IMP=0x000000010008a51c
- (void)reloadSectionForDarkPlacardIfNeeded;	// IMP=0x000000010008a470
- (void)reloadSectionForEmptyOverlayIfNeeded;	// IMP=0x000000010008a3c4
- (void)sectionWillChangeContent:(id)arg1;	// IMP=0x000000010008a360
- (void)configureCell:(id)arg1 withObject:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x000000010008a210
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;	// IMP=0x000000010008a1b8
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x000000010008a10c
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x000000010008a0c0
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;	// IMP=0x0000000100089fe8
- (id)indexPathsForEpisode:(id)arg1;	// IMP=0x0000000100089df4
- (unsigned long long)sectionTypeForIndex:(unsigned long long)arg1;	// IMP=0x0000000100089d98
- (unsigned long long)sectionIndexForType:(unsigned long long)arg1;	// IMP=0x0000000100089d40
- (unsigned long long)indexForSection:(id)arg1;	// IMP=0x0000000100089cc4
- (id)sectionForType:(unsigned long long)arg1;	// IMP=0x0000000100089b7c
- (id)sectionForIndex:(long long)arg1;	// IMP=0x0000000100089ac8
- (unsigned long long)sectionTypeForIndexPath:(id)arg1;	// IMP=0x0000000100089a60
- (id)messageForEmptySection;	// IMP=0x00000001000899f0
- (id)createEmptySectionCell;	// IMP=0x000000010008996c
- (id)newCellInstanceWithReuseIdentifier:(id)arg1;	// IMP=0x00000001000898d4
- (id)reuseIdentifierForRow:(id)arg1;	// IMP=0x0000000100089804
- (id)indexPathForObject:(id)arg1;	// IMP=0x00000001000897b0
- (id)objectAtIndexPath:(id)arg1;	// IMP=0x00000001000896a4
- (_Bool)hasEpisodesInTheFeed;	// IMP=0x0000000100089628
- (_Bool)hasEpisodesToBeDeleted;	// IMP=0x000000010008958c
- (_Bool)hasUnplayedEpisodes;	// IMP=0x0000000100089424
- (_Bool)hasOnlyToBeDeletedItems;	// IMP=0x00000001000893d8
- (_Bool)hasEmptySection;	// IMP=0x0000000100089394
- (_Bool)hasItems;	// IMP=0x0000000100089224
- (void)_updateTableAnimated;	// IMP=0x0000000100089220
- (void)refetchWithPredicate:(id)arg1 sortDescriptors:(id)arg2 animated:(_Bool)arg3;	// IMP=0x000000010008921c
- (void)initializeFrc;	// IMP=0x0000000100089218
- (id)frc;	// IMP=0x0000000100089210
- (id)sections;	// IMP=0x00000001000891bc
- (void)switchToTab:(unsigned long long)arg1;	// IMP=0x0000000100089148
- (unsigned long long)selectedTab;	// IMP=0x00000001000890fc
- (void)playEpisodeAtIndexPath:(id)arg1;	// IMP=0x0000000100088fa4
- (void)reloadData;	// IMP=0x0000000100088e68
- (id)initWithPodcastUUID:(id)arg1;	// IMP=0x0000000100088d60

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

