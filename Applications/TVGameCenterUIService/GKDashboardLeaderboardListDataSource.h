//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GKCollectionDataSource.h"

@class GKGameRecord, GKLeaderboardSet, NSArray, NSDictionary;

@interface GKDashboardLeaderboardListDataSource : GKCollectionDataSource
{
    NSDictionary *_assetNames;	// 8 = 0x8
    GKGameRecord *_gameRecord;	// 16 = 0x10
    GKLeaderboardSet *_leaderboardSet;	// 24 = 0x18
    NSArray *_leaderboards;	// 32 = 0x20
}

@property(retain, nonatomic) NSArray *leaderboards; // @synthesize leaderboards=_leaderboards;
@property(retain, nonatomic) GKLeaderboardSet *leaderboardSet; // @synthesize leaderboardSet=_leaderboardSet;
@property(retain, nonatomic) GKGameRecord *gameRecord; // @synthesize gameRecord=_gameRecord;
@property(retain, nonatomic) NSDictionary *assetNames; // @synthesize assetNames=_assetNames;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x0000000100023634
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;	// IMP=0x0000000100023600
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;	// IMP=0x00000001000235ec
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x000000010002340c
- (id)sectionHeaderText;	// IMP=0x00000001000232fc
- (id)itemForIndexPath:(id)arg1;	// IMP=0x000000010002325c
- (double)preferredCollectionHeight;	// IMP=0x0000000100023250
- (long long)itemCount;	// IMP=0x0000000100023238
- (void)removeLeaderboardsWithoutImages;	// IMP=0x0000000100023094
- (void)loadDataWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100022a7c
- (void)setupCollectionView:(id)arg1;	// IMP=0x0000000100022930
- (void)dealloc;	// IMP=0x0000000100022894
- (id)initWithGameRecord:(id)arg1 leaderboardSet:(id)arg2;	// IMP=0x0000000100022800

@end
