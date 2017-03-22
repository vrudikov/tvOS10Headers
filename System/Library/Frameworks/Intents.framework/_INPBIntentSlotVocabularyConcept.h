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

@class PBUnknownFields, NSString, NSMutableArray;

@interface _INPBIntentSlotVocabularyConcept : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	NSString* _identifier;
	NSMutableArray* _synonyms;

}

@property (nonatomic,readonly) BOOL hasIdentifier; 
@property (nonatomic,retain) NSString * identifier;                          //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSMutableArray * synonyms;                      //@synthesize synonyms=_synonyms - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)synonymsType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(BOOL)hasIdentifier;
-(void)addSynonyms:(id)arg1 ;
-(void)clearSynonyms;
-(unsigned long long)synonymsCount;
-(id)synonymsAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)synonyms;
-(void)setSynonyms:(NSMutableArray *)arg1 ;
@end
