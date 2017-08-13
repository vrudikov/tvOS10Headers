//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSPredicate;

@interface MTLibraryQuery : NSObject
{
    _Bool _active;	// 8 = 0x8
    NSArray *_podcastResults;	// 16 = 0x10
    NSArray *_episodeResults;	// 24 = 0x18
    NSPredicate *_podcastPredicate;	// 32 = 0x20
    NSPredicate *_episodePredicate;	// 40 = 0x28
    NSArray *_podcastSortDescriptors;	// 48 = 0x30
    NSArray *_episodeSortDescriptors;	// 56 = 0x38
    CDUnknownBlockType _action;	// 64 = 0x40
}

@property(nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
@property(copy, nonatomic) CDUnknownBlockType action; // @synthesize action=_action;
@property(retain, nonatomic) NSArray *episodeSortDescriptors; // @synthesize episodeSortDescriptors=_episodeSortDescriptors;
@property(retain, nonatomic) NSArray *podcastSortDescriptors; // @synthesize podcastSortDescriptors=_podcastSortDescriptors;
@property(retain, nonatomic) NSPredicate *episodePredicate; // @synthesize episodePredicate=_episodePredicate;
@property(retain, nonatomic) NSPredicate *podcastPredicate; // @synthesize podcastPredicate=_podcastPredicate;
@property(retain, nonatomic) NSArray *episodeResults; // @synthesize episodeResults=_episodeResults;
@property(retain, nonatomic) NSArray *podcastResults; // @synthesize podcastResults=_podcastResults;
- (void).cxx_destruct;	// IMP=0x000000010003afd4
- (void)runQueryInContext:(id)arg1;	// IMP=0x000000010003a9d0
- (void)runQuery;	// IMP=0x000000010003a954
- (void)runQueryWithPodcastPredicate:(id)arg1 episodePredicate:(id)arg2;	// IMP=0x000000010003a8cc
- (id)init;	// IMP=0x000000010003a858

@end

