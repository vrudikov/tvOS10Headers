//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ADSSession, NSMutableArray, NSString;

@interface ADSRVClientRecord : NSObject
{
    NSString *_bundleID;	// 8 = 0x8
    ADSSession *_currentSession;	// 16 = 0x10
    NSMutableArray *_historicalConnections;	// 24 = 0x18
}

@property(retain, nonatomic) NSMutableArray *historicalConnections; // @synthesize historicalConnections=_historicalConnections;
@property(retain, nonatomic) ADSSession *currentSession; // @synthesize currentSession=_currentSession;
@property(copy, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
- (void)dealloc;	// IMP=0x0000000100038034
- (id)description;	// IMP=0x0000000100037cec
- (void)disconnectCurrentConnection;	// IMP=0x0000000100037b64
- (id)init;	// IMP=0x0000000100037af0

@end

