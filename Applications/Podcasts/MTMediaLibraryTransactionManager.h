//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTSingleton.h"

@class NSObject<OS_dispatch_queue>;

@interface MTMediaLibraryTransactionManager : MTSingleton
{
    NSObject<OS_dispatch_queue> *_serialQueue;	// 8 = 0x8
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
- (void).cxx_destruct;	// IMP=0x00000001000e5ec0
- (void)requestMediaLibraryReadTransaction:(CDUnknownBlockType)arg1;	// IMP=0x00000001000e5d68
- (void)requestMediaLibraryWriteTransaction:(CDUnknownBlockType)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000e5bbc
- (void)requestMediaLibraryWriteTransaction:(CDUnknownBlockType)arg1;	// IMP=0x00000001000e5bac
- (id)init;	// IMP=0x00000001000e5b34

@end

