//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TVHSDataQueryNavigationTableViewController.h"

#import "TVDataQueryViewControllerDelegate.h"
#import "TVSDataClientResultsControllerDataSource.h"

@class NSString, TVHSMoviesNavigationViewController;

@interface TVHSMoviesMainViewController : TVHSDataQueryNavigationTableViewController <TVDataQueryViewControllerDelegate, TVSDataClientResultsControllerDataSource>
{
    TVHSMoviesNavigationViewController *_moviesNavigationViewController;	// 8 = 0x8
}

@property(retain, nonatomic) TVHSMoviesNavigationViewController *moviesNavigationViewController; // @synthesize moviesNavigationViewController=_moviesNavigationViewController;
- (void).cxx_destruct;	// IMP=0x0000000100039450
- (id)_unwatchedMoviesFromMovies:(id)arg1;	// IMP=0x00000001000393f4
- (id)_movieGenreMapFromMovies:(id)arg1 outSortedMovieGenreNames:(id *)arg2;	// IMP=0x0000000100038fb0
- (id)queryForController:(id)arg1;	// IMP=0x0000000100038f9c
- (unsigned long long)dataQueryViewController:(id)arg1 didChangeResultsForQuery:(id)arg2;	// IMP=0x0000000100038b24
- (id)initWithDataClient:(id)arg1 moviesNavigationViewController:(id)arg2 loadingMessage:(id)arg3 noResultsErrorMessage:(id)arg4;	// IMP=0x00000001000389b0
- (id)initWithDataClient:(id)arg1;	// IMP=0x0000000100038848

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
