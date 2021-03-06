/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:33 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/GEOSurchargeOption.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSMutableArray;

@interface GEORequestOptions : PBCodable <GEOSurchargeOption, NSCopying> {

	int _optionUsed;
	NSMutableArray* _requestOptions;
	SCD_Struct_GE15 _has;

}

@property (nonatomic,readonly) NSArray * surchargeTypes; 
@property (nonatomic,readonly) unsigned long long selectedSurchargeTypeIndex; 
@property (nonatomic,readonly) id<GEOSurchargeType> selectedSurchargeType; 
@property (nonatomic,retain) NSMutableArray * requestOptions;                              //@synthesize requestOptions=_requestOptions - In the implementation block
@property (assign,nonatomic) BOOL hasOptionUsed; 
@property (assign,nonatomic) int optionUsed;                                               //@synthesize optionUsed=_optionUsed - In the implementation block
+(Class)requestOptionType;
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
-(NSArray *)surchargeTypes;
-(unsigned long long)selectedSurchargeTypeIndex;
-(id<GEOSurchargeType>)selectedSurchargeType;
-(void)clearRequestOptions;
-(void)addRequestOption:(id)arg1 ;
-(unsigned long long)requestOptionsCount;
-(id)requestOptionAtIndex:(unsigned long long)arg1 ;
-(void)setOptionUsed:(int)arg1 ;
-(void)setHasOptionUsed:(BOOL)arg1 ;
-(BOOL)hasOptionUsed;
-(NSMutableArray *)requestOptions;
-(void)setRequestOptions:(NSMutableArray *)arg1 ;
-(int)optionUsed;
@end

