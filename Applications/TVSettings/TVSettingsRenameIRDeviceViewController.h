//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TSKTextInputViewController.h"

#import "TSKSettingItemEditingControllerDelegate.h"

@class NSString, NSUUID, TVSExternalControlSystem;

@interface TVSettingsRenameIRDeviceViewController : TSKTextInputViewController <TSKSettingItemEditingControllerDelegate>
{
    TVSExternalControlSystem *_externalControlSystem;	// 8 = 0x8
    NSUUID *_deviceUUID;	// 16 = 0x10
    CDUnknownBlockType _completionHandler;	// 24 = 0x18
}

@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(retain, nonatomic) NSUUID *deviceUUID; // @synthesize deviceUUID=_deviceUUID;
@property(retain, nonatomic) TVSExternalControlSystem *externalControlSystem; // @synthesize externalControlSystem=_externalControlSystem;
- (void).cxx_destruct;	// IMP=0x0000000100036bf0
- (void)editingController:(id)arg1 didCancelForSettingItem:(id)arg2;	// IMP=0x0000000100036ac0
- (void)editingController:(id)arg1 didProvideValue:(id)arg2 forSettingItem:(id)arg3;	// IMP=0x0000000100036830
- (void)viewDidLoad;	// IMP=0x0000000100036594
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0000000100036508

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

