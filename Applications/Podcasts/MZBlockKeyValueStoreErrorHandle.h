//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MZKeyValueStoreErrorHandle.h"

@interface MZBlockKeyValueStoreErrorHandle : MZKeyValueStoreErrorHandle
{
    CDUnknownBlockType _errorResolutionBlock;	// 40 = 0x28
}

@property(copy, nonatomic) CDUnknownBlockType errorResolutionBlock; // @synthesize errorResolutionBlock=_errorResolutionBlock;
- (void)resolveError;	// IMP=0x0000000100052bd0
- (void)dealloc;	// IMP=0x0000000100052b70

@end

