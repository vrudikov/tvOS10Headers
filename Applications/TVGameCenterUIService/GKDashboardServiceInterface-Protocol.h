//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GKChallenge, GKTurnBasedMatch, NSString;

@protocol GKDashboardServiceInterface <NSObject>
- (void)finish;

@optional
- (void)requestImagesForLeaderboardsInSet:(NSString *)arg1 handler:(void (^)(NSError *))arg2;
- (void)requestImagesForLeaderboardSetsWithHandler:(void (^)(NSError *))arg1;
- (void)requestDashboardLogoImageWithHandler:(void (^)(NSError *))arg1;
- (void)dashboardDidChangeToLeaderboardIdentifier:(NSString *)arg1;
- (void)dashboardDidChangeToLeaderboardTimeScope:(long long)arg1;
- (void)dashboardDidChangeToViewState:(long long)arg1;
- (void)quitTurnBasedMatch:(GKTurnBasedMatch *)arg1;
- (void)finishWithTurnBasedMatch:(GKTurnBasedMatch *)arg1;
- (void)finishAndPlayChallenge:(GKChallenge *)arg1;
- (void)setToDarkBackground;
- (void)setToLightBackground;
@end

