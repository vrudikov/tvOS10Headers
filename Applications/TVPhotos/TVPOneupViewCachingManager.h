//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TVPCachingManager.h"

@class NSArray, TVOneupView;

@interface TVPOneupViewCachingManager : TVPCachingManager
{
    TVOneupView *_oneupView;	// 8 = 0x8
    id <TVPOneupViewCachingManagerDataSource> _dataSource;	// 16 = 0x10
    NSArray *_previousPreheatAssets;	// 24 = 0x18
}

@property(retain, nonatomic) NSArray *previousPreheatAssets; // @synthesize previousPreheatAssets=_previousPreheatAssets;
@property(nonatomic) __weak id <TVPOneupViewCachingManagerDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) TVOneupView *oneupView; // @synthesize oneupView=_oneupView;
- (void).cxx_destruct;	// IMP=0x000000010001e798
- (void)_updateCachedAssets;	// IMP=0x000000010001e2c8
- (void)updatePrefetchedAssets;	// IMP=0x000000010001e2bc
- (id)livePhotoRequestOptions;	// IMP=0x000000010001e26c
- (id)requestOptions;	// IMP=0x000000010001e228
- (long long)contentMode;	// IMP=0x000000010001e220
- (struct CGSize)targetSize;	// IMP=0x000000010001e1bc
- (void)startPrefetchingAssets;	// IMP=0x000000010001e1b0

@end
