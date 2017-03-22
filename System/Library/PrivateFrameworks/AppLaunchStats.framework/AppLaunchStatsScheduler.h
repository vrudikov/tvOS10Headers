/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:14 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/AppLaunchStats.framework/AppLaunchStats
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppLaunchStats/AppLaunchStats-Structs.h>
#import <libobjc.A.dylib/DuetLoggerProtocol.h>
#import <libobjc.A.dylib/DuetSaveAndRestore.h>

@class AppLaunchStatsState, NSDate, NSRunLoop, CDAttribute, PCPersistentTimer;

@interface AppLaunchStatsScheduler : NSObject <DuetLoggerProtocol, DuetSaveAndRestore> {

	BOOL usefulDate;
	/*^block*/id theCallback;
	AppLaunchStatsState* aplsState;
	long long timeZoneSecondsFromGMT;
	NSDate* fireWakeupDate;
	NSDate* startDate;
	NSRunLoop* aplsRunloop;
	CDAttribute* screenUnlockAttribute;
	PCPersistentTimer* pcpTimer;

}
-(void)timerFired:(id)arg1 ;
-(void)save:(id)arg1 ;
-(void)logAll:(asl_object_sRef)arg1 withMsg:(asl_object_sRef)arg2 withLevel:(int)arg3 ;
-(void)logLight:(asl_object_sRef)arg1 withMsg:(asl_object_sRef)arg2 withLevel:(int)arg3 ;
-(void)restore:(id)arg1 ;
-(id)computeUserWakeupDate;
-(void)checkTimeZone;
-(void)programTimer;
-(id)init:(id)arg1 withRunLoop:(id)arg2 withCallback:(/*^block*/id)arg3 ;
-(void)generateFireDates;
@end
