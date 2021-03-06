/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:11 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@class NSArray;

@interface GEOPlaceDailyHours : NSObject {

	NSRange _dayOfWeekRange;
	NSArray* _openIntervals;

}

@property (readonly) NSRange dayOfWeekRange;               //@synthesize dayOfWeekRange=_dayOfWeekRange - In the implementation block
@property (readonly) NSArray * openIntervals;              //@synthesize openIntervals=_openIntervals - In the implementation block
+(id)dailyHours:(id)arg1 forDays:(NSRange)arg2 ;
-(void)dealloc;
-(id)description;
-(NSRange)dayOfWeekRange;
-(NSArray *)openIntervals;
@end

