/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:31 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEOFareOptions;

@interface GEOTransitOptions : PBCodable <NSCopying> {

	SCD_Struct_GE1* _avoidedModes;
	GEOFareOptions* _fareOptions;
	int _prioritization;
	SCD_Struct_GE15 _has;

}

@property (nonatomic,readonly) BOOL hasSurchargeOption; 
@property (assign,nonatomic) int surchargeOption; 
@property (assign,nonatomic) BOOL showICFares; 
@property (nonatomic,readonly) unsigned long long avoidedModesCount; 
@property (nonatomic,readonly) int* avoidedModes; 
@property (assign,nonatomic) BOOL hasPrioritization; 
@property (assign,nonatomic) int prioritization;                                  //@synthesize prioritization=_prioritization - In the implementation block
@property (nonatomic,readonly) BOOL hasFareOptions; 
@property (nonatomic,retain) GEOFareOptions * fareOptions;                        //@synthesize fareOptions=_fareOptions - In the implementation block
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
-(BOOL)hasSurchargeOption;
-(void)setSurchargeOption:(int)arg1 ;
-(int)surchargeOption;
-(void)setShowICFares:(BOOL)arg1 ;
-(BOOL)showICFares;
-(unsigned long long)avoidedModesCount;
-(int*)avoidedModes;
-(void)clearAvoidedModes;
-(void)addAvoidedMode:(int)arg1 ;
-(int)avoidedModeAtIndex:(unsigned long long)arg1 ;
-(void)setAvoidedModes:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)avoidedModesAsString:(int)arg1 ;
-(int)StringAsAvoidedModes:(id)arg1 ;
-(int)prioritization;
-(void)setPrioritization:(int)arg1 ;
-(void)setHasPrioritization:(BOOL)arg1 ;
-(BOOL)hasPrioritization;
-(id)prioritizationAsString:(int)arg1 ;
-(int)StringAsPrioritization:(id)arg1 ;
-(BOOL)hasFareOptions;
-(GEOFareOptions *)fareOptions;
-(void)setFareOptions:(GEOFareOptions *)arg1 ;
@end

