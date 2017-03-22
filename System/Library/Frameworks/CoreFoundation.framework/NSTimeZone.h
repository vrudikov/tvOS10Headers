/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:01:02 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSData;

@interface NSTimeZone : NSObject <NSCopying, NSSecureCoding>

@property (copy,readonly) NSString * name; 
@property (copy,readonly) NSData * data; 
+(void)setAbbreviationDictionary:(id)arg1 ;
+(id)timeZoneDataVersion;
+(id)timeZoneWithName:(id)arg1 data:(id)arg2 ;
+(id)abbreviationDictionary;
+(void)resetSystemTimeZone;
+(id)allocWithZone:(NSZone*)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)timeZoneForSecondsFromGMT:(long long)arg1 ;
+(id)defaultTimeZone;
+(id)localTimeZone;
+(id)timeZoneWithAbbreviation:(id)arg1 ;
+(id)systemTimeZone;
+(id)timeZoneWithName:(id)arg1 ;
+(void)setDefaultTimeZone:(id)arg1 ;
+(id)knownTimeZoneNames;
-(id)replacementObjectForPortCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(Class)classForCoder;
-(double)daylightSavingTimeOffset;
-(unsigned long long)_cfTypeID;
-(BOOL)isNSTimeZone__;
-(id)initWithName:(id)arg1 data:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSData *)data;
-(id)initWithName:(id)arg1 ;
-(id)nextDaylightSavingTimeTransitionAfterDate:(id)arg1 ;
-(long long)secondsFromGMTForDate:(id)arg1 ;
-(id)abbreviation;
-(BOOL)isEqualToTimeZone:(id)arg1 ;
-(BOOL)isDaylightSavingTimeForDate:(id)arg1 ;
-(BOOL)isDaylightSavingTime;
-(double)daylightSavingTimeOffsetForDate:(id)arg1 ;
-(id)abbreviationForDate:(id)arg1 ;
-(long long)secondsFromGMT;
-(id)nextDaylightSavingTimeTransition;
-(id)localizedName:(long long)arg1 locale:(id)arg2 ;
@end
