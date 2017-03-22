/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:02:37 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/_UIViewModel.h>

@class NSArray, NSMutableArray, UIView;

@interface _UIViewVisualState : NSObject <_UIViewModel> {

	NSMutableArray* _mSubviews;
	UIView* _mSuperview;
	id _stateData;
	UIView* _view;
	CGPoint _center;
	CGRect _bounds;

}

@property (assign,nonatomic) CGRect bounds;                                           //@synthesize bounds=_bounds - In the implementation block
@property (assign,nonatomic) CGPoint center;                                          //@synthesize center=_center - In the implementation block
@property (assign,nonatomic) CGRect frame; 
@property (nonatomic,readonly) NSArray * subviews; 
@property (nonatomic,__weak,readonly) _UIViewVisualState * superview; 
@property (nonatomic,retain) NSMutableArray * mSubviews;                              //@synthesize mSubviews=_mSubviews - In the implementation block
@property (assign,nonatomic,__weak) UIView * mSuperview;                              //@synthesize mSuperview=_mSuperview - In the implementation block
@property (nonatomic,retain) id stateData;                                            //@synthesize stateData=_stateData - In the implementation block
@property (assign,nonatomic,__weak) UIView * view;                                    //@synthesize view=_view - In the implementation block
@property (nonatomic,readonly) id<_UIViewPresentation> viewPresentation; 
-(CGRect)bounds;
-(void)setFrame:(CGRect)arg1 ;
-(void)addSubview:(id)arg1 ;
-(CGRect)frame;
-(void)setBounds:(CGRect)arg1 ;
-(id)description;
-(id)copy;
-(UIView *)view;
-(_UIViewVisualState *)superview;
-(NSArray *)subviews;
-(void)setView:(UIView *)arg1 ;
-(CGPoint)center;
-(void)setCenter:(CGPoint)arg1 ;
-(id)initWithView:(id)arg1 ;
-(id)stateData;
-(id<_UIViewPresentation>)viewPresentation;
-(NSMutableArray *)mSubviews;
-(void)setMSuperview:(UIView *)arg1 ;
-(void)setMSubviews:(NSMutableArray *)arg1 ;
-(void)setStateData:(id)arg1 ;
-(UIView *)mSuperview;
@end
