//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MSAsset, NSDate, NSString;

@interface TVPAsset : NSObject
{
    int _state;	// 8 = 0x8
    MSAsset *_asset;	// 16 = 0x10
    NSString *_assetID;	// 24 = 0x18
    NSDate *_dateContentCreated;	// 32 = 0x20
}

@property(retain) NSDate *dateContentCreated; // @synthesize dateContentCreated=_dateContentCreated;
@property(copy) NSString *assetID; // @synthesize assetID=_assetID;
@property int state; // @synthesize state=_state;
@property(retain) MSAsset *asset; // @synthesize asset=_asset;
- (void).cxx_destruct;	// IMP=0x000000010000ad58
- (id)description;	// IMP=0x000000010000acd8
- (id)initWithCoder:(id)arg1;	// IMP=0x000000010000ab6c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000010000aa74
- (unsigned long long)hash;	// IMP=0x000000010000aa28
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010000a95c

@end

