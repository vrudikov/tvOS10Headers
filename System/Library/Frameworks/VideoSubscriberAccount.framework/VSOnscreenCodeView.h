/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:13 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoSubscriberAccount/VideoSubscriberAccount-Structs.h>
#import <UIKit/UIView.h>

@protocol VSOnscreenCodeViewDelegate;
@class NSString, UIStackView, UIImageView, UILabel, UIButton, UIImage;

@interface VSOnscreenCodeView : UIView {

	BOOL _shouldShowRegenerateCodeButton;
	id<VSOnscreenCodeViewDelegate> _delegate;
	NSString* _logoAccessibilityLabel;
	NSString* _webPagePreamble;
	NSString* _webPageLocation;
	NSString* _webPagePostamble;
	UIStackView* _stackWrapper;
	UIImageView* _logoView;
	UILabel* _webPageLocationLabel;
	UILabel* _codeDigitLabel;
	UIButton* _regenerateCodeButton;
	UILabel* _footerLabel;

}

@property (nonatomic,retain) UIStackView * stackWrapper;                                  //@synthesize stackWrapper=_stackWrapper - In the implementation block
@property (nonatomic,retain) UIImageView * logoView;                                      //@synthesize logoView=_logoView - In the implementation block
@property (nonatomic,retain) UILabel * webPageLocationLabel;                              //@synthesize webPageLocationLabel=_webPageLocationLabel - In the implementation block
@property (nonatomic,retain) UILabel * codeDigitLabel;                                    //@synthesize codeDigitLabel=_codeDigitLabel - In the implementation block
@property (nonatomic,retain) UIButton * regenerateCodeButton;                             //@synthesize regenerateCodeButton=_regenerateCodeButton - In the implementation block
@property (nonatomic,retain) UILabel * footerLabel;                                       //@synthesize footerLabel=_footerLabel - In the implementation block
@property (assign,nonatomic,__weak) id<VSOnscreenCodeViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIImage * logo; 
@property (nonatomic,copy) NSString * logoAccessibilityLabel;                             //@synthesize logoAccessibilityLabel=_logoAccessibilityLabel - In the implementation block
@property (nonatomic,readonly) CGSize preferredImageSize; 
@property (nonatomic,copy) NSString * webPagePreamble;                                    //@synthesize webPagePreamble=_webPagePreamble - In the implementation block
@property (nonatomic,copy) NSString * webPageLocation;                                    //@synthesize webPageLocation=_webPageLocation - In the implementation block
@property (nonatomic,copy) NSString * webPagePostamble;                                   //@synthesize webPagePostamble=_webPagePostamble - In the implementation block
@property (nonatomic,copy) NSString * onscreenCode; 
@property (assign,nonatomic) BOOL shouldShowRegenerateCodeButton;                         //@synthesize shouldShowRegenerateCodeButton=_shouldShowRegenerateCodeButton - In the implementation block
@property (nonatomic,copy) NSString * regenerateCodeButtonTitle; 
@property (nonatomic,copy) NSString * footerText; 
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setDelegate:(id<VSOnscreenCodeViewDelegate>)arg1 ;
-(id<VSOnscreenCodeViewDelegate>)delegate;
-(UIImage *)logo;
-(void)setLogo:(UIImage *)arg1 ;
-(void)setLogoView:(UIImageView *)arg1 ;
-(UIImageView *)logoView;
-(NSString *)footerText;
-(void)setFooterText:(NSString *)arg1 ;
-(CGSize)preferredImageSize;
-(void)setFooterLabel:(UILabel *)arg1 ;
-(UILabel *)footerLabel;
-(NSString *)logoAccessibilityLabel;
-(void)setLogoAccessibilityLabel:(NSString *)arg1 ;
-(void)setWebPagePreamble:(NSString *)arg1 ;
-(void)setWebPagePostamble:(NSString *)arg1 ;
-(void)setOnscreenCode:(NSString *)arg1 ;
-(void)setRegenerateCodeButtonTitle:(NSString *)arg1 ;
-(void)setShouldShowRegenerateCodeButton:(BOOL)arg1 ;
-(NSString *)webPagePreamble;
-(NSString *)webPagePostamble;
-(NSString *)onscreenCode;
-(BOOL)shouldShowRegenerateCodeButton;
-(NSString *)regenerateCodeButtonTitle;
-(void)setWebPageLocation:(NSString *)arg1 ;
-(NSString *)webPageLocation;
-(UILabel *)webPageLocationLabel;
-(void)_updateWebPageLocation;
-(void)_setNeedsUpdateWebPageLocation;
-(UILabel *)codeDigitLabel;
-(UIButton *)regenerateCodeButton;
-(void)_didPressRegenerateCodeButton:(id)arg1 ;
-(UIStackView *)stackWrapper;
-(void)setStackWrapper:(UIStackView *)arg1 ;
-(void)setWebPageLocationLabel:(UILabel *)arg1 ;
-(void)setCodeDigitLabel:(UILabel *)arg1 ;
-(void)setRegenerateCodeButton:(UIButton *)arg1 ;
@end
