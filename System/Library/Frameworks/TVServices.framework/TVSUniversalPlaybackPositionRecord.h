/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:53 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/TVServices.framework/TVServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SBKUniversalPlaybackPositionMediaItem.h>

@class NSString, TVSDataType, NSNumber, NSDate, NSURL, TVSPodcastGUID;

@interface TVSUniversalPlaybackPositionRecord : NSObject <SBKUniversalPlaybackPositionMediaItem> {

	NSString* _itemIdentifier;
	TVSDataType* _mediaType;
	NSNumber* _bookmarkTime;
	NSNumber* _hasBeenPlayed;
	NSNumber* _playCount;
	NSDate* _timestamp;
	NSURL* _podcastURL;
	TVSPodcastGUID* _podcastGUID;

}

@property (nonatomic,copy) NSString * itemIdentifier;                   //@synthesize itemIdentifier=_itemIdentifier - In the implementation block
@property (nonatomic,retain) TVSDataType * mediaType;                   //@synthesize mediaType=_mediaType - In the implementation block
@property (nonatomic,retain) NSNumber * bookmarkTime;                   //@synthesize bookmarkTime=_bookmarkTime - In the implementation block
@property (nonatomic,retain) NSNumber * hasBeenPlayed;                  //@synthesize hasBeenPlayed=_hasBeenPlayed - In the implementation block
@property (nonatomic,retain) NSNumber * playCount;                      //@synthesize playCount=_playCount - In the implementation block
@property (nonatomic,retain) NSDate * timestamp;                        //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,retain) NSURL * podcastURL;                        //@synthesize podcastURL=_podcastURL - In the implementation block
@property (nonatomic,retain) TVSPodcastGUID * podcastGUID;              //@synthesize podcastGUID=_podcastGUID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(NSDate *)timestamp;
-(void)setTimestamp:(NSDate *)arg1 ;
-(NSNumber *)bookmarkTime;
-(NSURL *)podcastURL;
-(void)setBookmarkTime:(NSNumber *)arg1 ;
-(NSNumber *)hasBeenPlayed;
-(void)setHasBeenPlayed:(NSNumber *)arg1 ;
-(void)enumerateValuesForProperties:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)setPodcastURL:(NSURL *)arg1 ;
-(void)setPodcastGUID:(TVSPodcastGUID *)arg1 ;
-(TVSPodcastGUID *)podcastGUID;
-(id)_uppDictionary;
-(void)markAsWatched;
-(void)markAsUnwatched;
-(NSString *)itemIdentifier;
-(void)setItemIdentifier:(NSString *)arg1 ;
-(NSNumber *)playCount;
-(void)setPlayCount:(NSNumber *)arg1 ;
-(TVSDataType *)mediaType;
-(void)setMediaType:(TVSDataType *)arg1 ;
@end

