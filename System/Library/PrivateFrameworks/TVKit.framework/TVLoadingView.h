/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:06:45 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/TVKit.framework/TVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVKit/TVKit-Structs.h>
#import <UIKit/UIView.h>

@class UIView, UIWindow, UIImageView, UIVisualEffectView, UIActivityIndicatorView;

@interface TVLoadingView : UIView {

	UIView* _wallpaperView;
	long long _style;
	UIWindow* _overlayWindow;
	BOOL _hiding;
	double _timeout;
	double _delay;
	UIImageView* _maskView;
	UIVisualEffectView* _visualEffectView;
	UIActivityIndicatorView* _spinner;

}

@property (nonatomic,retain) UIActivityIndicatorView * spinner;              //@synthesize spinner=_spinner - In the implementation block
+(id)loadingScreen;
-(void)hide;
-(BOOL)isVisible;
-(UIActivityIndicatorView *)spinner;
-(void)setSpinner:(UIActivityIndicatorView *)arg1 ;
-(void)timeout;
-(void)setTimeout:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 style:(long long)arg2 templateImage:(id)arg3 ;
-(void)setLoadingDelay:(double)arg1 ;
-(void)showOverKeyWindow;
-(double)hideAnimationDuration;
@end
