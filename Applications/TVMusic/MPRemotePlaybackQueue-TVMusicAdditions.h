//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MPRemotePlaybackQueue.h"

@interface MPRemotePlaybackQueue (TVMusicAdditions)
- (void)_mediaItemsFromLibraryForSagaIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100038714
- (void)_mediaItemsFromLibraryForMPItems:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100038088
- (id)_mediaItemForLookupItem:(id)arg1;	// IMP=0x0000000100037b30
- (id)_mediaItemsForLookupItems:(id)arg1;	// IMP=0x0000000100037a5c
- (void)_mediaItemsForAdamIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100037430
- (void)tvmusic_playlistWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010003741c
@end

