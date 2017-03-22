/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:08:13 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocs/CloudDocs-Structs.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@class NSMutableArray, NSMutableDictionary;

@interface BRNotificationQueue : NSObject <NSFastEnumeration> {

	NSMutableArray* _array;
	NSMutableArray* _callbacks;
	NSMutableDictionary* _index;
	unsigned long long _dequeued;

}

@property (nonatomic,readonly) unsigned long long count; 
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_BR11*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(unsigned long long)count;
-(id)init;
-(void)removeAllObjects;
-(id)description;
-(void)dequeue:(unsigned long long)arg1 block:(/*^block*/id)arg2 ;
-(void)addNotification:(id)arg1 asDead:(BOOL)arg2 ;
-(void)_filterIndex:(id)arg1 ;
-(void)processDequeueCallbacks;
-(void)addDequeueCallback:(/*^block*/id)arg1 ;
@end
