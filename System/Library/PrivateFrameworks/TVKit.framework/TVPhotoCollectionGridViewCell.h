/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:06:44 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/TVKit.framework/TVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVKit/TVKit-Structs.h>
#import <TVKit/TVPhotoCell.h>

@class TVAnimatedLabel, UIImageView, NSLayoutConstraint, NSString, UIImage;

@interface TVPhotoCollectionGridViewCell : TVPhotoCell {

	BOOL _shouldTitleExpand;
	BOOL _shouldTitleAnimate;
	TVAnimatedLabel* _titleLabel;
	UIImageView* _badgeImageView;
	double _unfocusedMargin;
	double _focusedMargin;
	NSLayoutConstraint* _titleLeftConstraint;
	NSLayoutConstraint* _titleTopConstraint;
	NSLayoutConstraint* _titleRightConstraint;
	NSLayoutConstraint* _badgeImageLeftConstraint;

}

@property (nonatomic,retain) TVAnimatedLabel * titleLabel;                               //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UIImageView * badgeImageView;                               //@synthesize badgeImageView=_badgeImageView - In the implementation block
@property (assign,nonatomic) BOOL shouldTitleExpand;                                     //@synthesize shouldTitleExpand=_shouldTitleExpand - In the implementation block
@property (assign,nonatomic) BOOL shouldTitleAnimate;                                    //@synthesize shouldTitleAnimate=_shouldTitleAnimate - In the implementation block
@property (assign,nonatomic) double unfocusedMargin;                                     //@synthesize unfocusedMargin=_unfocusedMargin - In the implementation block
@property (assign,nonatomic) double focusedMargin;                                       //@synthesize focusedMargin=_focusedMargin - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * titleLeftConstraint;                   //@synthesize titleLeftConstraint=_titleLeftConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * titleTopConstraint;                    //@synthesize titleTopConstraint=_titleTopConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * titleRightConstraint;                  //@synthesize titleRightConstraint=_titleRightConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * badgeImageLeftConstraint;              //@synthesize badgeImageLeftConstraint=_badgeImageLeftConstraint - In the implementation block
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,retain) UIImage * badgeImage; 
@property (nonatomic,readonly) CGSize imageSize; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(NSString *)title;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(CGSize)imageSize;
-(TVAnimatedLabel *)titleLabel;
-(void)prepareForReuse;
-(void)setTitleLabel:(TVAnimatedLabel *)arg1 ;
-(double)cellCornerRadius;
-(UIImageView *)badgeImageView;
-(void)setBadgeImageView:(UIImageView *)arg1 ;
-(void)_updateLayoutProperties;
-(double)_focusedGrowthMagnitude;
-(BOOL)shouldTitleAnimate;
-(UIImage *)badgeImage;
-(void)setBadgeImage:(UIImage *)arg1 ;
-(BOOL)shouldTitleExpand;
-(void)setShouldTitleExpand:(BOOL)arg1 ;
-(void)setShouldTitleAnimate:(BOOL)arg1 ;
-(double)unfocusedMargin;
-(void)setUnfocusedMargin:(double)arg1 ;
-(double)focusedMargin;
-(void)setFocusedMargin:(double)arg1 ;
-(NSLayoutConstraint *)titleLeftConstraint;
-(void)setTitleLeftConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)titleTopConstraint;
-(void)setTitleTopConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)titleRightConstraint;
-(void)setTitleRightConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)badgeImageLeftConstraint;
-(void)setBadgeImageLeftConstraint:(NSLayoutConstraint *)arg1 ;
@end
