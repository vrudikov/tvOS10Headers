//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TVDataQueryViewController.h"

@interface TVMusicLibraryViewController : TVDataQueryViewController
{
}

+ (id)_albumsViewControllerWithResultsController:(id)arg1 title:(id)arg2;	// IMP=0x00000001000892cc
+ (id)songsViewControllerWithDataClient:(id)arg1;	// IMP=0x000000010008920c
+ (id)recentlyAddedViewControllerWithDataClient:(id)arg1;	// IMP=0x000000010008911c
+ (id)playlistsViewControllerWithDataClient:(id)arg1 parentPlaylist:(id)arg2;	// IMP=0x0000000100088fa0
+ (id)musicVideosViewControllerWithDataClient:(id)arg1;	// IMP=0x0000000100088efc
+ (id)composersViewControllerWithDataClient:(id)arg1;	// IMP=0x0000000100088e28
+ (id)genresViewControllerWithDataClient:(id)arg1;	// IMP=0x0000000100088d54
+ (id)compilationsViewControllerWithDataClient:(id)arg1;	// IMP=0x0000000100088c84
+ (id)artistsViewControllerWithDataClient:(id)arg1;	// IMP=0x0000000100088be0
+ (id)albumsViewControllerForComposer:(id)arg1;	// IMP=0x0000000100088b3c
+ (id)albumsViewControllerForArtist:(id)arg1;	// IMP=0x0000000100088994
+ (id)albumsViewControllerForGenre:(id)arg1;	// IMP=0x00000001000888cc
+ (id)albumsViewControllerWithDataClient:(id)arg1;	// IMP=0x0000000100088834
- (void)didReceiveMemoryWarning;	// IMP=0x00000001000373e8
- (void)viewDidLoad;	// IMP=0x00000001000373b4
- (id)initWithDataClientResultsController:(id)arg1 resultsViewController:(id)arg2;	// IMP=0x0000000100037304

@end

