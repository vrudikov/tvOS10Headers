//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CastleRequest.h"

@class NSArray;

@interface QuotaAppDetailsRequest : CastleRequest
{
    NSArray *_bundleIds;	// 56 = 0x38
    NSArray *_bundleIDs;	// 64 = 0x40
}

+ (Class)responseClass;	// IMP=0x000000010005ab80
@property(retain, nonatomic) NSArray *bundleIDs; // @synthesize bundleIDs=_bundleIDs;
- (void).cxx_destruct;	// IMP=0x000000010005ae4c
- (id)urlRequest;	// IMP=0x000000010005ac5c
- (id)initWithAccount:(id)arg1 bundleIDs:(id)arg2 quotaInfo:(id)arg3;	// IMP=0x000000010005ab94

@end

