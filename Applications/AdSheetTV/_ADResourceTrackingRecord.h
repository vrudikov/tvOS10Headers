//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSURL;

@interface _ADResourceTrackingRecord : NSObject
{
    double _startTime;	// 8 = 0x8
    double _requestTime;	// 16 = 0x10
    double _responseTime;	// 24 = 0x18
    NSURL *_URL;	// 32 = 0x20
}

@property(retain, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(nonatomic) double responseTime; // @synthesize responseTime=_responseTime;
@property(nonatomic) double requestTime; // @synthesize requestTime=_requestTime;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
- (void)dealloc;	// IMP=0x000000010001576c

@end

