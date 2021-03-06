//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TVHSMusicQueryFactory : NSObject
{
}

+ (id)_unsortedSongsQuery;	// IMP=0x000000010002b3e0
+ (id)_songsLimitedMetadataQuery;	// IMP=0x000000010002b360
+ (void)_addArtistFilterToQuery:(id)arg1 artist:(id)arg2;	// IMP=0x000000010002b1f4
+ (id)_songsAndMusicVideosFilter;	// IMP=0x000000010002b0e0
+ (id)_albumsQueryWithArtist:(id)arg1;	// IMP=0x000000010002b008
+ (id)songsQueryWithGenre:(id)arg1;	// IMP=0x000000010002af00
+ (id)songsQueryWithPlaylist:(id)arg1;	// IMP=0x000000010002ae34
+ (id)songsQueryWithAlbumID:(id)arg1;	// IMP=0x000000010002ad40
+ (id)songsQueryWithAlbum:(id)arg1;	// IMP=0x000000010002accc
+ (id)songsQueryWithArtist:(id)arg1;	// IMP=0x000000010002ac40
+ (id)songsLimitedMetadataQuery;	// IMP=0x000000010002ac34
+ (id)songsQuery;	// IMP=0x000000010002abe8
+ (id)genresQuery;	// IMP=0x000000010002ab34
+ (id)playlistsQuery;	// IMP=0x000000010002aa30
+ (id)albumsPreviewQueryWithArtist:(id)arg1;	// IMP=0x000000010002a9e4
+ (id)albumsQueryWithArtist:(id)arg1;	// IMP=0x000000010002a8e4
+ (id)albumQueryWithID:(id)arg1;	// IMP=0x000000010002a830
+ (id)albumsPreviewQuery;	// IMP=0x000000010002a820
+ (id)albumsQuery;	// IMP=0x000000010002a810
+ (id)artistQueryWithID:(id)arg1;	// IMP=0x000000010002a75c
+ (id)artistsQuery;	// IMP=0x000000010002a670

@end

