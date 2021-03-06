/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:02:02 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIFoundation/UIPointFIFO.h>

@class _UIPointVector;

@interface UIBoxcarFilterPointFIFO : UIPointFIFO {

	unsigned long long _width;
	float _spacing;
	_UIPointVector* _prevPoints;

}

@property (assign,nonatomic) unsigned long long width;                 //@synthesize width=_width - In the implementation block
@property (assign,nonatomic) float spacing;                            //@synthesize spacing=_spacing - In the implementation block
@property (assign,nonatomic) _UIPointVector * prevPoints;              //@synthesize prevPoints=_prevPoints - In the implementation block
-(id)initWithFIFO:(id)arg1 width:(unsigned long long)arg2 spacing:(float)arg3 ;
-(void)dealloc;
-(void)flush;
-(unsigned long long)width;
-(void)addPoint:;
-(void)setWidth:(unsigned long long)arg1 ;
-(void)clear;
-(void)setSpacing:(float)arg1 ;
-(float)spacing;
-(id)initWithFIFO:(id)arg1 width:(unsigned long long)arg2 ;
-(void)setPrevPoints:(_UIPointVector *)arg1 ;
-(_UIPointVector *)prevPoints;
-(void)emitAveragedPoint;
@end

