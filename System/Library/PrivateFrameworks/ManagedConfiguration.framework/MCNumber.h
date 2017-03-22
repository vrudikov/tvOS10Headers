/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:01:35 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSNumber;

@interface MCNumber : NSObject <NSSecureCoding> {

	NSNumber* _number;

}

@property (nonatomic,retain) NSNumber * number;              //@synthesize number=_number - In the implementation block
+(id)numberWithInteger:(long long)arg1 ;
+(id)numberWithInt:(int)arg1 ;
+(id)numberWithUnsignedInteger:(unsigned long long)arg1 ;
+(id)numberWithUnsignedInt:(unsigned)arg1 ;
+(BOOL)supportsSecureCoding;
-(id)initWithUnsignedInteger:(unsigned long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithUnsignedInt:(unsigned)arg1 ;
-(id)initWithInteger:(long long)arg1 ;
-(id)initWithInt:(int)arg1 ;
-(NSNumber *)number;
-(id)descriptionWithLocale:(id)arg1 ;
-(void)setNumber:(NSNumber *)arg1 ;
@end
