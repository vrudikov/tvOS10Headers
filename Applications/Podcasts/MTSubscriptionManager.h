//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTBaseFeedManager.h"

@class NSMutableDictionary;

@interface MTSubscriptionManager : MTBaseFeedManager
{
    NSMutableDictionary *_feedUrlsToParams;	// 8 = 0x8
}

@property(retain, nonatomic) NSMutableDictionary *feedUrlsToParams; // @synthesize feedUrlsToParams=_feedUrlsToParams;
- (void).cxx_destruct;	// IMP=0x00000001000c8400
- (void)showSubscriptionFailureDialog:(id)arg1;	// IMP=0x00000001000c8160
- (void)removeSubscribeParamsForFeedUrl:(id)arg1;	// IMP=0x00000001000c80b4
- (void)addSubscribeParams:(id)arg1 forFeedUrl:(id)arg2;	// IMP=0x00000001000c7fe4
- (id)subscribeParamsForFeedUrl:(id)arg1;	// IMP=0x00000001000c7f24
- (void)subscribeToPodcastWithParams:(id)arg1;	// IMP=0x00000001000c7c1c
- (void)task:(id)arg1 didFailWithError:(id)arg2 orStatusCode:(long long)arg3;	// IMP=0x00000001000c7a44
- (void)task:(id)arg1 didCompleteWithData:(id)arg2;	// IMP=0x00000001000c6fc4
- (id)init;	// IMP=0x00000001000c6f3c

@end

