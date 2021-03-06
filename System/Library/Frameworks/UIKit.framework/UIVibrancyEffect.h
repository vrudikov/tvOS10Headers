/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:02:15 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIVisualEffect.h>

@interface UIVibrancyEffect : UIVisualEffect {

	long long _blurStyle;
	BOOL _invertAutomaticStyle;

}
+(BOOL)supportsSecureCoding;
+(id)effectForBlurEffect:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)effectConfigForQuality:(long long)arg1 ;
-(id)effectForUserInterfaceStyle:(long long)arg1 ;
-(BOOL)_isATVStyle;
-(BOOL)_isAutomaticStyle;
-(id)effectConfig;
-(id)_reduceTransparencyEffectConfig;
-(id)_lowQualityEffectConfig;
-(id)_highQualityEffectConfig;
-(long long)_blurStyle;
@end

