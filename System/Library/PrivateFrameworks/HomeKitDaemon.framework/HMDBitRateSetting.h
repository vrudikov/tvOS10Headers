/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:08:24 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDNumberParser.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface HMDBitRateSetting : HMDNumberParser <NSSecureCoding> {

	unsigned long long _bitrateSetting;

}

@property (nonatomic,readonly) unsigned long long bitrateSetting;              //@synthesize bitrateSetting=_bitrateSetting - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)arrayWithSettings:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)description:(id)arg1 indent:(id)arg2 ;
-(id)initWithTLVData:(id)arg1 ;
-(unsigned long long)bitrateSetting;
-(id)initWithBitRateSetting:(unsigned long long)arg1 ;
@end
