/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:17 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class SSURLConnectionRequest, NSObject, NSString;

@interface HSAccountStore : NSObject {

	int _defaultsDidChangeToken;
	SSURLConnectionRequest* _groupIDRequest;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                   //@synthesize queue=_queue - In the implementation block
@property (nonatomic,copy) NSString * groupID; 
@property (nonatomic,retain) SSURLConnectionRequest * groupIDRequest;              //@synthesize groupIDRequest=_groupIDRequest - In the implementation block
@property (nonatomic,copy) NSString * appleID; 
@property (nonatomic,copy) NSString * password; 
+(id)defaultStore;
-(void)dealloc;
-(id)init;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSString *)appleID;
-(void)setAppleID:(NSString *)arg1 ;
-(void)clearGroupID;
-(void)_onBackgroundQueue_determineGroupIDWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)canDetermineGroupID;
-(void)clearAllCredentials;
-(SSURLConnectionRequest *)groupIDRequest;
-(void)setGroupIDRequest:(SSURLConnectionRequest *)arg1 ;
-(NSString *)groupID;
-(void)determineGroupIDWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setGroupID:(NSString *)arg1 ;
-(NSString *)password;
-(void)setPassword:(NSString *)arg1 ;
-(void)clearCaches;
@end
