/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:45 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosGraph/PGPotentialMemory.h>

@class NSMutableSet, PGGraphNode, NSArray, NSDate, NSString;

@interface PGPotentialRegionMemory : PGPotentialMemory {

	NSMutableSet* _mutableMomentNodes;
	PGGraphNode* _regionNode;
	long long _year;
	NSArray* _scenedAssets;
	NSDate* _startDate;
	NSDate* _endDate;

}

@property (readonly) PGGraphNode * regionNode;              //@synthesize regionNode=_regionNode - In the implementation block
@property (readonly) long long year;                        //@synthesize year=_year - In the implementation block
@property (readonly) NSString * region; 
@property (retain) NSArray * scenedAssets;                  //@synthesize scenedAssets=_scenedAssets - In the implementation block
@property (retain) NSDate * startDate;                      //@synthesize startDate=_startDate - In the implementation block
@property (retain) NSDate * endDate;                        //@synthesize endDate=_endDate - In the implementation block
-(NSString *)region;
-(long long)year;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(void)setStartDate:(NSDate *)arg1 ;
-(void)setEndDate:(NSDate *)arg1 ;
-(void)addMomentNode:(id)arg1 ;
-(id)initWithRegionNode:(id)arg1 year:(long long)arg2 ;
-(PGGraphNode *)regionNode;
-(void)setScenedAssets:(NSArray *)arg1 ;
-(NSArray *)scenedAssets;
@end
