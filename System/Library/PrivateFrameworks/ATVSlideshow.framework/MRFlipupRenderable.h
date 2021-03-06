/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:06:38 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVSlideshow/ATVSlideshow-Structs.h>
#import <ATVSlideshow/MUPoolObject.h>

@class MRImage, MRCroppingSprite;

@interface MRFlipupRenderable : MUPoolObject {

	double zPosition;
	BOOL needsBlend;
	BOOL isBreak;
	float modelViewMatrix[16];
	double color;
	double opacity;
	MRImage* slide;
	MRCroppingSprite* sprite;
	CGPoint position;
	CGSize size;
	float flippedModelViewMatrix[16];
	MRCroppingSprite* reflectionSprite;
	CGPoint reflectionPosition;

}

@property (nonatomic,retain) MRImage * slide; 
@property (nonatomic,retain) MRCroppingSprite * sprite; 
@property (nonatomic,retain) MRCroppingSprite * reflectionSprite; 
+(SCD_Struct_MR15*)poolInfo;
-(void)dealloc;
-(void)setSlide:(MRImage *)arg1 ;
-(MRImage *)slide;
-(MRCroppingSprite *)sprite;
-(void)setSprite:(MRCroppingSprite *)arg1 ;
-(MRCroppingSprite *)reflectionSprite;
-(void)setReflectionSprite:(MRCroppingSprite *)arg1 ;
-(void)purge;
@end

