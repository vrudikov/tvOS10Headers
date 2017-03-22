/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:41 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/Frameworks/MediaMiningKit.framework/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CLSInvestigationItem;
@interface CLSRegionsHierarchicalClusteringObject : NSObject {

	id<CLSInvestigationItem> _object;
	unsigned long long _index;

}

@property (nonatomic,readonly) id<CLSInvestigationItem> object;              //@synthesize object=_object - In the implementation block
@property (assign) unsigned long long index;                                 //@synthesize index=_index - In the implementation block
+(id)clusterObjectWithObject:(id)arg1 index:(unsigned long long)arg2 ;
-(id<CLSInvestigationItem>)object;
-(unsigned long long)index;
-(void)setIndex:(unsigned long long)arg1 ;
@end
