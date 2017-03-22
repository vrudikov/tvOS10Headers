/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:01:19 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source, OS_dispatch_queue;
#import <BaseBoard/BaseBoard-Structs.h>
@class NSObject;

@interface BSDispatchSource : NSObject {

	NSObject*<OS_dispatch_source> _source;
	NSObject*<OS_dispatch_queue> _queue;
	BOOL _invalidated;
	/*^block*/id _eventHandler;
	/*^block*/id _cancelHandler;

}

@property (nonatomic,copy) id eventHandler;                                            //@synthesize eventHandler=_eventHandler - In the implementation block
@property (nonatomic,copy) id cancelHandler;                                           //@synthesize cancelHandler=_cancelHandler - In the implementation block
@property (nonatomic,retain,readonly) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
-(id)initWithType:(dispatch_source_type_sRef)arg1 handle:(unsigned long long)arg2 mask:(unsigned long long)arg3 queue:(id)arg4 configureSourceBlock:(/*^block*/id)arg5 ;
-(void)dealloc;
-(void)invalidate;
-(void)setCancelHandler:(id)arg1 ;
-(void)resume;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)cancelHandler;
-(void)setEventHandler:(id)arg1 ;
-(id)eventHandler;
@end
