/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:07 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Message/MFMailDelivery.h>

@class MFSMTPConnection;

@interface MFSMTPDelivery : MFMailDelivery {

	MFSMTPConnection* _connection;

}
-(void)dealloc;
-(id)deliverMessageData:(id)arg1 toRecipients:(id)arg2 ;
-(Class)deliveryClass;
-(void)_openConnection;
-(void)setAccount:(id)arg1 ;
@end

