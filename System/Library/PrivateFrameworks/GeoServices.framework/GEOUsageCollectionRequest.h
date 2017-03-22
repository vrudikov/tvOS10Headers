/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:21 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, GEOABExperimentAssignment;

@interface GEOUsageCollectionRequest : PBRequest <NSCopying> {

	NSMutableArray* _abExperimentAssignments;
	GEOABExperimentAssignment* _tilesAbExperimentAssignment;
	NSMutableArray* _timeToLeaveHypothesisFeedbackCollections;
	NSMutableArray* _timeToLeaveInitialTravelTimeFeedbackCollections;

}

@property (nonatomic,retain) NSMutableArray * abExperimentAssignments;                                      //@synthesize abExperimentAssignments=_abExperimentAssignments - In the implementation block
@property (nonatomic,retain) NSMutableArray * timeToLeaveHypothesisFeedbackCollections;                     //@synthesize timeToLeaveHypothesisFeedbackCollections=_timeToLeaveHypothesisFeedbackCollections - In the implementation block
@property (nonatomic,retain) NSMutableArray * timeToLeaveInitialTravelTimeFeedbackCollections;              //@synthesize timeToLeaveInitialTravelTimeFeedbackCollections=_timeToLeaveInitialTravelTimeFeedbackCollections - In the implementation block
@property (nonatomic,readonly) BOOL hasTilesAbExperimentAssignment; 
@property (nonatomic,retain) GEOABExperimentAssignment * tilesAbExperimentAssignment;                       //@synthesize tilesAbExperimentAssignment=_tilesAbExperimentAssignment - In the implementation block
+(Class)abExperimentAssignmentType;
+(Class)timeToLeaveHypothesisFeedbackCollectionType;
+(Class)timeToLeaveInitialTravelTimeFeedbackCollectionType;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(unsigned)requestTypeCode;
-(Class)responseClass;
-(void)clearAbExperimentAssignments;
-(void)addAbExperimentAssignment:(id)arg1 ;
-(unsigned long long)abExperimentAssignmentsCount;
-(id)abExperimentAssignmentAtIndex:(unsigned long long)arg1 ;
-(void)clearTimeToLeaveHypothesisFeedbackCollections;
-(void)addTimeToLeaveHypothesisFeedbackCollection:(id)arg1 ;
-(unsigned long long)timeToLeaveHypothesisFeedbackCollectionsCount;
-(id)timeToLeaveHypothesisFeedbackCollectionAtIndex:(unsigned long long)arg1 ;
-(void)clearTimeToLeaveInitialTravelTimeFeedbackCollections;
-(void)addTimeToLeaveInitialTravelTimeFeedbackCollection:(id)arg1 ;
-(unsigned long long)timeToLeaveInitialTravelTimeFeedbackCollectionsCount;
-(id)timeToLeaveInitialTravelTimeFeedbackCollectionAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasTilesAbExperimentAssignment;
-(NSMutableArray *)abExperimentAssignments;
-(void)setAbExperimentAssignments:(NSMutableArray *)arg1 ;
-(NSMutableArray *)timeToLeaveHypothesisFeedbackCollections;
-(void)setTimeToLeaveHypothesisFeedbackCollections:(NSMutableArray *)arg1 ;
-(NSMutableArray *)timeToLeaveInitialTravelTimeFeedbackCollections;
-(void)setTimeToLeaveInitialTravelTimeFeedbackCollections:(NSMutableArray *)arg1 ;
-(GEOABExperimentAssignment *)tilesAbExperimentAssignment;
-(void)setTilesAbExperimentAssignment:(GEOABExperimentAssignment *)arg1 ;
@end
