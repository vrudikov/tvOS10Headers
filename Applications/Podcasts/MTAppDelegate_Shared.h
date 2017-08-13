//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIApplicationDelegate.h"

@class MTMediaRemoteController, NSString, RTRoutineManager, UIViewController, UIWindow;

@interface MTAppDelegate_Shared : NSObject <UIApplicationDelegate>
{
    UIWindow *_window;	// 8 = 0x8
    id <MTAppController> _appController;	// 16 = 0x10
    MTMediaRemoteController *_mediaRemoteController;	// 24 = 0x18
    RTRoutineManager *_routineManager;	// 32 = 0x20
}

+ (id)createWindow;	// IMP=0x0000000100004b44
@property(retain, nonatomic) RTRoutineManager *routineManager; // @synthesize routineManager=_routineManager;
@property(retain, nonatomic) MTMediaRemoteController *mediaRemoteController; // @synthesize mediaRemoteController=_mediaRemoteController;
@property(retain, nonatomic) id <MTAppController> appController; // @synthesize appController=_appController;
@property(retain, nonatomic) UIWindow *window; // @synthesize window=_window;
- (void).cxx_destruct;	// IMP=0x0000000100005104
- (void)_startMonitoringForPredictedApplicationLaunch;	// IMP=0x0000000100004e20
- (void)application:(id)arg1 didFailToContinueUserActivityWithType:(id)arg2 error:(id)arg3;	// IMP=0x0000000100004ddc
- (_Bool)application:(id)arg1 continueUserActivity:(id)arg2 restorationHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100004ce0
- (_Bool)application:(id)arg1 willContinueUserActivityWithType:(id)arg2;	// IMP=0x0000000100004c3c
- (_Bool)application:(id)arg1 shouldRestoreApplicationState:(id)arg2;	// IMP=0x0000000100004b3c
- (_Bool)application:(id)arg1 shouldSaveApplicationState:(id)arg2;	// IMP=0x0000000100004b34
- (void)application:(id)arg1 handleEventsForBackgroundURLSession:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100004aac
- (void)application:(id)arg1 performFetchWithCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100004924
@property(readonly, nonatomic) UIViewController *rootViewController;
- (void)setupAfterBecomingActive;	// IMP=0x000000010000466c
- (void)applicationDidBecomeActive:(id)arg1;	// IMP=0x0000000100004668
- (void)applicationWillEnterForeground:(id)arg1;	// IMP=0x000000010000462c
- (void)applicationDidEnterBackground:(id)arg1;	// IMP=0x00000001000045a4
- (void)applicationWillResignActive:(id)arg1;	// IMP=0x0000000100004590
- (_Bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;	// IMP=0x0000000100004588
- (_Bool)application:(id)arg1 willFinishLaunchingWithOptions:(id)arg2;	// IMP=0x00000001000041dc
- (_Bool)application:(id)arg1 openURL:(id)arg2 options:(id)arg3;	// IMP=0x0000000100003cc4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

