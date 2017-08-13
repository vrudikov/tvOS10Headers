//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GKCollectionDataSource.h"

@class GKGameRecord, NSArray;

@interface GKAchievementDataSource : GKCollectionDataSource
{
    GKGameRecord *_gameRecord;	// 8 = 0x8
    NSArray *_achievements;	// 16 = 0x10
    NSArray *_localAchievements;	// 24 = 0x18
    struct UIEdgeInsets _collectionLayoutInsets;	// 32 = 0x20
}

@property(nonatomic) struct UIEdgeInsets collectionLayoutInsets; // @synthesize collectionLayoutInsets=_collectionLayoutInsets;
@property(retain, nonatomic) NSArray *localAchievements; // @synthesize localAchievements=_localAchievements;
@property(retain, nonatomic) NSArray *achievements; // @synthesize achievements=_achievements;
@property(retain, nonatomic) GKGameRecord *gameRecord; // @synthesize gameRecord=_gameRecord;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x000000010003a974
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;	// IMP=0x000000010003a940
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;	// IMP=0x000000010003a934
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;	// IMP=0x000000010003a928
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;	// IMP=0x000000010003a8a4
- (id)heightMultipliersForSizeCategories;	// IMP=0x000000010003a864
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x000000010003a608
- (id)itemForIndexPath:(id)arg1;	// IMP=0x000000010003a568
- (double)preferredCollectionHeight;	// IMP=0x000000010003a4c4
- (id)sectionHeaderText;	// IMP=0x000000010003a3b4
- (long long)itemCount;	// IMP=0x000000010003a39c
- (void)loadDataWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010003a054
- (void)setupCollectionView:(id)arg1;	// IMP=0x0000000100039ecc
- (void)dealloc;	// IMP=0x0000000100039e44
- (id)initWithGameRecord:(id)arg1;	// IMP=0x0000000100039dd0

@end

