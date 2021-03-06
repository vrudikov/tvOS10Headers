/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:16 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/AccountsUI.framework/AccountsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>
#import <libobjc.A.dylib/ACUISetupViewControllerDelegate.h>

@class NSString;

@interface ACUIAddOtherAccountsViewController : PSListController <ACUISetupViewControllerDelegate> {

	NSString* _filteredDataclass;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)specifiers;
-(void)setSpecifier:(id)arg1 ;
-(void)setupViewControllerDidDismiss:(id)arg1 ;
-(id)_specifiersForOtherMailAccounts;
-(id)_specifiersForOtherContactsAccounts;
-(id)_specifiersForOtherCalendarAccounts;
-(id)_specifiersForOtherServerAccounts;
-(id)_viewProvidersManager;
@end

