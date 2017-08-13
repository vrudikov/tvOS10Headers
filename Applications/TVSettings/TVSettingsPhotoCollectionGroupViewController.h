//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TSKViewController.h"

#import "TVSettingsPhotoCollectionViewControllerSelectionDelegate.h"

@class NSString, TVPhotoCollectionGroup, TVSettingsPhotoCollectionPreviewViewController, UIVisualEffectView;

@interface TVSettingsPhotoCollectionGroupViewController : TSKViewController <TVSettingsPhotoCollectionViewControllerSelectionDelegate>
{
    UIVisualEffectView *_backdropView;	// 8 = 0x8
    id <TVSettingsPhotoCollectionGroupViewControllerDelegate> _delegate;	// 16 = 0x10
    TVPhotoCollectionGroup *_photoCollectionGroup;	// 24 = 0x18
    TVSettingsPhotoCollectionPreviewViewController *_photoPreviewController;	// 32 = 0x20
}

@property(retain, nonatomic) TVSettingsPhotoCollectionPreviewViewController *photoPreviewController; // @synthesize photoPreviewController=_photoPreviewController;
@property(retain, nonatomic) TVPhotoCollectionGroup *photoCollectionGroup; // @synthesize photoCollectionGroup=_photoCollectionGroup;
@property(nonatomic) __weak id <TVSettingsPhotoCollectionGroupViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;	// IMP=0x000000010008f0e0
- (void)_updatePhotoCollectionWithIndexPath:(id)arg1;	// IMP=0x000000010008ef04
- (id)_localizedTitleForPhotoCollection:(id)arg1;	// IMP=0x000000010008edb8
- (void)controller:(id)arg1 didSelectAsset:(id)arg2;	// IMP=0x000000010008ecbc
- (_Bool)hasFullscreenPreview;	// IMP=0x000000010008ecb4
- (id)previewForItemAtIndexPath:(id)arg1;	// IMP=0x000000010008ec80
- (id)title;	// IMP=0x000000010008ec78
- (id)loadSettingGroups;	// IMP=0x000000010008e8e8
- (void)viewDidLoad;	// IMP=0x000000010008e5bc
- (id)initWithPhotoCollectionGroup:(id)arg1;	// IMP=0x000000010008e4bc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

