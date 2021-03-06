//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "TVCollectionViewDelegate.h"
#import "TVDataQueryViewControllerDelegate.h"
#import "TVMusicCollectionViewDataSource.h"
#import "TVSDataClientResultsControllerDelegate.h"
#import "UIGestureRecognizerDelegate.h"

@class NSArray, NSIndexPath, NSMutableDictionary, NSString, TVLabel, TVMusicCollectionView, UIControl, UIView;

@interface TVMusicLibrarySongsViewController : UIViewController <TVCollectionViewDelegate, TVMusicCollectionViewDataSource, TVSDataClientResultsControllerDelegate, UIGestureRecognizerDelegate, TVDataQueryViewControllerDelegate>
{
    TVMusicCollectionView *_collectionView;	// 8 = 0x8
    NSArray *_results;	// 16 = 0x10
    TVLabel *_titleLabel;	// 24 = 0x18
    UIControl *_shuffleAllButton;	// 32 = 0x20
    UIView *_headerView;	// 40 = 0x28
    NSMutableDictionary *_sectionMap;	// 48 = 0x30
    NSMutableDictionary *_indexSectionMap;	// 56 = 0x38
    NSIndexPath *_focusToIndexPath;	// 64 = 0x40
}

@property(retain, nonatomic) NSIndexPath *focusToIndexPath; // @synthesize focusToIndexPath=_focusToIndexPath;
@property(retain, nonatomic) NSMutableDictionary *indexSectionMap; // @synthesize indexSectionMap=_indexSectionMap;
@property(retain, nonatomic) NSMutableDictionary *sectionMap; // @synthesize sectionMap=_sectionMap;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) UIControl *shuffleAllButton; // @synthesize shuffleAllButton=_shuffleAllButton;
@property(retain, nonatomic) TVLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) NSArray *results; // @synthesize results=_results;
@property(retain, nonatomic) TVMusicCollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void).cxx_destruct;	// IMP=0x00000001000760a4
- (void)_playSongAtIndexPath:(id)arg1;	// IMP=0x0000000100075d44
- (id)_placeholderImage;	// IMP=0x0000000100075cd4
- (id)_songAtIndexPath:(id)arg1;	// IMP=0x0000000100075b64
- (void)_rebuildIndexSections;	// IMP=0x00000001000753e0
- (void)_selectedShuffleButton;	// IMP=0x0000000100075388
- (unsigned long long)dataQueryViewController:(id)arg1 didChangeResultsForQuery:(id)arg2;	// IMP=0x00000001000752b8
- (long long)collectionView:(id)arg1 indexBarIndexForSection:(long long)arg2;	// IMP=0x0000000100075140
- (long long)collectionView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;	// IMP=0x0000000100074f14
- (id)sectionIndexTitlesForCollectionView:(id)arg1;	// IMP=0x0000000100074f00
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x0000000100074b04
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x0000000100074a68
- (long long)numberOfSectionsInCollectionView:(id)arg1;	// IMP=0x0000000100074a1c
- (void)collectionView:(id)arg1 didUpdateFocusInContext:(id)arg2 withAnimationCoordinator:(id)arg3;	// IMP=0x0000000100074970
- (id)indexPathForPreferredFocusedViewInCollectionView:(id)arg1;	// IMP=0x0000000100074960
- (void)collectionViewNeedsFocusUpdate:(id)arg1;	// IMP=0x0000000100074954
- (void)collectionView:(id)arg1 didReceiveLongPressForItemAtIndexPath:(id)arg2;	// IMP=0x00000001000748dc
- (_Bool)collectionView:(id)arg1 shouldHandleLongPressForItemAtIndexPath:(id)arg2;	// IMP=0x00000001000748d4
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x00000001000747c0
- (id)preferredFocusEnvironments;	// IMP=0x0000000100074728
- (void)didMoveToParentViewController:(id)arg1;	// IMP=0x000000010007471c
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000001000745b8
- (void)viewWillLayoutSubviews;	// IMP=0x0000000100074358
- (void)_handlePlayPause:(id)arg1;	// IMP=0x0000000100074180
- (void)viewDidLoad;	// IMP=0x0000000100073fd0
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0000000100073b4c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

