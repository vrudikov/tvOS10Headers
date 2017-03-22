/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:02:53 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreMotion/CoreMotion-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSUUID;

@interface CMWorkout : NSObject <NSSecureCoding, NSCopying> {

	NSUUID* fSessionId;
	long long fType;

}

@property (nonatomic,readonly) NSUUID * sessionId; 
@property (nonatomic,readonly) long long type; 
+(BOOL)supportsSecureCoding;
+(id)workoutName:(long long)arg1 ;
+(long long)natalieDataSessionFromWorkoutType:(long long)arg1 ;
+(long long)workoutTypeFromNatalieDataSession:(long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(long long)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithSessionId:(id)arg1 type:(long long)arg2 ;
-(NSUUID *)sessionId;
@end
