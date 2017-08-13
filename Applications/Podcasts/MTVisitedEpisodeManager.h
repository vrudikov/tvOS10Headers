//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTSingleton.h"

@class NSMutableSet;

@interface MTVisitedEpisodeManager : MTSingleton
{
    NSMutableSet *_startedEpisodeUuids;	// 8 = 0x8
    NSMutableSet *_endedEpisodeUuids;	// 16 = 0x10
}

@property(retain, nonatomic) NSMutableSet *endedEpisodeUuids; // @synthesize endedEpisodeUuids=_endedEpisodeUuids;
@property(retain, nonatomic) NSMutableSet *startedEpisodeUuids; // @synthesize startedEpisodeUuids=_startedEpisodeUuids;
- (void).cxx_destruct;	// IMP=0x0000000100170d2c
- (void)flushVisitedEpisodes;	// IMP=0x0000000100170928
- (unsigned long long)countOfEndedEpisodes;	// IMP=0x00000001001708dc
- (unsigned long long)countOfStartedEpisodes;	// IMP=0x0000000100170890
- (_Bool)hasEndedVisitingEpisode:(id)arg1;	// IMP=0x00000001001707e8
- (void)startVisitingEpisode:(id)arg1;	// IMP=0x0000000100170714
- (void)endVisitingEpisode:(id)arg1;	// IMP=0x0000000100170674
- (id)init;	// IMP=0x0000000100170520

@end

