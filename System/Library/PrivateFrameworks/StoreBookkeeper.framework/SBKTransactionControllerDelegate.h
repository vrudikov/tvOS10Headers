/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:49 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SBKTransactionControllerDelegate <NSObject>
@optional
-(BOOL)transactionController:(id)arg1 shouldScheduleTransaction:(id)arg2;

@required
-(BOOL)transactionController:(id)arg1 transactionDidFail:(id)arg2 error:(id)arg3;
-(void)transactionController:(id)arg1 transactionDidCancel:(id)arg2 error:(id)arg3;
-(void)transactionController:(id)arg1 transactionDidFinish:(id)arg2;

@end
