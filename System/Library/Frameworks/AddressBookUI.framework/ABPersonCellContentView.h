/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:04:46 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AddressBookUI/AddressBookUI-Structs.h>
#import <UIKit/UIView.h>

@protocol ABStyleProvider;
@class UILabel, UIImageView;

@interface ABPersonCellContentView : UIView {

	CGRect _labelViewRect;
	CGRect _valueViewRect;
	UILabel* _label;
	UIImageView* _badge;
	BOOL _editing;
	id<ABStyleProvider> _styleProvider;

}

@property (nonatomic,readonly) UILabel * label;                              //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) id<ABStyleProvider> styleProvider;              //@synthesize styleProvider=_styleProvider - In the implementation block
+(CGSize)layoutSubviewsForView:(id)arg1 usingSize:(CGSize)arg2 styleProvider:(id)arg3 whenEditing:(BOOL)arg4 ;
+(CGRect)firstValueFrameForValueViewFrame:(CGRect)arg1 styleProvider:(id)arg2 whenEditing:(BOOL)arg3 ;
+(void)computeLabelViewFrame:(CGRect*)arg1 valueViewFrame:(CGRect*)arg2 forSize:(CGSize)arg3 styleProvider:(id)arg4 whenEditing:(BOOL)arg5 ;
-(void)dealloc;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UILabel *)label;
-(void)setLabelText:(id)arg1 ;
-(id<ABStyleProvider>)styleProvider;
-(void)setStyleProvider:(id<ABStyleProvider>)arg1 ;
-(void)layoutLabel;
-(void)setBadgeIcon:(id)arg1 ;
-(CGRect)rectForView:(id)arg1 ;
-(CGRect)backgroundRectForView:(id)arg1 ;
-(double)labelBaselineAdjustment;
-(CGRect)frameForLabel;
-(CGRect)frameForBadge;
@end

