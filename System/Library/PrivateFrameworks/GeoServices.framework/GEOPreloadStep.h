/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:14 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@class GEOTileKeyList;

@interface GEOPreloadStep : NSObject {

	SCD_Struct_GE26 coord;
	double routeIdx;
	GEOTileKeyList* wantedTiles;
	double startTime;
	double endTime;
	unsigned bytesLoaded;
	unsigned bytesLoadedFromNetwork;
	unsigned generation;
	unsigned hasError : 1;
	unsigned hasLifetimeError : 1;
	unsigned nearManeuver : 1;
	unsigned loading : 1;
	unsigned loaded : 1;
	unsigned preempted : 1;

}
-(void)dealloc;
-(BOOL)okToLoad;
-(void)resetErrors;
-(double)dataRateKB;
-(double)networkDataRateKB;
@end

