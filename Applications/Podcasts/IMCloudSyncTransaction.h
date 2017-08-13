//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableDictionary, NSString, NSURL;

@interface IMCloudSyncTransaction : NSObject
{
    NSString *_domain;	// 8 = 0x8
    NSURL *_URL;	// 16 = 0x10
    id <IMCloudSyncTransactionProcessing> _processor;	// 24 = 0x18
    NSMutableDictionary *_userInfo;	// 32 = 0x20
    int _type;	// 40 = 0x28
    NSArray *_keys;	// 48 = 0x30
}

@property(readonly, retain, nonatomic) NSArray *keys; // @synthesize keys=_keys;
@property(nonatomic) int type; // @synthesize type=_type;
@property(retain) NSMutableDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(retain) id <IMCloudSyncTransactionProcessing> processor; // @synthesize processor=_processor;
@property(retain) NSURL *URL; // @synthesize URL=_URL;
@property(copy) NSString *domain; // @synthesize domain=_domain;
- (id)description;	// IMP=0x00000001001f9f18
- (id)userInfoValueForKey:(id)arg1;	// IMP=0x00000001001f9eb0
- (void)setUserInfoValue:(id)arg1 forKey:(id)arg2;	// IMP=0x00000001001f9e08
- (void)dealloc;	// IMP=0x00000001001f9d3c
- (id)initWithType:(int)arg1 domain:(id)arg2 URL:(id)arg3 keys:(id)arg4;	// IMP=0x00000001001f9c74

@end

