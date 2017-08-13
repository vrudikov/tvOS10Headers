//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TVMusicLibraryCollectionViewController.h"

#import "TVDataQueryViewControllerDelegate.h"

@class NSString;

@interface TVMusicLibraryVideosViewController : TVMusicLibraryCollectionViewController <TVDataQueryViewControllerDelegate>
{
}

- (void)_handlePlayPause:(id)arg1;	// IMP=0x000000010002ea48
- (struct CGSize)artworkSize;	// IMP=0x000000010002ea34
- (struct CGSize)cellSize;	// IMP=0x000000010002ea20
- (struct CGPoint)cellSpacing;	// IMP=0x000000010002ea0c
- (id)cellForItemAtIndexPath:(id)arg1;	// IMP=0x000000010002e8d4
- (void)collectionView:(id)arg1 didReceiveLongPressForItemAtIndexPath:(id)arg2;	// IMP=0x000000010002e85c
- (_Bool)collectionView:(id)arg1 shouldHandleLongPressForItemAtIndexPath:(id)arg2;	// IMP=0x000000010002e854
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x000000010002e7b4
- (void)viewDidLoad;	// IMP=0x000000010002e660
- (id)init;	// IMP=0x000000010002e5c4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

