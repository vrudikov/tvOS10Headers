//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TVRadioUtilities : NSObject
{
}

+ (_Bool)_isRadioItemAd:(id)arg1 withDataType:(id)arg2;	// IMP=0x0000000100082410
+ (void)performWhenRadioConnected:(CDUnknownBlockType)arg1;	// IMP=0x000000010008221c
+ (_Bool)isRadioPlaying;	// IMP=0x00000001000821b8
+ (void)getRecentStationsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100082128
+ (id)sharedRadioRecentStationsController;	// IMP=0x00000001000820a8
+ (void)lookupRadioItemInMusicLibrary:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100081c7c
+ (_Bool)purchaseSongWithRadioItem:(id)arg1;	// IMP=0x00000001000815b4
+ (void)_startStationFromMediaItem:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100081284
+ (void)startStationFromArtistName:(id)arg1;	// IMP=0x0000000100080fe8
+ (void)startStationFromStoreID:(id)arg1;	// IMP=0x0000000100080d48
+ (void)startStationFromMediaItem:(id)arg1;	// IMP=0x0000000100080cc0
+ (_Bool)submitLikeQueryForTrack:(id)arg1 likedState:(long long)arg2;	// IMP=0x000000010008088c
+ (id)musicPlayer;	// IMP=0x0000000100080830
+ (_Bool)isRadioItemAudioAd:(id)arg1;	// IMP=0x0000000100080818
+ (_Bool)isRadioItemAd:(id)arg1;	// IMP=0x0000000100080808
+ (id)navigationController;	// IMP=0x00000001000807ac
+ (id)currentRadioDataItemForPlayer:(id)arg1;	// IMP=0x000000010008071c
+ (_Bool)isShowingActivityIndicator;	// IMP=0x000000010008068c
+ (void)replaceTopViewControllerWithViewController:(id)arg1 animated:(_Bool)arg2;	// IMP=0x000000010008058c
+ (void)replaceTopViewControllerWithViewController:(id)arg1;	// IMP=0x000000010008057c
+ (void)pushViewController:(id)arg1;	// IMP=0x00000001000804dc
+ (void)hideActivityIndicator;	// IMP=0x0000000100080474
+ (void)showActivityIndicator;	// IMP=0x00000001000803f8
+ (void)displayDialogWithDictionary:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010007fe14
+ (void)displayFailureDialogForError:(id)arg1;	// IMP=0x000000010007fac0
+ (id)songBasedStationCreationError;	// IMP=0x000000010007f920
+ (id)artistBasedStationCreationError;	// IMP=0x000000010007f780
+ (id)notOptedInError;	// IMP=0x000000010007f5e0
+ (id)freeloaderError;	// IMP=0x000000010007f440
+ (id)addStationError;	// IMP=0x000000010007f2a0
+ (id)errorInfoForNonexistentStationWithName:(id)arg1;	// IMP=0x000000010007f0f0
+ (id)playbackErrorInfoForStationWithName:(id)arg1;	// IMP=0x000000010007ef40
+ (id)serviceUnavailableError;	// IMP=0x000000010007eda0
+ (id)artworkURLFromCollection:(id)arg1;	// IMP=0x000000010007ebc8
+ (id)artworkURLFromVariants:(id)arg1;	// IMP=0x000000010007eb34

@end

