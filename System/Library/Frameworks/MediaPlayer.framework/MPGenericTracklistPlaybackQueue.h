/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:26 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/MPRemotePlaybackQueue.h>

@class NSArray;

@interface MPGenericTracklistPlaybackQueue : MPRemotePlaybackQueue {

	NSArray* _trackIdentifiers;
	long long _shuffleType;
	long long _repeatType;

}

@property (nonatomic,readonly) NSArray * trackIdentifiers;              //@synthesize trackIdentifiers=_trackIdentifiers - In the implementation block
@property (nonatomic,readonly) long long shuffleType;                   //@synthesize shuffleType=_shuffleType - In the implementation block
@property (nonatomic,readonly) long long repeatType;                    //@synthesize repeatType=_repeatType - In the implementation block
-(id)description;
-(long long)repeatType;
-(long long)shuffleType;
-(id)initWithMediaRemotePlaybackQueue:(MRSystemAppPlaybackQueueRef)arg1 ;
-(BOOL)verifyWithError:(id*)arg1 ;
-(NSArray *)trackIdentifiers;
@end
