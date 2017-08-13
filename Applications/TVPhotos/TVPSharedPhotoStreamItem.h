//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TVSDataItem.h"

@class ACAccount, MSASAlbum, MSASAssetCollection;

@interface TVPSharedPhotoStreamItem : TVSDataItem
{
    MSASAssetCollection *_asset;	// 8 = 0x8
    ACAccount *_appleAccount;	// 16 = 0x10
    MSASAlbum *_albumContainingAsset;	// 24 = 0x18
}

+ (id)_commentGUIDForLastViewedCommentDate:(id)arg1 comments:(id)arg2;	// IMP=0x00000001000298c8
+ (id)_userDictionaryFromMSASComment:(id)arg1;	// IMP=0x00000001000297d0
+ (id)_commentDictionaryFromMSASComment:(id)arg1;	// IMP=0x0000000100029544
+ (id)itemWithDataClient:(id)arg1 asset:(id)arg2 accessObject:(id)arg3;	// IMP=0x000000010002810c
@property(retain, nonatomic) MSASAlbum *albumContainingAsset; // @synthesize albumContainingAsset=_albumContainingAsset;
@property(retain, nonatomic) ACAccount *appleAccount; // @synthesize appleAccount=_appleAccount;
@property(retain, nonatomic) MSASAssetCollection *asset; // @synthesize asset=_asset;
- (void).cxx_destruct;	// IMP=0x0000000100029af0
- (id)concreteValueForProperty:(id)arg1;	// IMP=0x0000000100028ca0
- (void)resolveMediaURLWithAccessObject:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100028afc
- (id)initWithDataClient:(id)arg1 asset:(id)arg2 appleAccount:(id)arg3 albumContainingAsset:(id)arg4;	// IMP=0x00000001000289dc

@end

