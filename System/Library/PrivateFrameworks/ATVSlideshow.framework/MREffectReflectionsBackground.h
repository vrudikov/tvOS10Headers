/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:06:36 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVSlideshow/ATVSlideshow-Structs.h>
#import <ATVSlideshow/MREffect.h>

@class MRImageProvider;

@interface MREffectReflectionsBackground : MREffect {

	MRImageProvider* mGradientProvider;
	CGRect mColor;

}
-(void)_cleanup;
-(void)setAttributes:(id)arg1 ;
-(id)initWithEffectID:(id)arg1 ;
-(void)setPixelSize:(CGSize)arg1 ;
-(BOOL)isLoadedForTime:(double)arg1 ;
-(void)_unload;
-(void)renderAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(BOOL)prerenderForTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(void)beginMorphingToAspectRatio:(double)arg1 withDuration:(double)arg2 ;
-(void)endMorphing;
@end
