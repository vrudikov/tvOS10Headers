//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TVMusicLibraryCollectionViewController.h"

#import "TVSDataClientResultsControllerDelegate.h"

@class NSArray, NSString, TVSDataClientResultsController, TVSDataCollection, UIControl, UIFocusGuide, UIView;

@interface TVMusicLibraryArtistDetailViewController : TVMusicLibraryCollectionViewController <TVSDataClientResultsControllerDelegate>
{
    TVSDataCollection *_artist;	// 8 = 0x8
    UIControl *_shuffleAllButton;	// 16 = 0x10
    UIControl *_goToArtistButton;	// 24 = 0x18
    TVSDataClientResultsController *_songsResultsController;	// 32 = 0x20
    long long _artistStoreID;	// 40 = 0x28
    NSArray *_topButtons;	// 48 = 0x30
    UIFocusGuide *_buttonsFocusGuide;	// 56 = 0x38
    UIView *_previouslyFocusedCell;	// 64 = 0x40
}

@property(retain, nonatomic) UIView *previouslyFocusedCell; // @synthesize previouslyFocusedCell=_previouslyFocusedCell;
@property(retain, nonatomic) UIFocusGuide *buttonsFocusGuide; // @synthesize buttonsFocusGuide=_buttonsFocusGuide;
@property(retain, nonatomic) NSArray *topButtons; // @synthesize topButtons=_topButtons;
@property(nonatomic) long long artistStoreID; // @synthesize artistStoreID=_artistStoreID;
@property(retain, nonatomic) TVSDataClientResultsController *songsResultsController; // @synthesize songsResultsController=_songsResultsController;
@property(retain, nonatomic) UIControl *goToArtistButton; // @synthesize goToArtistButton=_goToArtistButton;
@property(retain, nonatomic) UIControl *shuffleAllButton; // @synthesize shuffleAllButton=_shuffleAllButton;
@property(retain, nonatomic) TVSDataCollection *artist; // @synthesize artist=_artist;
- (void).cxx_destruct;	// IMP=0x000000010001e50c
- (void)_playSongs:(id)arg1;	// IMP=0x000000010001e2d8
- (void)_selectedGoToArtist;	// IMP=0x000000010001e234
- (void)_selectedShuffle;	// IMP=0x000000010001df6c
- (id)placeholderImage;	// IMP=0x000000010001defc
- (id)cellForItemAtIndexPath:(id)arg1;	// IMP=0x000000010001db6c
- (void)collectionView:(id)arg1 didReceiveLongPressForItemAtIndexPath:(id)arg2;	// IMP=0x000000010001daf4
- (_Bool)collectionView:(id)arg1 shouldHandleLongPressForItemAtIndexPath:(id)arg2;	// IMP=0x000000010001daec
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x000000010001da3c
- (void)controller:(id)arg1 didChangeResultsForQuery:(id)arg2;	// IMP=0x000000010001d97c
- (void)_handlePlayPause:(id)arg1;	// IMP=0x000000010001d768
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x000000010001d558
- (void)viewWillLayoutSubviews;	// IMP=0x000000010001d0b0
- (void)viewDidLoad;	// IMP=0x000000010001cb88
- (void)didReceiveMemoryWarning;	// IMP=0x000000010001cb10
- (id)initWithArtist:(id)arg1;	// IMP=0x000000010001c7c0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

