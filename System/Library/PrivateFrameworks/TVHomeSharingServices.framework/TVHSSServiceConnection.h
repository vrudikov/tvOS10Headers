/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:48 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/TVHomeSharingServices.framework/TVHomeSharingServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVHomeSharingServices/TVHSSServiceClientProtocol.h>

@protocol TVHSSServiceConnectionDelegate;
@class NSXPCConnection, NSString;

@interface TVHSSServiceConnection : NSObject <TVHSSServiceClientProtocol> {

	id<TVHSSServiceConnectionDelegate> _delegate;
	NSXPCConnection* _connection;

}

@property (nonatomic,readonly) NSXPCConnection * connection;                                  //@synthesize connection=_connection - In the implementation block
@property (assign,nonatomic,__weak) id<TVHSSServiceConnectionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id<TVHSSServiceConnectionDelegate>)arg1 ;
-(id)init;
-(id<TVHSSServiceConnectionDelegate>)delegate;
-(NSXPCConnection *)connection;
-(id)serviceProxy;
-(void)_handleConnectionInvalidation;
-(void)_handleConnectionInterruption;
-(void)mediaServerDiscoveryConfigurationDidChange;
-(void)mediaServersDidChange;
-(void)mediaServerClientConfigurationDidChangeWithMediaServerID:(id)arg1 ;
-(void)mediaServerWithID:(id)arg1 dataDidChange:(id)arg2 ;
-(void)lastAccessedMediaServerInfoDidChange;
-(id)serviceProxyWithErrorHandler:(/*^block*/id)arg1 ;
@end

