//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IMMediaRemoteController.h"

@interface MTMediaRemoteController : IMMediaRemoteController
{
}

- (long long)remoteChangePlaybackRate:(id)arg1;	// IMP=0x00000001000b2ea0
- (long long)remotePlay:(id)arg1;	// IMP=0x00000001000b2cdc
- (void)remoteSetPlaybackQueueCommand:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000b29ec
- (long long)findIndexOfCommand:(unsigned int)arg1 inArray:(struct __CFArray *)arg2;	// IMP=0x00000001000b297c
- (struct __CFArray *)copySupportedCommands;	// IMP=0x00000001000b2854
- (void)dealloc;	// IMP=0x00000001000b27b0
- (id)initWithPlayer:(id)arg1;	// IMP=0x00000001000b26e4

@end

