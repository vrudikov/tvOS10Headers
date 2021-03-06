/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:02 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, NSMutableArray;

@interface _INPBIntentSlotResolutionMulticardinalResult : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	NSMutableArray* _resolutionResults;

}

@property (nonatomic,retain) NSMutableArray * resolutionResults;              //@synthesize resolutionResults=_resolutionResults - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)resolutionResultsType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)addResolutionResults:(id)arg1 ;
-(void)clearResolutionResults;
-(unsigned long long)resolutionResultsCount;
-(id)resolutionResultsAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)resolutionResults;
-(void)setResolutionResults:(NSMutableArray *)arg1 ;
@end

