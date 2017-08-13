//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIApplicationDelegate.h"

@class NSDate, NSString, UINavigationController, UIWindow;

@interface TVSettingsAppDelegate : NSObject <UIApplicationDelegate>
{
    UINavigationController *_navigationController;	// 8 = 0x8
    NSDate *_backgroundedDate;	// 16 = 0x10
    UIWindow *_window;	// 24 = 0x18
}

@property(retain, nonatomic) UIWindow *window; // @synthesize window=_window;
- (void).cxx_destruct;	// IMP=0x0000000100096b64
- (void)_handleAuthKitURLIfNeededFromResourceDictionary:(id)arg1 overViewController:(id)arg2;	// IMP=0x0000000100096648
- (_Bool)_openURLConfiguration:(id)arg1;	// IMP=0x0000000100095634
- (_Bool)application:(id)arg1 openURL:(id)arg2 options:(id)arg3;	// IMP=0x0000000100095458
- (void)applicationWillEnterForeground:(id)arg1;	// IMP=0x000000010009526c
- (void)applicationDidEnterBackground:(id)arg1;	// IMP=0x0000000100095144
- (void)applicationWillTerminate:(id)arg1;	// IMP=0x0000000100095130
- (_Bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;	// IMP=0x0000000100094e64
- (id)_findFirstViewOfClass:(Class)arg1 inViewHierarchy:(id)arg2 depth:(int)arg3;	// IMP=0x000000010003a7f0
- (void)_presentRegionsAlertController;	// IMP=0x000000010003a754
- (void)_performFocusMoveTest:(id)arg1 options:(id)arg2 axis:(int)arg3;	// IMP=0x0000000100039e78
- (void)startScrollTestForCollectionViewClass:(Class)arg1 fromViewHierarchy:(id)arg2 testName:(id)arg3 axis:(int)arg4 options:(id)arg5;	// IMP=0x0000000100039b20
- (void)startSwipeTest:(id)arg1 options:(id)arg2;	// IMP=0x0000000100039920
- (void)startLogTest:(id)arg1;	// IMP=0x00000001000397f4
- (_Bool)application:(id)arg1 runTest:(id)arg2 options:(id)arg3;	// IMP=0x0000000100039508

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

