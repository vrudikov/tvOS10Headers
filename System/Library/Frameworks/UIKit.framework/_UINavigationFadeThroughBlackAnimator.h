/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:02:39 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewControllerAnimatedTransitioning.h>

@class NSString;

@interface _UINavigationFadeThroughBlackAnimator : NSObject <UIViewControllerAnimatedTransitioning>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)transitionDuration:(id)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(BOOL)_shouldCrossFadeNavigationBar;
-(void)_beginFadeAnimationFromViewController:(id)arg1 toViewController:(id)arg2 containerView:(id)arg3 completion:(/*^block*/id)arg4 ;
@end

