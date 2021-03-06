/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:04:39 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <UIKit/UIButton.h>

@class UIColor, UIImage;

@interface CNTransportButton : UIButton {

	BOOL _showBackgroundPlatter;
	long long _transportType;
	UIColor* _glyphColor;
	UIImage* _image;

}

@property (nonatomic,retain) UIImage * image;                         //@synthesize image=_image - In the implementation block
@property (assign,nonatomic) long long transportType;                 //@synthesize transportType=_transportType - In the implementation block
@property (assign,nonatomic) BOOL showBackgroundPlatter;              //@synthesize showBackgroundPlatter=_showBackgroundPlatter - In the implementation block
@property (nonatomic,retain) UIColor * glyphColor;                    //@synthesize glyphColor=_glyphColor - In the implementation block
+(id)transportButton;
+(id)transportButtonWithType:(long long)arg1 ;
-(void)setImage:(UIImage *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIImage *)image;
-(void)tintColorDidChange;
-(CGSize)intrinsicContentSize;
-(long long)transportType;
-(void)setTransportType:(long long)arg1 ;
-(void)setShowBackgroundPlatter:(BOOL)arg1 ;
-(BOOL)showBackgroundPlatter;
-(id)imageNameForType:(long long)arg1 ;
-(void)_updateImageWithType:(long long)arg1 ;
-(void)setGlyphColor:(UIColor *)arg1 ;
-(UIColor *)glyphColor;
@end

