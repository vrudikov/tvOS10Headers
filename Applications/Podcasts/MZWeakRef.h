//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MZWeakRef : NSObject
{
    id _object;	// 8 = 0x8
    unsigned long long _objectAddress;	// 16 = 0x10
}

+ (id)weakRefWithObject:(id)arg1;	// IMP=0x00000001000a1e9c
- (id)object;	// IMP=0x00000001000a1f00
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001000a1e38
- (unsigned long long)hash;	// IMP=0x00000001000a1e28
- (void)dealloc;	// IMP=0x00000001000a1dd0

@end

