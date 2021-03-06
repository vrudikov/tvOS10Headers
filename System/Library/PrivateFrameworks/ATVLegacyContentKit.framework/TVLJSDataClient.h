/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:17 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVLegacyContentKit/ATVLegacyContentKit-Structs.h>
#import <TVServices/TVSDataClient.h>

@protocol OS_dispatch_queue, OS_dispatch_source;
@class TVLLegacyJSContext, NSObject, TVLAppliance;

@interface TVLJSDataClient : TVSDataClient {

	TVLLegacyJSContext* _jsContext;
	NSObject*<OS_dispatch_queue> _jsContextAccessQueue;
	NSObject*<OS_dispatch_source> _jsContextPurgeTimer;
	TVLAppliance* _appliance;

}

@property (nonatomic,readonly) TVLAppliance * appliance;              //@synthesize appliance=_appliance - In the implementation block
+(id)dataPropertyToFeedProperty:(id)arg1 ;
+(id)_dataTypeToFeedType:(id)arg1 ;
+(id)dataTypeFromFeedType:(id)arg1 ;
-(id)imageKeyForObject:(id)arg1 ;
-(id)loadImageForObject:(id)arg1 scaleToSize:(CGSize)arg2 cropToFit:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)cancelLoad:(id)arg1 ;
-(void)concreteDataClientConnect;
-(void)concreteDataClientDisconnect;
-(BOOL)processQueryAsync:(id)arg1 ;
-(void)executeQuery:(id)arg1 withCompletionQueue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(TVLAppliance *)appliance;
-(id)initWithAppliance:(id)arg1 ;
-(id)_queryDictionaryForQuery:(id)arg1 ;
-(void)_accessJSContextWithSuccessBlock:(/*^block*/id)arg1 failureBlock:(/*^block*/id)arg2 ;
-(id)_makeJSContext;
-(id)imageURLWithAsset:(id)arg1 size:(CGSize)arg2 crop:(BOOL)arg3 ;
@end

