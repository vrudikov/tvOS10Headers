/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:01:29 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSPersistentStoreCache.h>

@class NSSQLCore;

@interface NSSQLRowCache : NSPersistentStoreCache {

	NSSQLCore* _sqlCore;
	int _debug;

}
+(void)initialize;
-(id)sqlCore;
-(id)initWithPersistentStore:(id)arg1 ;
-(void)dealloc;
@end

