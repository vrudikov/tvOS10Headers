/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:23 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreMediaStream/MSASModelBase.h>

@interface MSPerformanceLogger : MSASModelBase
+(id)sharedLogger;
+(void)nukeCompletionBlock:(/*^block*/id)arg1 ;
-(id)init;
-(BOOL)dbQueueUpgradeFromDatabaseVersion:(int)arg1 currentVersion:(int)arg2 ;
-(void)stopOperation:(id)arg1 itemGUID:(id)arg2 ;
-(void)discardOperation:(id)arg1 itemGUID:(id)arg2 ;
-(void)startOperation:(id)arg1 itemGUID:(id)arg2 ;
-(void)summarizeOperation:(id)arg1 itemGUID:(id)arg2 formatBlock:(/*^block*/id)arg3 ;
-(void)_logSqliteErrorLine:(int)arg1 ;
-(void)dbQueueDiscardOperation:(id)arg1 itemGUID:(id)arg2 ;
@end
