/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:28 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@class GEOComposedRouteStep;

@interface _GEORouteMatchingSegment : NSObject {

	unsigned _startPointIndex;
	SCD_Struct_GE26 _startCoordinate;
	SCD_Struct_GE26 _endCoordinate;
	GEOComposedRouteStep* _step;

}

@property (assign,nonatomic) unsigned startPointIndex;                     //@synthesize startPointIndex=_startPointIndex - In the implementation block
@property (assign,nonatomic) SCD_Struct_GE26 startCoordinate;              //@synthesize startCoordinate=_startCoordinate - In the implementation block
@property (assign,nonatomic) SCD_Struct_GE26 endCoordinate;                //@synthesize endCoordinate=_endCoordinate - In the implementation block
@property (nonatomic,retain) GEOComposedRouteStep * step;                  //@synthesize step=_step - In the implementation block
-(void)dealloc;
-(id)description;
-(GEOComposedRouteStep *)step;
-(unsigned)startPointIndex;
-(double)distanceFromCoordinate:(SCD_Struct_GE26)arg1 outCoordinateOnSegment:(SCD_Struct_GE26*)arg2 outRouteCoordinate:(PolylineCoordinate*)arg3 ;
-(void)setStartPointIndex:(unsigned)arg1 ;
-(SCD_Struct_GE26)startCoordinate;
-(void)setStartCoordinate:(SCD_Struct_GE26)arg1 ;
-(SCD_Struct_GE26)endCoordinate;
-(void)setEndCoordinate:(SCD_Struct_GE26)arg1 ;
-(void)setStep:(GEOComposedRouteStep *)arg1 ;
@end
