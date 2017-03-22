/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:27 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, CPLRUDictionary, NSMapTable, NSOperationQueue;

@interface MPStoreItemMetadataRequestController : NSObject {

	NSObject*<OS_dispatch_queue> _accessQueue;
	CPLRUDictionary* _itemIdentifierToCompositeStoreItemMetadataLRUDictionary;
	NSMapTable* _itemIdentifierToCompositeStoreItemMetadataMapTable;
	NSOperationQueue* _operationQueue;

}
+(id)sharedStoreItemMetadataRequestController;
+(unsigned long long)optimalBatchSize;
-(id)init;
-(id)addStoreItemMetadata:(id)arg1 ;
-(void)requestStoreItemMetadataForReason:(unsigned long long)arg1 withItemIdentifiers:(id)arg2 responseHandler:(/*^block*/id)arg3 ;
-(void)getStoreItemMetadataForRequest:(id)arg1 responseHandler:(/*^block*/id)arg2 ;
-(id)_addStoreItemMetadata:(id)arg1 forItemIdentifier:(id)arg2 ;
-(id)_cachedStoreItemMetadataWithItemIdentifier:(id)arg1 ;
-(BOOL)_storeItemMetadata:(id)arg1 hasCompleteDataForRequestReason:(unsigned long long)arg2 ;
-(id)_storePlatformKeyProfileForRequestReason:(unsigned long long)arg1 ;
-(void)_resolveItemIdentifiers:(id)arg1 withKeyProfile:(id)arg2 storeBagDictionary:(id)arg3 originatingRequest:(id)arg4 responseHandler:(/*^block*/id)arg5 ;
-(id)cachedResponseForItemIdentifiers:(id)arg1 ;
@end
