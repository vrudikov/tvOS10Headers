//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTBaseProcessor.h"

@interface MTPlaylistQueryManager : MTBaseProcessor
{
}

+ (id)_allPodcastsInCtx:(id)arg1;	// IMP=0x00000001000bca18
+ (void)updateEpisodesForSettings:(id)arg1 ctx:(id)arg2;	// IMP=0x00000001000bbaf8
+ (void)_sortUngroupedList:(id)arg1 inPlaylist:(id)arg2;	// IMP=0x00000001000bb6cc
+ (_Bool)updatePlaylist:(id)arg1 inContext:(id)arg2;	// IMP=0x00000001000bab9c
+ (void)_fixSortOrder:(id)arg1 generated_p:(_Bool *)arg2;	// IMP=0x00000001000ba794
- (void)createDefaultPlaylists;	// IMP=0x00000001000bc7b8
- (void)updatePlaylistsWithUuids:(id)arg1;	// IMP=0x00000001000bc520
- (void)updateAllPlaylistsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001000bbf3c
- (_Bool)updatePlaylistWithUuid:(id)arg1 inContext:(id)arg2;	// IMP=0x00000001000bbebc
- (void)resultsChangedWithDeletedIds:(id)arg1 andInsertIds:(id)arg2;	// IMP=0x00000001000ba660
- (id)predicate;	// IMP=0x00000001000ba644
- (id)entityName;	// IMP=0x00000001000ba634
- (void)feedUpdateDidComplete:(id)arg1;	// IMP=0x00000001000ba624
- (id)init;	// IMP=0x00000001000ba564

@end

