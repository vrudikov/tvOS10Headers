/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:02:04 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@interface UIApplicationRotationFollowingController : UIViewController {

	BOOL _sizesWindowToScene;

}

@property (assign,nonatomic) BOOL sizesWindowToScene;              //@synthesize sizesWindowToScene=_sizesWindowToScene - In the implementation block
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)shouldAutorotate;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(long long)_preferredInterfaceOrientationGivenCurrentOrientation:(long long)arg1 ;
-(void)window:(id)arg1 setupWithInterfaceOrientation:(long long)arg2 ;
-(BOOL)sizesWindowToScene;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(void)setSizesWindowToScene:(BOOL)arg1 ;
@end
