/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:13 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol VSMessageQueueDelegate;
@class NSMutableArray;

@interface VSMessageQueue : NSObject {

	id<VSMessageQueueDelegate> _delegate;
	NSMutableArray* _messages;

}

@property (nonatomic,retain) NSMutableArray * messages;                               //@synthesize messages=_messages - In the implementation block
@property (assign,nonatomic,__weak) id<VSMessageQueueDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setDelegate:(id<VSMessageQueueDelegate>)arg1 ;
-(id)init;
-(id<VSMessageQueueDelegate>)delegate;
-(NSMutableArray *)messages;
-(void)addMessage:(id)arg1 ;
-(void)setMessages:(NSMutableArray *)arg1 ;
-(id)removeAllMessages;
@end
