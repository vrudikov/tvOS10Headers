/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:08:26 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol IDSSessionDelegate <NSObject>
@optional
-(void)session:(id)arg1 receivedInvitationAcceptFromID:(id)arg2;
-(void)session:(id)arg1 receivedInvitationDeclineFromID:(id)arg2;
-(void)session:(id)arg1 receivedInvitationCancelFromID:(id)arg2;
-(void)sessionStarted:(id)arg1;
-(void)sessionEnded:(id)arg1;
-(void)sessionEnded:(id)arg1 withReason:(unsigned)arg2 error:(id)arg3;
-(void)session:(id)arg1 didReceiveData:(id)arg2;

@end

