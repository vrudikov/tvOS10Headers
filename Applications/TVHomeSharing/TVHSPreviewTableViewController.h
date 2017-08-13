//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TVPreviewTableViewController.h"

#import "TVHSContentItemDataSource.h"

@class NSArray, NSString, UILabel;

@interface TVHSPreviewTableViewController : TVPreviewTableViewController <TVHSContentItemDataSource>
{
    _Bool _allowRepeat;	// 8 = 0x8
    NSArray *_contentItems;	// 16 = 0x10
    unsigned long long _playbackMode;	// 24 = 0x18
    UILabel *_headerLabel;	// 32 = 0x20
    id _focusedContentItem;	// 40 = 0x28
}

@property(retain, nonatomic) id focusedContentItem; // @synthesize focusedContentItem=_focusedContentItem;
@property(retain, nonatomic) UILabel *headerLabel; // @synthesize headerLabel=_headerLabel;
@property(nonatomic) _Bool allowRepeat; // @synthesize allowRepeat=_allowRepeat;
@property(nonatomic) unsigned long long playbackMode; // @synthesize playbackMode=_playbackMode;
@property(copy, nonatomic) NSArray *contentItems; // @synthesize contentItems=_contentItems;
- (void).cxx_destruct;	// IMP=0x000000010002e744
- (void)_reloadData;	// IMP=0x000000010002e658
- (id)_previewViewControllerForIndexPath:(id)arg1;	// IMP=0x000000010002e5b4
- (id)_previewViewControllerForContentItem:(id)arg1;	// IMP=0x000000010002e484
- (void)tableView:(id)arg1 didReceiveLongPressForItemAtIndexPath:(id)arg2;	// IMP=0x000000010002e1c4
- (_Bool)tableView:(id)arg1 shouldHandleLongPressForItemAtIndexPath:(id)arg2;	// IMP=0x000000010002e118
- (void)tableView:(id)arg1 didReceivePhysicalPlayForItemAtIndexPath:(id)arg2;	// IMP=0x000000010002de68
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;	// IMP=0x000000010002de58
- (id)indexPathForPreferredFocusedItemForTableView:(id)arg1;	// IMP=0x000000010002dd14
- (void)tableView:(id)arg1 didUpdateFocusInContext:(id)arg2 withAnimationCoordinator:(id)arg3;	// IMP=0x000000010002dbcc
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x000000010002db7c
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x000000010002db30
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000010002da28
- (void)viewDidLoad;	// IMP=0x000000010002d8f4
@property(copy, nonatomic) NSString *headerTitle;
- (id)initWithStyle:(long long)arg1;	// IMP=0x000000010002d638

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
