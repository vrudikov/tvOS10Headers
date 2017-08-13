//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIApplicationDelegate.h"

@class ADWatchdog, NSObject<OS_dispatch_source>, NSString, UIWindow;

@interface ADSAppDelegate : NSObject <UIApplicationDelegate>
{
    _Bool _hasCreatedAdSpace;	// 8 = 0x8
    int _classicModeUnavailableToken;	// 12 = 0xc
    UIWindow *_frontMostWindow;	// 16 = 0x10
    double _lastURLCachePersist;	// 24 = 0x18
    NSObject<OS_dispatch_source> *_memoryNotificationSource;	// 32 = 0x20
    unsigned long long _classicModeUnavailableCounter;	// 40 = 0x28
    ADWatchdog *_mainThreadWatchdog;	// 48 = 0x30
}

+ (void)returnNoClassicModeAssertion;	// IMP=0x000000010001a3a8
+ (void)takeNoClassicModeAssertion;	// IMP=0x000000010001a378
+ (void)didCreateAdSpace;	// IMP=0x0000000100018394
@property(retain, nonatomic) ADWatchdog *mainThreadWatchdog; // @synthesize mainThreadWatchdog=_mainThreadWatchdog;
@property(nonatomic) _Bool hasCreatedAdSpace; // @synthesize hasCreatedAdSpace=_hasCreatedAdSpace;
@property(nonatomic) unsigned long long classicModeUnavailableCounter; // @synthesize classicModeUnavailableCounter=_classicModeUnavailableCounter;
@property(nonatomic) int classicModeUnavailableToken; // @synthesize classicModeUnavailableToken=_classicModeUnavailableToken;
@property(nonatomic) NSObject<OS_dispatch_source> *memoryNotificationSource; // @synthesize memoryNotificationSource=_memoryNotificationSource;
@property(nonatomic) double lastURLCachePersist; // @synthesize lastURLCachePersist=_lastURLCachePersist;
@property(readonly, nonatomic) UIWindow *frontMostWindow; // @synthesize frontMostWindow=_frontMostWindow;
- (void)returnNoClassicModeAssertion;	// IMP=0x000000010001a2c4
- (void)takeNoClassicModeAssertion;	// IMP=0x000000010001a220
- (void)setupNoClassicModeNotificationAndState;	// IMP=0x000000010001a1c0
- (void)applicationWillTerminate:(id)arg1;	// IMP=0x000000010001a168
- (_Bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;	// IMP=0x000000010001a148
- (void)applicationDidFinishLaunching:(id)arg1;	// IMP=0x000000010001a13c
- (void)application:(id)arg1 didFinishLaunchingSuspendedWithOptions:(id)arg2;	// IMP=0x000000010001a130
- (void)_performMigration;	// IMP=0x0000000100019f90
- (void)_postLaunchSetup;	// IMP=0x0000000100019394
- (void)_startWatchdog;	// IMP=0x00000001000192e0
- (void)applicationDidEnterBackground:(id)arg1;	// IMP=0x000000010001926c
- (void)_expireConfiguration;	// IMP=0x00000001000191e8
- (void)_setupInternalSettings;	// IMP=0x0000000100018e44
- (void)_setupiAdID;	// IMP=0x0000000100018bb8
- (void)updateCurrentDSID:(CDUnknownBlockType)arg1;	// IMP=0x00000001000185ec
- (void)_persistURLCache;	// IMP=0x000000010001843c
- (void)prepareForShutdown;	// IMP=0x00000001000183d0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) UIWindow *window;

@end

