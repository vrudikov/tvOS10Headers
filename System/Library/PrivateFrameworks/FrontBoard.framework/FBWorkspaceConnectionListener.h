/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:06:13 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BSXPCConnectionListenerHandler.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString;

@interface FBWorkspaceConnectionListener : NSObject <BSXPCConnectionListenerHandler> {

	NSObject*<OS_dispatch_queue> _connectionDispatcherQueue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(void)handleIncomingConnection:(id)arg1 forService:(id)arg2 ;
@end
