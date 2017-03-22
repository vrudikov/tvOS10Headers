/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:04:24 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalendarDaemon/CalendarDaemon-Structs.h>
#import <CalendarDaemon/CADOperationGroup.h>
#import <libobjc.A.dylib/CADCalendarItemInterface.h>

@interface CADCalendarItemOperationGroup : CADOperationGroup <CADCalendarItemInterface>
+(BOOL)requiresEventAccess;
+(BOOL)requiresReminderAccess;
+(BOOL)requiresEventOrReminderAccess;
-(id)_resultsFilteredForTCCAccess:(id)arg1 ;
-(void)CADDatabaseGetCalendarItemWithUUID:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)CADDatabaseFetchCalendarItemsWithPredicate:(id)arg1 entityType:(int)arg2 fetchIdentifier:(int)arg3 reply:(/*^block*/id)arg4 ;
-(void)CADDatabaseCancelFetchRequestWithIdentifier:(unsigned)arg1 ;
-(void)CADDatabaseExportCalendarItemAsICS:(SCD_Struct_CA1)arg1 reply:(/*^block*/id)arg2 ;
-(void)CADDatabaseGetContactIdentifierForCalendarItem:(SCD_Struct_CA1)arg1 reply:(/*^block*/id)arg2 ;
-(void)CADDatabaseAddContactWithIdentifier:(id)arg1 forCalendarItem:(SCD_Struct_CA1)arg2 withReply:(/*^block*/id)arg3 ;
-(void)CADDatabaseRemoveContactIdentifier:(id)arg1 forCalendarItem:(SCD_Struct_CA1)arg2 withReply:(/*^block*/id)arg3 ;
-(void)CADDatabaseCountEntitiesOfType:(int)arg1 withContactIdentifier:(id)arg2 withReply:(/*^block*/id)arg3 ;
-(void)CADDatabaseFetchEntitiesOfType:(int)arg1 withContactIdentifier:(id)arg2 withReply:(/*^block*/id)arg3 ;
@end
