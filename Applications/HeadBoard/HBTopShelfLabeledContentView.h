//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "TVCollectionViewDelegate.h"
#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegateFlowLayout.h"
#import "UICollectionViewDelegate_Private.h"

@class NSIndexPath, NSString, TVCollectionView;

@interface HBTopShelfLabeledContentView : UIView <TVCollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegate_Private, UICollectionViewDelegateFlowLayout>
{
    struct {
        unsigned int delegateDidFocusItemAtIndexPath:1;
        unsigned int delegateDidSelectItemAtIndexPath:1;
        unsigned int delegateDidPlayItemAtIndexPath:1;
        unsigned int dataSourceTitleForSection:1;
        unsigned int dataSourceConfigureLabelForSection:1;
        unsigned int dataSourceNumberOfSections:1;
        unsigned int dataSourceNumberOfItemsInSection:1;
        unsigned int dataSourcePreferredSizeOfItemAtIndexPath:1;
    } _flags;	// 8 = 0x8
    _Bool _shouldUpdateNormalizedHeight;	// 12 = 0xc
    id <HBTopShelfLabeledContentViewDelegate> _delegate;	// 16 = 0x10
    id <HBTopShelfLabeledContentViewDataSource> _dataSource;	// 24 = 0x18
    TVCollectionView *_collectionView;	// 32 = 0x20
    NSIndexPath *_preferredIndexPath;	// 40 = 0x28
    double _normalizedHeight;	// 48 = 0x30
}

@property(nonatomic) _Bool shouldUpdateNormalizedHeight; // @synthesize shouldUpdateNormalizedHeight=_shouldUpdateNormalizedHeight;
@property(nonatomic) double normalizedHeight; // @synthesize normalizedHeight=_normalizedHeight;
@property(retain, nonatomic) NSIndexPath *preferredIndexPath; // @synthesize preferredIndexPath=_preferredIndexPath;
@property(retain, nonatomic) TVCollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) __weak id <HBTopShelfLabeledContentViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <HBTopShelfLabeledContentViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;	// IMP=0x000000010001a364
- (double)_normalizedItemHeight;	// IMP=0x0000000100019c8c
- (long long)_numberOfItemsInSection:(long long)arg1;	// IMP=0x0000000100019c0c
- (long long)_numberOfSections;	// IMP=0x0000000100019b9c
- (void)collectionView:(id)arg1 didFocusItemAtIndexPath:(id)arg2;	// IMP=0x0000000100019aac
- (_Bool)collectionView:(id)arg1 canFocusItemAtIndexPath:(id)arg2;	// IMP=0x0000000100019aa4
- (void)collectionView:(id)arg1 didReceivePhysicalPlayForItemAtIndexPath:(id)arg2;	// IMP=0x0000000100019a14
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x0000000100019984
- (double)collectionView:(id)arg1 layout:(id)arg2 widthOfSectionHeaderAtIndexPath:(id)arg3;	// IMP=0x00000001000198a0
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;	// IMP=0x00000001000197e8
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x00000001000196e0
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x00000001000195f0
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x00000001000195e0
- (long long)numberOfSectionsInCollectionView:(id)arg1;	// IMP=0x00000001000195d4
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x0000000100019444
- (id)visibleViews;	// IMP=0x0000000100019334
- (void)preheatCellsInRect:(struct CGRect)arg1;	// IMP=0x00000001000192c4
- (void)reloadData;	// IMP=0x000000010001926c
- (id)dequeueReusableCellWithReuseIdentifier:(id)arg1 forIndexPath:(id)arg2;	// IMP=0x0000000100019204
- (void)registerClass:(Class)arg1 forCellWithReuseIdentifier:(id)arg2;	// IMP=0x00000001000191ec
- (struct CGSize)normalizedSizeWithPreferredSize:(struct CGSize)arg1;	// IMP=0x0000000100018f84
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100018c88

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

