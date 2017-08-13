//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "TVCollectionViewDelegate.h"
#import "TVSDataClientResultsControllerDelegate.h"
#import "UICollectionViewDataSource.h"

@class NSArray, NSString, TVCollectionView, TVImageView, TVLabel, TVSDataClientResultsController, TVSDataCollection, UIControl;

@interface TVMusicLibraryPlaylistDetailViewController : UIViewController <TVSDataClientResultsControllerDelegate, TVCollectionViewDelegate, UICollectionViewDataSource>
{
    TVLabel *_playlistTitleLabel;	// 8 = 0x8
    TVLabel *_infoLabel;	// 16 = 0x10
    TVCollectionView *_collectionView;	// 24 = 0x18
    TVImageView *_artworkImageView;	// 32 = 0x20
    UIControl *_shuffleButton;	// 40 = 0x28
    UIControl *_moreButton;	// 48 = 0x30
    NSArray *_actionButtons;	// 56 = 0x38
    TVSDataCollection *_playlist;	// 64 = 0x40
    NSArray *_tracks;	// 72 = 0x48
    TVSDataClientResultsController *_dataResultsController;	// 80 = 0x50
}

@property(retain, nonatomic) TVSDataClientResultsController *dataResultsController; // @synthesize dataResultsController=_dataResultsController;
@property(retain, nonatomic) NSArray *tracks; // @synthesize tracks=_tracks;
@property(retain, nonatomic) TVSDataCollection *playlist; // @synthesize playlist=_playlist;
- (void).cxx_destruct;	// IMP=0x000000010001a5e4
- (id)_songCellPlaceholderImage;	// IMP=0x000000010001a49c
- (id)_artworkPlaceholderImage;	// IMP=0x000000010001a304
- (void)_selectedMoreButton;	// IMP=0x0000000100019fc8
- (void)_selectedShuffleButton;	// IMP=0x0000000100019f68
- (void)_playFocusedSong;	// IMP=0x0000000100019f0c
- (void)_startMusicPlaybackAtIndexPath:(id)arg1 shuffle:(_Bool)arg2;	// IMP=0x0000000100019dd8
- (id)_songAtIndexPath:(id)arg1;	// IMP=0x0000000100019cd4
- (void)_setPositionForView:(id)arg1 topLeft:(struct CGPoint)arg2;	// IMP=0x0000000100019c64
- (id)_addLabelWithFont:(id)arg1 text:(id)arg2;	// IMP=0x0000000100019b14
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x0000000100019734
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x00000001000196e8
- (void)collectionView:(id)arg1 didReceiveLongPressForItemAtIndexPath:(id)arg2;	// IMP=0x0000000100019638
- (_Bool)collectionView:(id)arg1 shouldHandleLongPressForItemAtIndexPath:(id)arg2;	// IMP=0x0000000100019630
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x0000000100019580
- (void)controller:(id)arg1 didChangeResultsForQuery:(id)arg2;	// IMP=0x0000000100019518
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000100019438
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000100019214
- (void)viewWillLayoutSubviews;	// IMP=0x0000000100018e0c
- (void)didReceiveMemoryWarning;	// IMP=0x0000000100018dd8
- (void)viewDidLoad;	// IMP=0x0000000100018504
- (id)initWithPlaylist:(id)arg1;	// IMP=0x000000010001818c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

