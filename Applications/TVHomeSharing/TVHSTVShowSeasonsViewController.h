//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TVHSPreviewTableViewController.h"

@class TVHSTVShow;

@interface TVHSTVShowSeasonsViewController : TVHSPreviewTableViewController
{
    TVHSTVShow *_show;	// 8 = 0x8
}

@property(retain, nonatomic) TVHSTVShow *show; // @synthesize show=_show;
- (void).cxx_destruct;	// IMP=0x00000001000257a0
- (id)_seasonAtIndexPath:(id)arg1;	// IMP=0x00000001000256c8
- (id)_episodesViewController;	// IMP=0x00000001000255a8
- (id)_previewViewControllerForContentItem:(id)arg1;	// IMP=0x0000000100025594
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x000000010002541c
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x0000000100025140
- (void)viewDidLoad;	// IMP=0x0000000100025048

@end

