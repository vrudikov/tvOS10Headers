//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegateFlowLayout.h"
#import "UICollectionViewDelegate_Private.h"

@class NSArray, NSString, UIViewController;

@interface GKCollectionDataSource : NSObject <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, UICollectionViewDelegate_Private>
{
    _Bool _onDarkBackground;	// 8 = 0x8
    _Bool _useStandardHeaders;	// 9 = 0x9
    UIViewController *_presentationViewController;	// 16 = 0x10
    NSString *_searchText;	// 24 = 0x18
    NSArray *_searchTerms;	// 32 = 0x20
}

@property(retain, nonatomic) NSArray *searchTerms; // @synthesize searchTerms=_searchTerms;
@property(copy, nonatomic) NSString *searchText; // @synthesize searchText=_searchText;
@property(nonatomic) _Bool useStandardHeaders; // @synthesize useStandardHeaders=_useStandardHeaders;
@property(nonatomic) _Bool onDarkBackground; // @synthesize onDarkBackground=_onDarkBackground;
@property(nonatomic) UIViewController *presentationViewController; // @synthesize presentationViewController=_presentationViewController;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;	// IMP=0x0000000100007c34
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x0000000100007c30
- (void)collectionView:(id)arg1 didUpdateFocusInContext:(id)arg2 withAnimationCoordinator:(id)arg3;	// IMP=0x0000000100007bf8
- (void)collectionView:(id)arg1 didFocusItemAtIndexPath:(id)arg2;	// IMP=0x0000000100007b84
- (void)collectionView:(id)arg1 didUnfocusItemAtIndexPath:(id)arg2;	// IMP=0x0000000100007b10
- (_Bool)collectionView:(id)arg1 canFocusItemAtIndexPath:(id)arg2;	// IMP=0x0000000100007b08
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;	// IMP=0x0000000100007a78
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x00000001000078d8
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x0000000100007800
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x00000001000077f4
- (long long)numberOfSectionsInCollectionView:(id)arg1;	// IMP=0x00000001000077ec
- (void)searchTextHasChanged;	// IMP=0x00000001000077e8
- (id)searchKeyForSection:(long long)arg1;	// IMP=0x00000001000077e0
- (_Bool)searchMatchesItem:(id)arg1 inSection:(long long)arg2;	// IMP=0x00000001000074d0
@property(readonly, nonatomic) _Bool isSearching; // @dynamic isSearching;
- (void)dismissViewController:(id)arg1;	// IMP=0x0000000100007328
- (void)showViewController:(id)arg1 popoverSourceView:(id)arg2;	// IMP=0x00000001000072f4
- (id)itemForIndexPath:(id)arg1;	// IMP=0x00000001000072ec
- (id)headerTextForSection:(long long)arg1;	// IMP=0x00000001000072e0
@property(readonly, nonatomic) NSString *sectionHeaderText; // @dynamic sectionHeaderText;
@property(readonly, nonatomic) double preferredCollectionHeight; // @dynamic preferredCollectionHeight;
@property(readonly, nonatomic) long long itemCount; // @dynamic itemCount;
- (void)loadDataWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001000072ac
- (void)setupCollectionView:(id)arg1;	// IMP=0x000000010000721c
- (void)dealloc;	// IMP=0x00000001000071a8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
