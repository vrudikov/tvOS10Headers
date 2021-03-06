//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TVSPlayer.h"

@interface TVSPlayer (AirPlay)
- (id)mediaItemForIdentifier:(id)arg1;	// IMP=0x000000010000b844
- (void)setAudioSessionID:(int)arg1;	// IMP=0x000000010000b7cc
- (void)setReversePlaybackEndTime:(CDStruct_198678f7)arg1;	// IMP=0x000000010000b684
- (void)setForwardPlaybackEndTime:(CDStruct_198678f7)arg1;	// IMP=0x000000010000b53c
- (void)setPlayerRate:(float)arg1;	// IMP=0x000000010000b428
- (void)setPlayerPosition:(double)arg1;	// IMP=0x000000010000b304
- (void)setSelectedMediaArray:(id)arg1;	// IMP=0x000000010000b128
- (id)selectedMediaArray;	// IMP=0x000000010000aec8
- (void)setTrackEnabled:(_Bool)arg1 trackID:(long long)arg2;	// IMP=0x000000010000ace4
- (_Bool)trackEnabled:(long long)arg1;	// IMP=0x000000010000aad8
- (id)timedMetadata;	// IMP=0x000000010000aa0c
- (id)errorLogArray;	// IMP=0x000000010000a9b8
- (id)accessLogArray;	// IMP=0x000000010000a964
- (id)playbackInfo;	// IMP=0x0000000100009f48
@end

