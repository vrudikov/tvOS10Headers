//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GKDashboardCollectionViewController.h"

@class NSArray;

@interface GKDashboardMultiCollectionViewController : GKDashboardCollectionViewController
{
    NSArray *_dataSources;	// 8 = 0x8
}

@property(retain, nonatomic) NSArray *dataSources; // @synthesize dataSources=_dataSources;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;	// IMP=0x000000010002f9ec
- (void)collectionView:(id)arg1 didUnfocusItemAtIndexPath:(id)arg2;	// IMP=0x000000010002f98c
- (void)collectionView:(id)arg1 didFocusItemAtIndexPath:(id)arg2;	// IMP=0x000000010002f92c
- (_Bool)collectionView:(id)arg1 canFocusItemAtIndexPath:(id)arg2;	// IMP=0x000000010002f8cc
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x000000010002f774
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x000000010002f754
- (long long)numberOfSectionsInCollectionView:(id)arg1;	// IMP=0x000000010002f73c
- (void)dataUpdated:(_Bool)arg1 withError:(id)arg2;	// IMP=0x000000010002f5d4
- (_Bool)sectionHasData:(long long)arg1;	// IMP=0x000000010002f5a4
- (_Bool)hasData;	// IMP=0x000000010002f484
- (void)loadData;	// IMP=0x000000010002efc4
- (void)clearSelection;	// IMP=0x000000010002ee88
- (void)viewDidLoad;	// IMP=0x000000010002ecd8
- (id)cellIdentifierForSection:(long long)arg1;	// IMP=0x000000010002eca4
- (id)dataSourceForSection:(long long)arg1;	// IMP=0x000000010002eb84
- (void)dealloc;	// IMP=0x000000010002eb28

@end

