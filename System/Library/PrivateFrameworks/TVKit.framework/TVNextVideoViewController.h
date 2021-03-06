/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:06:44 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/TVKit.framework/TVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@protocol TVNextVideoViewControllerDelegate;
@class NSNumber, NSURL, NSString, TVSImagePromise, UILabel, UIButton, UIView, NSLayoutConstraint;

@interface TVNextVideoViewController : UIViewController {

	NSNumber* _durationUntilPlaybackWillAdvance;
	id<TVNextVideoViewControllerDelegate> _delegate;
	NSURL* _nextItemImageURL;
	NSString* _nextItemTitle;
	NSString* _nextItemDescription;
	TVSImagePromise* _imagePromise;
	UILabel* _countdownLabel;
	UIButton* _button;
	UILabel* _titleLabel;
	UIView* _dividerView;
	UILabel* _descriptionLabel;
	NSLayoutConstraint* _buttonHeightConstraint;

}

@property (nonatomic,retain) TVSImagePromise * imagePromise;                                     //@synthesize imagePromise=_imagePromise - In the implementation block
@property (nonatomic,retain) UILabel * countdownLabel;                                           //@synthesize countdownLabel=_countdownLabel - In the implementation block
@property (nonatomic,retain) UIButton * button;                                                  //@synthesize button=_button - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                               //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UIView * dividerView;                                               //@synthesize dividerView=_dividerView - In the implementation block
@property (nonatomic,retain) UILabel * descriptionLabel;                                         //@synthesize descriptionLabel=_descriptionLabel - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * buttonHeightConstraint;                        //@synthesize buttonHeightConstraint=_buttonHeightConstraint - In the implementation block
@property (nonatomic,copy) NSNumber * durationUntilPlaybackWillAdvance;                          //@synthesize durationUntilPlaybackWillAdvance=_durationUntilPlaybackWillAdvance - In the implementation block
@property (assign,nonatomic,__weak) id<TVNextVideoViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSURL * nextItemImageURL;                                             //@synthesize nextItemImageURL=_nextItemImageURL - In the implementation block
@property (nonatomic,copy) NSString * nextItemTitle;                                             //@synthesize nextItemTitle=_nextItemTitle - In the implementation block
@property (nonatomic,copy) NSString * nextItemDescription;                                       //@synthesize nextItemDescription=_nextItemDescription - In the implementation block
-(UIButton *)button;
-(void)setDelegate:(id<TVNextVideoViewControllerDelegate>)arg1 ;
-(id<TVNextVideoViewControllerDelegate>)delegate;
-(id)preferredFocusEnvironments;
-(void)viewWillAppear:(BOOL)arg1 ;
-(UILabel *)titleLabel;
-(void)viewDidLoad;
-(void)setButton:(UIButton *)arg1 ;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(NSLayoutConstraint *)buttonHeightConstraint;
-(id)_buttonHeightLayoutConstraintWithAspectRatio:(double)arg1 ;
-(void)setButtonHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(void)_setButtonAspectRatio:(double)arg1 ;
-(void)setImagePromise:(TVSImagePromise *)arg1 ;
-(TVSImagePromise *)imagePromise;
-(void)setCountdownLabel:(UILabel *)arg1 ;
-(void)_buttonPressed:(id)arg1 ;
-(NSString *)nextItemTitle;
-(void)setDividerView:(UIView *)arg1 ;
-(NSString *)nextItemDescription;
-(void)loadImageWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setNextItemImageURL:(NSURL *)arg1 ;
-(void)setNextItemTitle:(NSString *)arg1 ;
-(void)setNextItemDescription:(NSString *)arg1 ;
-(NSNumber *)durationUntilPlaybackWillAdvance;
-(void)setDurationUntilPlaybackWillAdvance:(NSNumber *)arg1 ;
-(NSURL *)nextItemImageURL;
-(UILabel *)countdownLabel;
-(UIView *)dividerView;
-(UILabel *)descriptionLabel;
-(void)setDescriptionLabel:(UILabel *)arg1 ;
@end

