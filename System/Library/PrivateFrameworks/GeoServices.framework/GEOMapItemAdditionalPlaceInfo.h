/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:31 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@class GEOPlace, NSString, GEOMapRegion;

@interface GEOMapItemAdditionalPlaceInfo : NSObject {

	GEOPlace* _place;

}

@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) int placeType; 
@property (nonatomic,readonly) double areaInMeters; 
@property (nonatomic,readonly) SCD_Struct_GE26 coordinate; 
@property (nonatomic,readonly) GEOMapRegion * mapRegion; 
-(void)dealloc;
-(NSString *)name;
-(GEOMapRegion *)mapRegion;
-(SCD_Struct_GE26)coordinate;
-(id)initWithPlace:(id)arg1 ;
-(int)placeType;
-(id)initWithName:(id)arg1 placeType:(int)arg2 areaInMeters:(double)arg3 ;
-(double)areaInMeters;
@end
