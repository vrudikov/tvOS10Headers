/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:01:20 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface BSPluginManagerCoordinator : NSObject {

	NSMutableDictionary* _managersByBundleID;

}
+(id)sharedInstance;
-(void)registerPluginsFromBundle:(id)arg1 ;
-(id)pluginManagerForBundle:(id)arg1 ;
-(void)registerPlugins;
-(id)mainPluginManager;
-(id)_init;
@end
