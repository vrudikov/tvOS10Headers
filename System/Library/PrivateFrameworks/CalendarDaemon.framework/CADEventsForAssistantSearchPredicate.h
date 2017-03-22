/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:04:24 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalendarDaemon/CalendarDaemon-Structs.h>
#import <CalendarDaemon/CADPredicate.h>
#import <libobjc.A.dylib/EKDefaultPropertiesLoading.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSTimeZone, NSDate, NSString, NSArray;

@interface CADEventsForAssistantSearchPredicate : CADPredicate <EKDefaultPropertiesLoading, NSSecureCoding> {

	NSTimeZone* _timeZone;
	NSDate* _startDate;
	NSDate* _endDate;
	NSString* _title;
	NSString* _location;
	NSString* _notes;
	NSArray* _participants;
	long long _limit;

}

@property (nonatomic,copy) NSTimeZone * timeZone;                   //@synthesize timeZone=_timeZone - In the implementation block
@property (nonatomic,copy) NSDate * startDate;                      //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,copy) NSDate * endDate;                        //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,copy) NSString * title;                        //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * location;                     //@synthesize location=_location - In the implementation block
@property (nonatomic,copy) NSString * notes;                        //@synthesize notes=_notes - In the implementation block
@property (nonatomic,copy) NSArray * participants;                  //@synthesize participants=_participants - In the implementation block
@property (assign,nonatomic) long long limit;                       //@synthesize limit=_limit - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)description;
-(NSString *)title;
-(void)setTimeZone:(NSTimeZone *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)location;
-(NSTimeZone *)timeZone;
-(void)setLocation:(NSString *)arg1 ;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(NSString *)notes;
-(void)setNotes:(NSString *)arg1 ;
-(void)setParticipants:(NSArray *)arg1 ;
-(id)copyMatchingItemsWithDatabase:(CalDatabase*)arg1 ;
-(id)defaultPropertiesToLoad;
-(BOOL)shouldLoadDefaultProperties;
-(id)initWithTimeZone:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 title:(id)arg4 location:(id)arg5 notes:(id)arg6 participants:(id)arg7 limit:(long long)arg8 ;
-(NSArray *)participants;
-(void)setLimit:(long long)arg1 ;
-(void)setStartDate:(NSDate *)arg1 ;
-(void)setEndDate:(NSDate *)arg1 ;
-(id)predicateFormat;
-(long long)limit;
@end
