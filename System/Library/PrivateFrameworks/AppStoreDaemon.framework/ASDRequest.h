/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:15 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppStoreDaemon/ASDBaseClient.h>
#import <libobjc.A.dylib/ASDRequestClient.h>

@class NSXPCConnection, NSString;

@interface ASDRequest : ASDBaseClient <ASDRequestClient> {

	NSXPCConnection* _connection;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_handleResponse:(id)arg1 error:(id)arg2 ;
-(void)requestCompletedWithResponse:(id)arg1 error:(id)arg2 ;
-(void)_startRequestType:(unsigned long long)arg1 withOptions:(id)arg2 ;
@end
