//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IMCloudSyncTransaction;

@interface IMCloudSyncSerializer : NSObject
{
    IMCloudSyncTransaction *_transaction;	// 8 = 0x8
}

@property(retain, nonatomic) IMCloudSyncTransaction *transaction; // @synthesize transaction=_transaction;
- (struct IMCloudSyncDataVerionPair)objectVersionPairForKey:(id)arg1;	// IMP=0x00000001001f9980
- (id)payloadWithNode:(id)arg1;	// IMP=0x00000001001f9944
- (id)keys;	// IMP=0x00000001001f9878
- (id)dataWithNodes:(id)arg1;	// IMP=0x00000001001f97e8
- (id)baseDictionary;	// IMP=0x00000001001f9760
- (id)payload;	// IMP=0x00000001001f94e0
- (void)dealloc;	// IMP=0x00000001001f9480
- (id)initWithTransaction:(id)arg1;	// IMP=0x00000001001f9418

@end

