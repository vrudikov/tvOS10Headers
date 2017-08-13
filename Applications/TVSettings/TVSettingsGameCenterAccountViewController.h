//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TSKViewController.h"

#import "AKAppleIDAuthenticationInAppContextDelegate.h"
#import "UIGestureRecognizerDelegate.h"

@class NSString, UITapGestureRecognizer;

@interface TVSettingsGameCenterAccountViewController : TSKViewController <AKAppleIDAuthenticationInAppContextDelegate, UIGestureRecognizerDelegate>
{
    _Bool _authenticationInProgress;	// 8 = 0x8
    UITapGestureRecognizer *_menuGestureRecognizer;	// 16 = 0x10
    _Bool _signOutInProgress;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000100011210
- (void)contextDidDismissLoginAlertController:(id)arg1;	// IMP=0x000000010001120c
- (void)contextWillDismissLoginAlertController:(id)arg1;	// IMP=0x0000000100011208
- (void)contextDidPresentLoginAlertController:(id)arg1;	// IMP=0x00000001000111d0
- (void)_updateSignInItem:(id)arg1 value:(id)arg2;	// IMP=0x0000000100010e0c
- (void)_presentError:(id)arg1;	// IMP=0x0000000100010b5c
- (void)_signOut:(id)arg1;	// IMP=0x0000000100010800
- (void)_resetAuthenticationInProgressState;	// IMP=0x00000001000106e8
- (void)_signIn:(id)arg1;	// IMP=0x000000010000fec8
@property(getter=isAuthenticationInProgress) _Bool authenticationInProgress;
- (id)loadSettingGroups;	// IMP=0x000000010000f4a8
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;	// IMP=0x000000010000f440
- (id)initWithStyle:(long long)arg1;	// IMP=0x000000010000f2b8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
