/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:46 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlaybackCore/MPCMediaPlayerLegacyPlaylistManager.h>
#import <MPUFoundation/MPUQueueBehaviorManaging.h>

@class NSString;

@interface MPUAVPlaylistManager : MPCMediaPlayerLegacyPlaylistManager <MPUQueueBehaviorManaging>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL allowsUserVisibleUpcomingItems; 
@property (nonatomic,readonly) BOOL canSeek; 
@property (nonatomic,readonly) BOOL canSkipToPreviousItem; 
@property (nonatomic,readonly) long long playbackMode; 
@property (nonatomic,readonly) BOOL userCanChangeShuffleAndRepeatType; 
-(void)addPlaybackContext:(id)arg1 toHardQueueWithInsertionType:(long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)addPlaybackContext:(id)arg1 toHardQueueWithInsertionType:(long long)arg2 ;
@end
