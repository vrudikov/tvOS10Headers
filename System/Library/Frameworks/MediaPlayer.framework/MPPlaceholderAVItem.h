/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:31 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPAVItem.h>

@class NSString;

@interface MPPlaceholderAVItem : MPAVItem {

	NSString* _album;
	NSString* _artist;
	double _durationFromExternalMetadata;
	BOOL _explicitTrack;
	BOOL _likeStateEnabled;
	NSString* _mainTitle;
	BOOL _supportsLikedState;

}

@property (nonatomic,retain) NSString * album;                                               //@synthesize album=_album - In the implementation block
@property (nonatomic,retain) NSString * artist;                                              //@synthesize artist=_artist - In the implementation block
@property (assign,nonatomic) double durationFromExternalMetadata;                            //@synthesize durationFromExternalMetadata=_durationFromExternalMetadata - In the implementation block
@property (assign,getter=isExplicitTrack,nonatomic) BOOL explicitTrack;                      //@synthesize explicitTrack=_explicitTrack - In the implementation block
@property (assign,getter=isLikedStateEnabled,nonatomic) BOOL likedStateEnabled;              //@synthesize likeStateEnabled=_likeStateEnabled - In the implementation block
@property (nonatomic,retain) NSString * mainTitle;                                           //@synthesize mainTitle=_mainTitle - In the implementation block
@property (assign,nonatomic) BOOL supportsLikedState;                                        //@synthesize supportsLikedState=_supportsLikedState - In the implementation block
-(void)loadAssetAndPlayerItem;
-(double)durationFromExternalMetadata;
-(NSString *)artist;
-(BOOL)isValidPlayerSubstituteForItem:(id)arg1 ;
-(BOOL)isExplicitTrack;
-(NSString *)mainTitle;
-(BOOL)supportsSkip;
-(BOOL)supportsSettingCurrentTime;
-(BOOL)isLikedStateEnabled;
-(BOOL)supportsLikedState;
-(void)setArtist:(NSString *)arg1 ;
-(void)setDurationFromExternalMetadata:(double)arg1 ;
-(void)setExplicitTrack:(BOOL)arg1 ;
-(void)setLikedStateEnabled:(BOOL)arg1 ;
-(void)setMainTitle:(NSString *)arg1 ;
-(void)setSupportsLikedState:(BOOL)arg1 ;
-(NSString *)album;
-(void)setAlbum:(NSString *)arg1 ;
@end

