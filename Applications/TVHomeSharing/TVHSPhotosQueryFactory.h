//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TVHSPhotosQueryFactory : NSObject
{
}

+ (id)_photosQueryWithCollectionID:(id)arg1 collectionType:(id)arg2 forPreview:(_Bool)arg3 shuffle:(_Bool)arg4;	// IMP=0x000000010003cad0
+ (id)_collectionsQuery;	// IMP=0x000000010003c9cc
+ (id)_collectionsQueryWithPhotoCollectionType:(id)arg1;	// IMP=0x000000010003c918
+ (id)photosPreviewQueryWithCollectionType:(id)arg1 shuffle:(_Bool)arg2;	// IMP=0x000000010003c8f8
+ (id)photosPreviewQueryWithCollectionID:(id)arg1 shuffle:(_Bool)arg2;	// IMP=0x000000010003c8e0
+ (id)photosPreviewQueryWithCollection:(id)arg1 shuffle:(_Bool)arg2;	// IMP=0x000000010003c854
+ (id)photosQueryWithCollectionID:(id)arg1;	// IMP=0x000000010003c83c
+ (id)photosQueryWithCollection:(id)arg1;	// IMP=0x000000010003c7bc
+ (id)photosPreviewQuery;	// IMP=0x000000010003c7a0
+ (id)photosQuery;	// IMP=0x000000010003c790
+ (id)masterAlbumQuery;	// IMP=0x000000010003c778
+ (id)albumsQuery;	// IMP=0x000000010003c760
+ (id)facesQuery;	// IMP=0x000000010003c748
+ (id)eventsQuery;	// IMP=0x000000010003c730
+ (id)collectionsQuery;	// IMP=0x000000010003c724

@end

