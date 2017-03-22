/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:27 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@class MPMoviePlayerController;

@interface MPMoviePlayerViewController : UIViewController {

	id _internal;
	BOOL _statusBarWasHidden;

}

@property (nonatomic,readonly) MPMoviePlayerController * moviePlayer; 
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(long long)preferredWhitePointAdaptivityStyle;
-(BOOL)prefersStatusBarHidden;
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)shouldAutorotate;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(BOOL)canBecomeFirstResponder;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(BOOL)_canReloadView;
-(BOOL)_shouldUseFullScreenLayoutInWindow:(id)arg1 parentViewController:(id)arg2 ;
-(void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)didRotateFromInterfaceOrientation:(long long)arg1 ;
-(void)remoteControlReceivedWithEvent:(id)arg1 ;
-(id)initWithAsset:(id)arg1 ;
-(id)initWithContentURL:(id)arg1 ;
-(void)_moviePlayerViewController_applicationDidEnterBackgroundNotification:(id)arg1 ;
-(MPMoviePlayerController *)moviePlayer;
-(void)_moviePlayerViewController_playbackDidFinishNotification:(id)arg1 ;
@end
