/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:55 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ACDDataclassOwnersManagerProtocol;
@class NSXPCConnection;

@interface ACDDataclassOwnersManager : NSObject {

	id<ACDDataclassOwnersManagerProtocol> _remoteDOM;
	NSXPCConnection* _connection;

}
-(BOOL)performDataclassActions:(id)arg1 forAccount:(id)arg2 withChildren:(id)arg3 ;
-(id)actionsForEnablingDataclass:(id)arg1 onAccount:(id)arg2 ;
-(id)actionsForDisablingDataclass:(id)arg1 onAccount:(id)arg2 ;
-(id)actionsForDeletingAccount:(id)arg1 affectingDataclass:(id)arg2 ;
-(BOOL)isPerformingDataclassActionsForAccount:(id)arg1 ;
-(void)_connectToRemoteDataclassOwnersManager;
-(id)_remoteDOM;
-(id)actionsForAddingAccount:(id)arg1 affectingDataclass:(id)arg2 ;
@end
