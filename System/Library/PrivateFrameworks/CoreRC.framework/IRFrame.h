/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:42 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/CoreRC.framework/CoreRC
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreRC/CoreRC-Structs.h>
@interface IRFrame : NSObject {

	unsigned* _timings;
	unsigned long long _count;
	unsigned long long _timestamp;

}

@property (nonatomic,readonly) unsigned long long count;                //@synthesize count=_count - In the implementation block
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
-(void)dealloc;
-(unsigned long long)count;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(id)initWithTimings:(const unsigned*)arg1 count:(unsigned long long)arg2 timestamp:(unsigned long long)arg3 ;
-(unsigned)timeIntervalAtIndex:(unsigned long long)arg1 ;
-(void)getTimings:(unsigned*)arg1 range:(NSRange)arg2 ;
@end
