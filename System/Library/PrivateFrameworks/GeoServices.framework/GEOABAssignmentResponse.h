/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:30 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, NSMutableArray, GEOABClientConfig, GEOABSecondPartyPlaceRequestClientMetaData, NSString;

@interface GEOABAssignmentResponse : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	unsigned long long _refreshIntervalSeconds;
	double _timestamp;
	NSMutableArray* _assignments;
	GEOABClientConfig* _clientConfig;
	GEOABSecondPartyPlaceRequestClientMetaData* _parsecClientMetaData;
	GEOABSecondPartyPlaceRequestClientMetaData* _rapClientMetaData;
	NSString* _requestGuid;
	GEOABSecondPartyPlaceRequestClientMetaData* _siriClientMetaData;
	NSString* _sourceURL;
	BOOL _invalidatePoiCache;
	BOOL _invalidateTileCache;
	SCD_Struct_GE69 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) double timestamp; 
@property (nonatomic,readonly) BOOL hasSourceURL; 
@property (nonatomic,retain) NSString * sourceURL; 
@property (nonatomic,readonly) BOOL hasRequestGuid; 
@property (nonatomic,retain) NSString * requestGuid;                                                         //@synthesize requestGuid=_requestGuid - In the implementation block
@property (nonatomic,retain) NSMutableArray * assignments;                                                   //@synthesize assignments=_assignments - In the implementation block
@property (assign,nonatomic) BOOL hasInvalidateTileCache; 
@property (assign,nonatomic) BOOL invalidateTileCache;                                                       //@synthesize invalidateTileCache=_invalidateTileCache - In the implementation block
@property (assign,nonatomic) BOOL hasInvalidatePoiCache; 
@property (assign,nonatomic) BOOL invalidatePoiCache;                                                        //@synthesize invalidatePoiCache=_invalidatePoiCache - In the implementation block
@property (assign,nonatomic) BOOL hasRefreshIntervalSeconds; 
@property (assign,nonatomic) unsigned long long refreshIntervalSeconds;                                      //@synthesize refreshIntervalSeconds=_refreshIntervalSeconds - In the implementation block
@property (nonatomic,readonly) BOOL hasClientConfig; 
@property (nonatomic,retain) GEOABClientConfig * clientConfig;                                               //@synthesize clientConfig=_clientConfig - In the implementation block
@property (nonatomic,readonly) BOOL hasParsecClientMetaData; 
@property (nonatomic,retain) GEOABSecondPartyPlaceRequestClientMetaData * parsecClientMetaData;              //@synthesize parsecClientMetaData=_parsecClientMetaData - In the implementation block
@property (nonatomic,readonly) BOOL hasSiriClientMetaData; 
@property (nonatomic,retain) GEOABSecondPartyPlaceRequestClientMetaData * siriClientMetaData;                //@synthesize siriClientMetaData=_siriClientMetaData - In the implementation block
@property (nonatomic,readonly) BOOL hasRapClientMetaData; 
@property (nonatomic,retain) GEOABSecondPartyPlaceRequestClientMetaData * rapClientMetaData;                 //@synthesize rapClientMetaData=_rapClientMetaData - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)assignmentType;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(double)timestamp;
-(void)setTimestamp:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(void)setSourceURL:(NSString *)arg1 ;
-(BOOL)hasSourceURL;
-(NSString *)sourceURL;
-(GEOABClientConfig *)clientConfig;
-(id)_clientConfigValueForKey:(id)arg1 ;
-(id)_querySubstringForServiceType:(int)arg1 placeRequestType:(int)arg2 ;
-(id)_experimentAssignmentForServiceType:(int)arg1 placeRequestType:(int)arg2 ;
-(BOOL)hasRequestGuid;
-(void)clearAssignments;
-(void)addAssignment:(id)arg1 ;
-(unsigned long long)assignmentsCount;
-(id)assignmentAtIndex:(unsigned long long)arg1 ;
-(void)setInvalidateTileCache:(BOOL)arg1 ;
-(void)setHasInvalidateTileCache:(BOOL)arg1 ;
-(BOOL)hasInvalidateTileCache;
-(void)setInvalidatePoiCache:(BOOL)arg1 ;
-(void)setHasInvalidatePoiCache:(BOOL)arg1 ;
-(BOOL)hasInvalidatePoiCache;
-(void)setRefreshIntervalSeconds:(unsigned long long)arg1 ;
-(void)setHasRefreshIntervalSeconds:(BOOL)arg1 ;
-(BOOL)hasRefreshIntervalSeconds;
-(BOOL)hasClientConfig;
-(BOOL)hasParsecClientMetaData;
-(BOOL)hasSiriClientMetaData;
-(BOOL)hasRapClientMetaData;
-(NSString *)requestGuid;
-(void)setRequestGuid:(NSString *)arg1 ;
-(NSMutableArray *)assignments;
-(void)setAssignments:(NSMutableArray *)arg1 ;
-(BOOL)invalidateTileCache;
-(BOOL)invalidatePoiCache;
-(unsigned long long)refreshIntervalSeconds;
-(void)setClientConfig:(GEOABClientConfig *)arg1 ;
-(GEOABSecondPartyPlaceRequestClientMetaData *)parsecClientMetaData;
-(void)setParsecClientMetaData:(GEOABSecondPartyPlaceRequestClientMetaData *)arg1 ;
-(GEOABSecondPartyPlaceRequestClientMetaData *)siriClientMetaData;
-(void)setSiriClientMetaData:(GEOABSecondPartyPlaceRequestClientMetaData *)arg1 ;
-(GEOABSecondPartyPlaceRequestClientMetaData *)rapClientMetaData;
-(void)setRapClientMetaData:(GEOABSecondPartyPlaceRequestClientMetaData *)arg1 ;
@end

