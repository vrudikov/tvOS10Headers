/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:01:15 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Foundation/Foundation-Structs.h>
@class NSLock, NSMutableSet, NSMutableDictionary;

@interface __NSBundleTables : NSObject {

	NSLock* _lock;
	NSMutableSet* _staticFrameworks;
	NSMutableSet* _loadedBundles;
	NSMutableSet* _loadedFrameworks;
	NSMutableDictionary* _resolvedPathToBundles;
	CFDictionaryRef _bundleForClassMap;

}
+(id)bundleTables;
-(void)removeBundle:(id)arg1 forPath:(id)arg2 type:(unsigned long long)arg3 ;
-(void)setBundle:(id)arg1 forClass:(Class)arg2 ;
-(id)loadedBundles;
-(id)allBundles;
-(void)addStaticFrameworkBundles:(id)arg1 ;
-(id)allFrameworks;
-(id)bundleForPath:(id)arg1 ;
-(void)addBundle:(id)arg1 type:(unsigned long long)arg2 ;
-(id)addBundle:(id)arg1 forPath:(id)arg2 ;
-(void)dealloc;
-(id)init;
-(id)bundleForClass:(Class)arg1 ;
@end

