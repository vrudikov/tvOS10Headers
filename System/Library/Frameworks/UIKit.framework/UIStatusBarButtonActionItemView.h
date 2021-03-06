/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:02:46 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIStatusBarItemView.h>

@class UIButton, CALayer;

@interface UIStatusBarButtonActionItemView : UIStatusBarItemView {

	UIButton* _button;
	UIButton* _externalButton;
	BOOL _selected;
	CALayer* _ringLayer;

}

@property (assign,nonatomic) BOOL selected;                              //@synthesize selected=_selected - In the implementation block
@property (nonatomic,retain) CALayer * ringLayer;                        //@synthesize ringLayer=_ringLayer - In the implementation block
@property (nonatomic,readonly) BOOL extendsHitTestingFrame; 
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(void)pressesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(BOOL)canBecomeFocused;
-(long long)buttonType;
-(void)setSelected:(BOOL)arg1 ;
-(id)highlightImage;
-(BOOL)usesAdvancedActions;
-(BOOL)selected;
-(double)updateContentsAndWidth;
-(void)_pressButton:(id)arg1 ;
-(BOOL)extendsHitTestingFrame;
-(void)_doubleTapButton:(id)arg1 ;
-(void)_pressAndHoldButton:(id)arg1 ;
-(id)_createButton;
-(void)setLayerHighlightImage:(id)arg1 ;
-(CALayer *)ringLayer;
-(void)setRingLayer:(CALayer *)arg1 ;
-(void)_triggerButtonWithAction:(long long)arg1 ;
-(CGRect)_contentsImageFrame;
@end

