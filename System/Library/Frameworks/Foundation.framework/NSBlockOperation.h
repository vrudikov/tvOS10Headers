/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:01:09 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class NSArray;

@interface NSBlockOperation : NSOperation {

	id _private2;
	void* _reserved2;

}

@property (copy,readonly) NSArray * executionBlocks; 
+(id)blockOperationWithBlock:(/*^block*/id)arg1 ;
-(NSArray *)executionBlocks;
-(void)dealloc;
-(id)init;
-(void)main;
-(id)initWithBlock:(/*^block*/id)arg1 ;
-(void)addExecutionBlock:(/*^block*/id)arg1 ;
@end

