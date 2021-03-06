//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TVPPhotoLibraryFeedCollectionViewController.h"

#import "TVPPhotoLibraryOneUpViewControllerDelegate.h"

@class NSString;

@interface TVPSharedPSActivityViewController : TVPPhotoLibraryFeedCollectionViewController <TVPPhotoLibraryOneUpViewControllerDelegate>
{
    long long _selectedItemIndex;	// 8 = 0x8
}

@property(nonatomic) long long selectedItemIndex; // @synthesize selectedItemIndex=_selectedItemIndex;
- (void)_updateFeedInfoAndUI;	// IMP=0x000000010003e7b0
- (void)_cacheFeedInfoIfRequired;	// IMP=0x000000010003e6c0
- (id)_feedCollection;	// IMP=0x000000010003e618
- (id)_photoStreamHeaderSubtitle;	// IMP=0x000000010003e4a4
- (id)_photoStreamHeaderTitle;	// IMP=0x000000010003e434
- (void)_onSelectSlideshowButton:(id)arg1;	// IMP=0x000000010003e38c
- (void)_onSelectScreenSaverButton:(id)arg1;	// IMP=0x000000010003e258
- (void)photoLibraryOneUpControllerWillPop:(id)arg1;	// IMP=0x000000010003e158
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x000000010003dea8
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x000000010003d92c
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x000000010003d4d8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

