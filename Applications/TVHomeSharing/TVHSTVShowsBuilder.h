//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface TVHSTVShowsBuilder : NSObject
{
    NSArray *_episodes;	// 8 = 0x8
}

@property(copy, nonatomic) NSArray *episodes; // @synthesize episodes=_episodes;
- (void).cxx_destruct;	// IMP=0x000000010003e1bc
- (id)_seasons;	// IMP=0x000000010003dddc
@property(readonly, copy, nonatomic) NSArray *shows;
- (id)initWithEpisodesSortedByShowName:(id)arg1;	// IMP=0x000000010003d7b0
- (id)init;	// IMP=0x000000010003d728

@end

