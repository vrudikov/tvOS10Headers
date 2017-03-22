/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:38 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkServiceProxy/NetworkServiceProxy-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableArray;

@interface NPAverage : NSObject <NSSecureCoding> {

	unsigned long long _size;
	NSMutableArray* _samples;

}

@property (readonly) unsigned long long average; 
@property (readonly) BOOL isLastValid; 
@property (assign) unsigned long long size;                   //@synthesize size=_size - In the implementation block
@property (retain) NSMutableArray * samples;                  //@synthesize samples=_samples - In the implementation block
+(BOOL)supportsSecureCoding;
-(unsigned long long)size;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setSize:(unsigned long long)arg1 ;
-(void)addSample:(unsigned long long)arg1 ;
-(id)shortDescription;
-(NSMutableArray *)samples;
-(void)setSamples:(NSMutableArray *)arg1 ;
-(unsigned long long)average;
-(id)initWithSampleSize:(unsigned long long)arg1 ;
-(void)addSamples:(id)arg1 ;
-(BOOL)isLastValid;
@end
