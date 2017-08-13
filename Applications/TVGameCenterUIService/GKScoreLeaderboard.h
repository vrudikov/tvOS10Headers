//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GKLeaderboard.h"

@class GKGame, GKPlayer, GKScore, NSArray, NSError, NSMutableArray, NSObject<OS_dispatch_queue>;

@interface GKScoreLeaderboard : GKLeaderboard
{
    GKGame *_game;	// 8 = 0x8
    GKPlayer *_player;	// 16 = 0x10
    struct _NSRange _totalRange;	// 24 = 0x18
    struct _NSRange _displayedRange;	// 40 = 0x28
    NSArray *_showcasedScores;	// 56 = 0x38
    unsigned long long _maxLoaded;	// 64 = 0x40
    struct _NSRange _currentRange;	// 72 = 0x48
    GKScore *_comparePlayerScore;	// 88 = 0x58
    NSError *_error;	// 96 = 0x60
    NSObject<OS_dispatch_queue> *_loadQueue;	// 104 = 0x68
    NSMutableArray *_allScores;	// 112 = 0x70
}

@property(retain, nonatomic) NSMutableArray *allScores; // @synthesize allScores=_allScores;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *loadQueue; // @synthesize loadQueue=_loadQueue;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) GKScore *comparePlayerScore; // @synthesize comparePlayerScore=_comparePlayerScore;
@property(nonatomic) struct _NSRange displayedRange; // @synthesize displayedRange=_displayedRange;
@property(readonly, nonatomic) struct _NSRange totalRange; // @synthesize totalRange=_totalRange;
@property(retain, nonatomic) GKPlayer *player; // @synthesize player=_player;
@property(retain, nonatomic) GKGame *game; // @synthesize game=_game;
- (void)loadScoresForGame:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100029910
- (id)insertLeaderboardScores:(id)arg1;	// IMP=0x00000001000295b0
- (id)placeholderLeaderboardItemsForRankRange:(struct _NSRange)arg1;	// IMP=0x0000000100029468
- (long long)maxLoadedScores;	// IMP=0x0000000100029444
- (id)scoresInRange:(struct _NSRange)arg1;	// IMP=0x0000000100029408
- (id)scoreAtIndex:(long long)arg1;	// IMP=0x00000001000293d4
- (void)dealloc;	// IMP=0x0000000100029310
- (id)initWithInternalRepresentation:(id)arg1;	// IMP=0x00000001000292b8
- (id)initWithGame:(id)arg1;	// IMP=0x0000000100029250
- (void)initRangeAndQueue;	// IMP=0x00000001000291ac

@end
