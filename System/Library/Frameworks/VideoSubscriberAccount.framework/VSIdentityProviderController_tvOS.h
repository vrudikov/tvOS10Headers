/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:12 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoSubscriberAccount/VSIdentityProviderController.h>

@class VSModalPresentationViewController;

@interface VSIdentityProviderController_tvOS : VSIdentityProviderController {

	VSModalPresentationViewController* _presentationViewController;

}

@property (nonatomic,retain) VSModalPresentationViewController * presentationViewController;              //@synthesize presentationViewController=_presentationViewController - In the implementation block
-(VSModalPresentationViewController *)presentationViewController;
-(void)_hideViewController;
-(void)_showViewController:(id)arg1 currentlyShowingViewController:(BOOL)arg2 ;
-(void)setPresentationViewController:(VSModalPresentationViewController *)arg1 ;
@end
