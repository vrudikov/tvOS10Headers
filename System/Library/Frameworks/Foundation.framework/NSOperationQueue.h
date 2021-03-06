/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:01:09 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSString;

@interface NSOperationQueue : NSObject {

	id _private;
	void* _reserved;

}

@property (copy,readonly) NSArray * operations; 
@property (readonly) unsigned long long operationCount; 
@property (assign) long long maxConcurrentOperationCount; 
@property (getter=isSuspended) BOOL suspended; 
@property (copy) NSString * name; 
@property (assign) long long qualityOfService; 
@property (assign) NSObject*<OS_dispatch_queue> underlyingQueue; 
+(id)mainQueue;
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
+(id)currentQueue;
-(id)__;
-(BOOL)overcommitsOperations;
-(void)setOvercommitsOperations:(BOOL)arg1 ;
-(BOOL)isSuspended;
-(void)dealloc;
-(id)init;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)setMaxConcurrentOperationCount:(long long)arg1 ;
-(void)addOperationWithBlock:(/*^block*/id)arg1 ;
-(NSObject*<OS_dispatch_queue>)underlyingQueue;
-(void)cancelAllOperations;
-(void)waitUntilAllOperationsAreFinished;
-(NSArray *)operations;
-(unsigned long long)operationCount;
-(void)addOperation:(id)arg1 ;
-(void)setSuspended:(BOOL)arg1 ;
-(void)setQualityOfService:(long long)arg1 ;
-(void)setUnderlyingQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(long long)qualityOfService;
-(void)addOperations:(id)arg1 waitUntilFinished:(BOOL)arg2 ;
-(long long)maxConcurrentOperationCount;
@end

