/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:02:42 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <FrontBoardServices/FBSSceneClientSettings.h>
#import <UIKit/UIApplicationSceneClientSettings.h>
@class NSString;


@protocol UIApplicationSceneClientSettings <NSObject>
@property (nonatomic,readonly) long long statusBarStyle; 
@property (nonatomic,readonly) BOOL statusBarHidden; 
@property (getter=isStatusBarForegroundTransparent,nonatomic,readonly) BOOL statusBarForegroundTransparent; 
@property (nonatomic,readonly) unsigned statusBarContextID; 
@property (nonatomic,readonly) long long defaultStatusBarStyle; 
@property (nonatomic,readonly) BOOL defaultStatusBarHidden; 
@property (nonatomic,copy,readonly) NSString * defaultPNGName; 
@property (nonatomic,readonly) double defaultPNGExpirationTime; 
@property (nonatomic,readonly) long long compatibilityMode; 
@property (nonatomic,readonly) BOOL deviceOrientationEventsEnabled; 
@property (nonatomic,readonly) BOOL interfaceOrientationChangesDisabled; 
@property (nonatomic,readonly) long long interfaceOrientation; 
@property (nonatomic,readonly) unsigned long long supportedInterfaceOrientations; 
@property (nonatomic,readonly) BOOL idleTimerDisabled; 
@property (nonatomic,readonly) unsigned long long proximityDetectionModes; 
@property (nonatomic,readonly) long long controlCenterRevealMode; 
@property (nonatomic,readonly) long long notificationCenterRevealMode; 
@property (nonatomic,readonly) UIEdgeInsets primaryWindowOverlayInsets; 
@property (nonatomic,readonly) long long backgroundStyle; 
@property (nonatomic,readonly) BOOL idleModeVisualEffectsEnabled; 
@property (nonatomic,readonly) long long whitePointAdaptivityStyle; 
@required
-(long long)interfaceOrientation;
-(BOOL)statusBarHidden;
-(long long)statusBarStyle;
-(long long)backgroundStyle;
-(BOOL)isStatusBarForegroundTransparent;
-(unsigned long long)supportedInterfaceOrientations;
-(unsigned long long)proximityDetectionModes;
-(long long)compatibilityMode;
-(NSString *)defaultPNGName;
-(BOOL)deviceOrientationEventsEnabled;
-(unsigned)statusBarContextID;
-(long long)defaultStatusBarStyle;
-(BOOL)defaultStatusBarHidden;
-(double)defaultPNGExpirationTime;
-(BOOL)interfaceOrientationChangesDisabled;
-(BOOL)idleTimerDisabled;
-(long long)controlCenterRevealMode;
-(long long)notificationCenterRevealMode;
-(UIEdgeInsets)primaryWindowOverlayInsets;
-(BOOL)idleModeVisualEffectsEnabled;
-(long long)whitePointAdaptivityStyle;

@end


@class NSString;

@interface UIApplicationSceneClientSettings : FBSSceneClientSettings <UIApplicationSceneClientSettings>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long statusBarStyle; 
@property (nonatomic,readonly) BOOL statusBarHidden; 
@property (getter=isStatusBarForegroundTransparent,nonatomic,readonly) BOOL statusBarForegroundTransparent; 
@property (nonatomic,readonly) unsigned statusBarContextID; 
@property (nonatomic,readonly) long long defaultStatusBarStyle; 
@property (nonatomic,readonly) BOOL defaultStatusBarHidden; 
@property (nonatomic,copy,readonly) NSString * defaultPNGName; 
@property (nonatomic,readonly) double defaultPNGExpirationTime; 
@property (nonatomic,readonly) long long compatibilityMode; 
@property (nonatomic,readonly) BOOL deviceOrientationEventsEnabled; 
@property (nonatomic,readonly) BOOL interfaceOrientationChangesDisabled; 
@property (nonatomic,readonly) long long interfaceOrientation; 
@property (nonatomic,readonly) unsigned long long supportedInterfaceOrientations; 
@property (nonatomic,readonly) BOOL idleTimerDisabled; 
@property (nonatomic,readonly) unsigned long long proximityDetectionModes; 
@property (nonatomic,readonly) long long controlCenterRevealMode; 
@property (nonatomic,readonly) long long notificationCenterRevealMode; 
@property (nonatomic,readonly) UIEdgeInsets primaryWindowOverlayInsets; 
@property (nonatomic,readonly) long long backgroundStyle; 
@property (nonatomic,readonly) BOOL idleModeVisualEffectsEnabled; 
@property (nonatomic,readonly) long long whitePointAdaptivityStyle; 
-(long long)interfaceOrientation;
-(BOOL)isUISubclass;
-(BOOL)statusBarHidden;
-(long long)statusBarStyle;
-(long long)backgroundStyle;
-(BOOL)isStatusBarForegroundTransparent;
-(unsigned long long)supportedInterfaceOrientations;
-(unsigned long long)proximityDetectionModes;
-(long long)compatibilityMode;
-(NSString *)defaultPNGName;
-(id)keyDescriptionForSetting:(unsigned long long)arg1 ;
-(id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(BOOL)deviceOrientationEventsEnabled;
-(unsigned)statusBarContextID;
-(long long)defaultStatusBarStyle;
-(BOOL)defaultStatusBarHidden;
-(double)defaultPNGExpirationTime;
-(BOOL)interfaceOrientationChangesDisabled;
-(BOOL)idleTimerDisabled;
-(long long)controlCenterRevealMode;
-(long long)notificationCenterRevealMode;
-(UIEdgeInsets)primaryWindowOverlayInsets;
-(BOOL)idleModeVisualEffectsEnabled;
-(long long)whitePointAdaptivityStyle;
-(id)keyDescriptionForOtherSetting:(unsigned long long)arg1 ;
-(id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofOtherSetting:(unsigned long long)arg3 ;
@end
