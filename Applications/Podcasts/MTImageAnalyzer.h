//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTSingleton.h"

@class NSCache;

@interface MTImageAnalyzer : MTSingleton
{
    NSCache *_memoryCache;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000100087268
- (id)colorThemeForArtwork:(id)arg1;	// IMP=0x00000001000870d8
- (id)addImage:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000100086d90
- (id)colorThemeForPodcastUuid:(id)arg1;	// IMP=0x0000000100086a24
- (id)init;	// IMP=0x00000001000869b0

@end

