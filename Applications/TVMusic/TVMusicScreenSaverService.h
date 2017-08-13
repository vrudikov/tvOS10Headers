//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TVPhotoServiceInterface.h"

@class NSString, TVSCloudDataClient;

@interface TVMusicScreenSaverService : NSObject <TVPhotoServiceInterface>
{
    TVSCloudDataClient *_cloudDataClient;	// 8 = 0x8
    id <TVPhotoServerInterface> _remotePhotoServerInterface;	// 16 = 0x10
}

@property(retain, nonatomic) id <TVPhotoServerInterface> remotePhotoServerInterface; // @synthesize remotePhotoServerInterface=_remotePhotoServerInterface;
@property(retain, nonatomic) TVSCloudDataClient *cloudDataClient; // @synthesize cloudDataClient=_cloudDataClient;
- (void).cxx_destruct;	// IMP=0x0000000100035624
- (void)_fetchArtworkURLsForDataItems:(id)arg1 responseBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000100034dc8
- (void)_fetchPhotoAssetsForAlbumArtwork:(CDUnknownBlockType)arg1;	// IMP=0x00000001000349c8
- (void)registerRemotePhotoServer:(id)arg1;	// IMP=0x00000001000349b4
- (void)photoAssetsWithOptions:(id)arg1 responseBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000001000349a4
- (id)initWithDataClient:(id)arg1;	// IMP=0x0000000100034918

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

