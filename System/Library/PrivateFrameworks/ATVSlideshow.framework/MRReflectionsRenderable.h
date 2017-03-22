/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:06:36 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVSlideshow/ATVSlideshow-Structs.h>
#import <ATVSlideshow/MUPoolObject.h>

@class MRImage, MRCroppingSprite;

@interface MRReflectionsRenderable : MUPoolObject {

	MRImage* _slide;
	MRCroppingSprite* _sprite;
	float _modelViewMatrix[16];
	CGPoint position;
	CGSize size;
	BOOL isShadow;
	MRReflectionsRenderable* next;
	BOOL needsFlipped;
	BOOL isBreak;

}
+(SCD_Struct_MR15*)poolInfo;
-(void)dealloc;
-(id)initWithSlide:(id)arg1 sprite:(id)arg2 modelViewMatrix:(const float*)arg3 position:(CGPoint)arg4 size:(CGSize)arg5 flipped:(BOOL)arg6 isShadow:(BOOL)arg7 isBreak:(BOOL)arg8 ;
-(void)purge;
@end
