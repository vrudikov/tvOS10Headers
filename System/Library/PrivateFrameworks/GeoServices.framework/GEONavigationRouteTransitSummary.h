/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:33 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface GEONavigationRouteTransitSummary : PBCodable <NSCopying> {

	NSMutableArray* _possibleStops;
	NSMutableArray* _scheduledLinks;

}

@property (nonatomic,retain) NSMutableArray * scheduledLinks;              //@synthesize scheduledLinks=_scheduledLinks - In the implementation block
@property (nonatomic,retain) NSMutableArray * possibleStops;               //@synthesize possibleStops=_possibleStops - In the implementation block
+(Class)scheduledLinkType;
+(Class)possibleStopType;
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
-(id)initWithRoute:(id)arg1 ;
-(void)clearScheduledLinks;
-(void)addScheduledLink:(id)arg1 ;
-(unsigned long long)scheduledLinksCount;
-(id)scheduledLinkAtIndex:(unsigned long long)arg1 ;
-(void)clearPossibleStops;
-(void)addPossibleStop:(id)arg1 ;
-(unsigned long long)possibleStopsCount;
-(id)possibleStopAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)scheduledLinks;
-(void)setScheduledLinks:(NSMutableArray *)arg1 ;
-(NSMutableArray *)possibleStops;
-(void)setPossibleStops:(NSMutableArray *)arg1 ;
@end

