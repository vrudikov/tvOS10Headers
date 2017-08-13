//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "LSApplicationWorkspaceObserverProtocol.h"

@class NSOperationQueue, NSString;

@interface PBSnapshotService : NSObject <LSApplicationWorkspaceObserverProtocol>
{
    NSOperationQueue *_wallpaperQueue;	// 8 = 0x8
}

+ (void)_setWallpaperImage:(id)arg1 forVariant:(long long)arg2 userInterfaceStyle:(long long)arg3;	// IMP=0x00000001000437bc
+ (id)_plusDImageFromImage:(id)arg1 userInterfaceStyle:(long long)arg2;	// IMP=0x0000000100043674
+ (id)_blurredImageWithImage:(id)arg1 forVariant:(long long)arg2 userInterfaceStyle:(long long)arg3;	// IMP=0x0000000100043550
+ (id)sharedInstance;	// IMP=0x00000001000408f8
@property(readonly, nonatomic) NSOperationQueue *wallpaperQueue; // @synthesize wallpaperQueue=_wallpaperQueue;
- (void).cxx_destruct;	// IMP=0x00000001000438fc
- (long long)_userInterfaceStyleForFocusedProcess;	// IMP=0x000000010004343c
- (id)_sortDescriptors;	// IMP=0x0000000100043334
- (void)_updateSnapshot:(id)arg1 withContext:(id)arg2 forProcessWithIdentifier:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000100042970
- (void)_ingestDefaultLaunchImageForBundleIdentifier:(id)arg1;	// IMP=0x0000000100042628
- (void)_invalidateSnapshotsWithMask:(unsigned long long)arg1 forBundleIdentifier:(id)arg2;	// IMP=0x00000001000424fc
- (void)applicationsDidUninstall:(id)arg1;	// IMP=0x00000001000423ac
- (void)applicationsDidInstall:(id)arg1;	// IMP=0x0000000100042260
- (void)invalidateSnapshotsForBundleIdentifier:(id)arg1;	// IMP=0x0000000100042248
- (void)_saveWallpaperForSnapshotImage:(id)arg1 synchronously:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001000417f8
- (void)saveWallpaperForSnapshotImage:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000417a4
- (void)setupWallpaper;	// IMP=0x0000000100041494
- (void)saveSnapshotForScene:(id)arg1 context:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100041154
- (id)loadSnapshotImageWithRequest:(id)arg1;	// IMP=0x0000000100040c78
- (void)ingestLaunchImages;	// IMP=0x0000000100040af4
- (void)dealloc;	// IMP=0x0000000100040a78
- (id)init;	// IMP=0x00000001000409ac

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

