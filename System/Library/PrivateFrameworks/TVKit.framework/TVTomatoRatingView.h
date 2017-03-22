/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:06:44 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/TVKit.framework/TVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVKit/TVKit-Structs.h>
#import <UIKit/UIView.h>

@class UIImageView, TVHighlightingLabel, UIColor, UIFont;

@interface TVTomatoRatingView : UIView {

	UIImageView* _tomatoRatingIcon;
	TVHighlightingLabel* _tomatoRatingLabel;
	float _tomatoRating;
	long long _freshness;
	double _ratingBaseAlpha;
	UIColor* _textColor;
	UIFont* _textFont;

}

@property (assign,nonatomic) float tomatoRating;                  //@synthesize tomatoRating=_tomatoRating - In the implementation block
@property (assign,nonatomic) long long freshness;                 //@synthesize freshness=_freshness - In the implementation block
@property (assign,nonatomic) double ratingBaseAlpha;              //@synthesize ratingBaseAlpha=_ratingBaseAlpha - In the implementation block
@property (nonatomic,retain) UIColor * textColor;                 //@synthesize textColor=_textColor - In the implementation block
@property (nonatomic,retain) UIFont * textFont;                   //@synthesize textFont=_textFont - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setTextColor:(UIColor *)arg1 ;
-(UIColor *)textColor;
-(UIFont *)textFont;
-(void)setHighlightProgress:(double)arg1 ;
-(void)setTextFont:(UIFont *)arg1 ;
-(void)setRatingBaseAlpha:(double)arg1 ;
-(void)setFreshness:(long long)arg1 ;
-(void)setTomatoRating:(float)arg1 ;
-(float)tomatoRating;
-(long long)freshness;
-(double)ratingBaseAlpha;
@end
