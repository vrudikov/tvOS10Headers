//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TVHSPreviewTableViewController.h"

@class TVHSTVSeason;

@interface TVHSTVSeasonEpisodesViewController : TVHSPreviewTableViewController
{
    TVHSTVSeason *_season;	// 8 = 0x8
}

@property(retain, nonatomic) TVHSTVSeason *season; // @synthesize season=_season;
- (void).cxx_destruct;	// IMP=0x0000000100027bc8
- (id)_previewViewControllerForContentItem:(id)arg1;	// IMP=0x0000000100027ba4
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x0000000100027a68
- (void)viewDidLoad;	// IMP=0x00000001000279d4

@end

