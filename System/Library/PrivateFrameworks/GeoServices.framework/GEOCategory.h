/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:27 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray;

@interface GEOCategory : PBCodable <NSCopying> {

	long long _geoOntologyId;
	NSString* _alias;
	int _level;
	NSMutableArray* _localizedNames;
	SCD_Struct_GE15 _has;

}

@property (nonatomic,retain) NSString * alias;                             //@synthesize alias=_alias - In the implementation block
@property (assign,nonatomic) int level;                                    //@synthesize level=_level - In the implementation block
@property (assign,nonatomic) BOOL hasGeoOntologyId; 
@property (assign,nonatomic) long long geoOntologyId;                      //@synthesize geoOntologyId=_geoOntologyId - In the implementation block
@property (nonatomic,retain) NSMutableArray * localizedNames;              //@synthesize localizedNames=_localizedNames - In the implementation block
+(Class)localizedNamesType;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setLevel:(int)arg1 ;
-(int)level;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithPlaceDataCategory:(id)arg1 ;
-(void)setGeoOntologyId:(long long)arg1 ;
-(void)setHasGeoOntologyId:(BOOL)arg1 ;
-(BOOL)hasGeoOntologyId;
-(void)clearLocalizedNames;
-(void)addLocalizedNames:(id)arg1 ;
-(unsigned long long)localizedNamesCount;
-(id)localizedNamesAtIndex:(unsigned long long)arg1 ;
-(NSString *)alias;
-(void)setAlias:(NSString *)arg1 ;
-(long long)geoOntologyId;
-(NSMutableArray *)localizedNames;
-(void)setLocalizedNames:(NSMutableArray *)arg1 ;
@end

