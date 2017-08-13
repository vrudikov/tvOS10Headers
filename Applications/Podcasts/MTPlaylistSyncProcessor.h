//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MZKeyValueStoreTransactionProcessing.h"

@class NSMutableSet, NSString;

@interface MTPlaylistSyncProcessor : NSObject <MZKeyValueStoreTransactionProcessing>
{
    NSMutableSet *_addedPlaylists;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000100165ad8
- (void)_mergeSetting:(id)arg1 syncObj:(id)arg2;	// IMP=0x0000000100165650
- (void)_addSetting:(id)arg1 syncObj:(id)arg2 playlist:(id)arg3;	// IMP=0x0000000100165330
- (void)transaction:(id)arg1 didProcessResponseWithDomainVersion:(id)arg2;	// IMP=0x000000010016532c
- (void)transaction:(id)arg1 willProcessResponseWithDomainVersion:(id)arg2;	// IMP=0x0000000100165328
- (void)transaction:(id)arg1 mergeData:(id)arg2 forKey:(id)arg3 domainVersion:(id)arg4 version:(id)arg5 mismatch:(_Bool)arg6 finishedBlock:(CDUnknownBlockType)arg7;	// IMP=0x0000000100163ef0
- (id)dataForSetTransaction:(id)arg1 key:(id)arg2 version:(id *)arg3;	// IMP=0x0000000100162ed8
- (id)versionForGetTransaction:(id)arg1 key:(id)arg2;	// IMP=0x0000000100162e7c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
