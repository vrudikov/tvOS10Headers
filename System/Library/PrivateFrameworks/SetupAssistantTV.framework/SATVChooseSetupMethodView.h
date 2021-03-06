/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:08:40 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistantTV.framework/SetupAssistantTV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SetupAssistantTV/SetupAssistantTV-Structs.h>
#import <UIKit/UIView.h>

@protocol SATVChooseSetupMethodViewDelegate;
@class NSString, SATVHeaderView, SATVButton, UILabel, UIView;

@interface SATVChooseSetupMethodView : UIView {

	NSString* _automaticSetupFooterText;
	NSString* _manualSetupFooterText;
	id<SATVChooseSetupMethodViewDelegate> _delegate;
	SATVHeaderView* _headerView;
	SATVButton* _automaticSetupButton;
	SATVButton* _manualSetupButton;
	UILabel* _footerLabel;
	UIView* _lastPreferredFocusedButton;

}

@property (nonatomic,retain) SATVHeaderView * headerView;                                        //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,retain) SATVButton * automaticSetupButton;                                  //@synthesize automaticSetupButton=_automaticSetupButton - In the implementation block
@property (nonatomic,retain) SATVButton * manualSetupButton;                                     //@synthesize manualSetupButton=_manualSetupButton - In the implementation block
@property (nonatomic,retain) UILabel * footerLabel;                                              //@synthesize footerLabel=_footerLabel - In the implementation block
@property (nonatomic,retain) UIView * lastPreferredFocusedButton;                                //@synthesize lastPreferredFocusedButton=_lastPreferredFocusedButton - In the implementation block
@property (nonatomic,copy) NSString * titleText; 
@property (nonatomic,copy) NSString * subtitleText; 
@property (nonatomic,copy) NSString * automaticSetupButtonTitle; 
@property (nonatomic,copy) NSString * manualSetupButtonTitle; 
@property (nonatomic,copy) NSString * automaticSetupFooterText;                                  //@synthesize automaticSetupFooterText=_automaticSetupFooterText - In the implementation block
@property (nonatomic,copy) NSString * manualSetupFooterText;                                     //@synthesize manualSetupFooterText=_manualSetupFooterText - In the implementation block
@property (assign,nonatomic,__weak) id<SATVChooseSetupMethodViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<SATVChooseSetupMethodViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<SATVChooseSetupMethodViewDelegate>)delegate;
-(id)preferredFocusEnvironments;
-(BOOL)canBecomeFocused;
-(void)focusedViewDidChange;
-(SATVHeaderView *)headerView;
-(void)setHeaderView:(SATVHeaderView *)arg1 ;
-(void)setTitleText:(NSString *)arg1 ;
-(NSString *)titleText;
-(void)setAutomaticSetupButtonTitle:(NSString *)arg1 ;
-(void)setManualSetupButtonTitle:(NSString *)arg1 ;
-(void)setAutomaticSetupFooterText:(NSString *)arg1 ;
-(void)setManualSetupFooterText:(NSString *)arg1 ;
-(void)_automaticSetupButtonSelected;
-(void)_manualSetupButtonSelected;
-(CGSize)_computeFramesForBounds:(CGRect)arg1 forCalculationOnly:(BOOL)arg2 ;
-(SATVButton *)automaticSetupButton;
-(SATVButton *)manualSetupButton;
-(void)setLastPreferredFocusedButton:(UIView *)arg1 ;
-(void)_updateFooterText;
-(UIView *)lastPreferredFocusedButton;
-(NSString *)automaticSetupButtonTitle;
-(NSString *)manualSetupButtonTitle;
-(NSString *)automaticSetupFooterText;
-(NSString *)manualSetupFooterText;
-(void)setAutomaticSetupButton:(SATVButton *)arg1 ;
-(void)setManualSetupButton:(SATVButton *)arg1 ;
-(void)setFooterLabel:(UILabel *)arg1 ;
-(UILabel *)footerLabel;
-(void)setSubtitleText:(NSString *)arg1 ;
-(NSString *)subtitleText;
@end

