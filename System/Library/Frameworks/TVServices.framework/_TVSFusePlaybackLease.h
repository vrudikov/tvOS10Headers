/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:58 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/TVServices.framework/TVServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SSVPlaybackLeaseDelegate.h>

@class SSVPlaybackLease, NSString;

@interface _TVSFusePlaybackLease : NSObject <SSVPlaybackLeaseDelegate> {

	int _assetCount;
	SSVPlaybackLease* _lease;

}

@property (nonatomic,retain) SSVPlaybackLease * lease;              //@synthesize lease=_lease - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(id)_init;
-(void)getAssetWithRequest:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)playbackLease:(id)arg1 automaticRefreshDidFinishWithResponse:(id)arg2 error:(id)arg3 ;
-(void)playbackLeaseDidEnd:(id)arg1 ;
-(SSVPlaybackLease *)lease;
-(void)setLease:(SSVPlaybackLease *)arg1 ;
-(void)cleanupAsset;
-(void)_endLease;
@end
