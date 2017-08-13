//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TSKViewController.h"

#import "TSKSettingItemEditingController.h"

@class NSString, TSKSettingItem;

@interface TVSettingsSigningProfileViewController : TSKViewController <TSKSettingItemEditingController>
{
    TSKSettingItem *_editingItem;	// 8 = 0x8
    id <TSKSettingItemEditingControllerDelegate> _editingDelegate;	// 16 = 0x10
}

@property(nonatomic) __weak id <TSKSettingItemEditingControllerDelegate> editingDelegate; // @synthesize editingDelegate=_editingDelegate;
@property(retain, nonatomic) TSKSettingItem *editingItem; // @synthesize editingItem=_editingItem;
- (void).cxx_destruct;	// IMP=0x000000010003f000
- (void)_postErrorDialog:(id)arg1;	// IMP=0x000000010003ec88
- (void)_removeSignedApps;	// IMP=0x000000010003eafc
- (void)_verifyAndTrust:(_Bool)arg1;	// IMP=0x000000010003e964
- (id)_appSigner;	// IMP=0x000000010003e910
- (void)deleteApps:(id)arg1;	// IMP=0x000000010003e328
- (void)verifyApps:(id)arg1;	// IMP=0x000000010003ddac
- (void)trustProfile:(id)arg1;	// IMP=0x000000010003d8d4
- (id)loadSettingGroups;	// IMP=0x000000010003cd80
- (void)dealloc;	// IMP=0x000000010003cd04
- (id)initWithStyle:(long long)arg1;	// IMP=0x000000010003cc10

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

