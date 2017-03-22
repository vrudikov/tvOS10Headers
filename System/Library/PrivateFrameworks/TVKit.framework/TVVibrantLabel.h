/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:06:41 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/TVKit.framework/TVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVKit/TVKit-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, NSString, NSAttributedString, UIFont;

@interface TVVibrantLabel : UIView {

	UILabel* _label;
	BOOL _adjustsFontSizeToFitWidth;
	NSString* _text;
	NSAttributedString* _attributedText;
	UIFont* _font;
	long long _textAlignment;
	long long _lineBreakMode;
	long long _numberOfLines;
	double _minimumScaleFactor;

}

@property (nonatomic,copy) NSString * text;                                  //@synthesize text=_text - In the implementation block
@property (nonatomic,copy) NSAttributedString * attributedText;              //@synthesize attributedText=_attributedText - In the implementation block
@property (nonatomic,retain) UIFont * font;                                  //@synthesize font=_font - In the implementation block
@property (assign,nonatomic) long long textAlignment;                        //@synthesize textAlignment=_textAlignment - In the implementation block
@property (assign,nonatomic) long long lineBreakMode;                        //@synthesize lineBreakMode=_lineBreakMode - In the implementation block
@property (assign,nonatomic) long long numberOfLines;                        //@synthesize numberOfLines=_numberOfLines - In the implementation block
@property (assign,nonatomic) BOOL adjustsFontSizeToFitWidth;                 //@synthesize adjustsFontSizeToFitWidth=_adjustsFontSizeToFitWidth - In the implementation block
@property (assign,nonatomic) double minimumScaleFactor;                      //@synthesize minimumScaleFactor=_minimumScaleFactor - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setNumberOfLines:(long long)arg1 ;
-(void)setTextAlignment:(long long)arg1 ;
-(void)setAttributedText:(NSAttributedString *)arg1 ;
-(void)setFont:(UIFont *)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)setLineBreakMode:(long long)arg1 ;
-(UIFont *)font;
-(NSAttributedString *)attributedText;
-(void)setAdjustsFontSizeToFitWidth:(BOOL)arg1 ;
-(BOOL)adjustsFontSizeToFitWidth;
-(void)setMinimumScaleFactor:(double)arg1 ;
-(long long)textAlignment;
-(long long)lineBreakMode;
-(double)minimumScaleFactor;
-(long long)numberOfLines;
-(id)initWithFrame:(CGRect)arg1 backdropViewStyle:(long long)arg2 ;
-(id)initWithFrame:(CGRect)arg1 blurEffectStyle:(long long)arg2 ;
@end
