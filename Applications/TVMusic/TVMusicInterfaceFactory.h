//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "_TVInterfaceCreatingPrivate.h"

@class NSString, TVMusicCloudViewController, TVSPlayer;

@interface TVMusicInterfaceFactory : NSObject <_TVInterfaceCreatingPrivate>
{
    TVMusicCloudViewController *_musicCloudViewController;	// 8 = 0x8
    TVSPlayer *_player;	// 16 = 0x10
}

+ (id)sharedInterfaceFactory;	// IMP=0x000000010002c500
+ (void)initialize;	// IMP=0x000000010002c490
@property(nonatomic) __weak TVSPlayer *player; // @synthesize player=_player;
- (void).cxx_destruct;	// IMP=0x000000010002cf1c
- (id)_imageProxyForElement:(id)arg1;	// IMP=0x000000010002ccf4
- (id)_styleSheetURLForTemplate:(id)arg1;	// IMP=0x000000010002cbec
- (Class)collectionViewCellClassForElement:(id)arg1;	// IMP=0x000000010002cae8
- (id)viewForElement:(id)arg1 existingView:(id)arg2;	// IMP=0x000000010002c9b8
- (id)viewControllerForElement:(id)arg1 existingViewController:(id)arg2;	// IMP=0x000000010002c854
- (void)setup;	// IMP=0x000000010002c580

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

