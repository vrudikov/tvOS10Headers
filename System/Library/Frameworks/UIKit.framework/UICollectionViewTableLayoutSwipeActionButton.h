/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:02:34 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIButton.h>

@class UIColor;

@interface UICollectionViewTableLayoutSwipeActionButton : UIButton {

	double _buttonWidth;
	UIColor* _defaultBackgroundColor;
	UIColor* _highlightedBackgroundColor;

}

@property (nonatomic,retain) UIColor * defaultBackgroundColor;                  //@synthesize defaultBackgroundColor=_defaultBackgroundColor - In the implementation block
@property (nonatomic,retain) UIColor * highlightedBackgroundColor;              //@synthesize highlightedBackgroundColor=_highlightedBackgroundColor - In the implementation block
@property (nonatomic,readonly) double buttonWidth; 
+(id)titleFont;
-(void)setTitle:(id)arg1 forState:(unsigned long long)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg1 ;
-(double)buttonWidth;
-(void)setDefaultBackgroundColor:(UIColor *)arg1 ;
-(void)setHighlightedBackgroundColor:(UIColor *)arg1 ;
-(CGRect)_allowableContentRectForContentRect:(CGRect)arg1 ;
-(unsigned long long)_defaultLayoutForHeight:(double)arg1 ;
-(long long)_numberOfLinesForTitle:(id)arg1 ;
-(BOOL)_heightDemandsCompactLayout;
-(UIColor *)defaultBackgroundColor;
-(UIColor *)highlightedBackgroundColor;
@end

