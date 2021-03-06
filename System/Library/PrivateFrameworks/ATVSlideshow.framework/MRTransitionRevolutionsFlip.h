/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:06:39 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVSlideshow/MRTransition.h>

@class NSMutableArray, MRImage;

@interface MRTransitionRevolutionsFlip : MRTransition {

	unsigned _numberOfTilesX;
	unsigned _numberOfTilesY;
	unsigned char _direction;
	NSMutableArray* _cubes;
	NSMutableArray* _cubeColumns;
	NSMutableArray* _cubeRows;
	int _flipDirection;
	long long _horizontalCubeCount;
	long long _verticalCubeCount;
	MRImage* _sourceImage;
	MRImage* _destinationImage;
	double _viewBaseWidth;
	double _viewBaseHeight;

}
-(void)setAttributes:(id)arg1 ;
-(void)cleanup;
-(id)initWithTransitionID:(id)arg1 ;
-(void)renderAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(void)releaseByTransitioner:(id)arg1 ;
-(void)setFlipDirection:(int)arg1 ;
-(void)setupCubesWithLocalAspectRatio:(float)arg1 ;
@end

