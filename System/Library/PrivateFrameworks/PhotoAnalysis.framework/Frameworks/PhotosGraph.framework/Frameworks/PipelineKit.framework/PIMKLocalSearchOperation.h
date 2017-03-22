/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:44 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/Frameworks/PipelineKit.framework/PipelineKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PipelineKit/PIOperationSubclass.h>

@protocol OS_dispatch_source;
@class NSObject;

@interface PIMKLocalSearchOperation : PIOperationSubclass {

	NSObject*<OS_dispatch_source> _timer;
	id _ticket;

}
+(id)operationWithRegion:(id)arg1 categories:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
+(id)operationWithQuery:(id)arg1 inRegion:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
+(id)operationWithRegion:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
+(id)operationWithMUIDs:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
@end
