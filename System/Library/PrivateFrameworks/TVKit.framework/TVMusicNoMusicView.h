/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:06:43 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/TVKit.framework/TVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVKit/TVKit-Structs.h>
#import <UIKit/UIView.h>

@class NSString, UIView, UILabel;

@interface TVMusicNoMusicView : UIView {

	NSString* _message;
	UIView* _containerView;
	UILabel* _titleLabel;
	UILabel* _messageLabel;

}

@property (nonatomic,retain) UIView * containerView;              //@synthesize containerView=_containerView - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * messageLabel;              //@synthesize messageLabel=_messageLabel - In the implementation block
@property (nonatomic,retain) NSString * message;                  //@synthesize message=_message - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg1 ;
-(UIView *)containerView;
-(void)setContainerView:(UIView *)arg1 ;
-(UILabel *)titleLabel;
-(void)setMessage:(NSString *)arg1 ;
-(NSString *)message;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)_updateColorsForUserInterfaceStyle:(long long)arg1 ;
-(UILabel *)messageLabel;
-(void)setMessageLabel:(UILabel *)arg1 ;
-(void)_configureUIControls;
@end

