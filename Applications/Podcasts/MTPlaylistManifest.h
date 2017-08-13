//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTPredicateManifest.h"

@class NSString;

@interface MTPlaylistManifest : MTPredicateManifest
{
    NSString *_playlistUuid;	// 8 = 0x8
}

+ (id)activityTypeSuffix;	// IMP=0x00000001000f7a2c
+ (id)createManifestForActivity:(id)arg1;	// IMP=0x00000001000f7930
@property(readonly, nonatomic) NSString *playlistUuid; // @synthesize playlistUuid=_playlistUuid;
- (void).cxx_destruct;	// IMP=0x00000001000f7ed4
- (void)_propertyDidChange;	// IMP=0x00000001000f7e80
- (_Bool)_updatePlaylistEpisodes;	// IMP=0x00000001000f7aa8
- (void)_load;	// IMP=0x00000001000f7a58
- (id)activitySpotlightIdentifier;	// IMP=0x00000001000f78b0
- (id)initWithPlaylistUuid:(id)arg1 initialEpisodeUuid:(id)arg2;	// IMP=0x00000001000f75a0

@end

