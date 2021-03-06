/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:04:23 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/CalendarDatabase.framework/CalendarDatabase
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalendarDatabase/CalendarDatabase-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface EKObjectID : NSObject <NSCopying, NSSecureCoding> {

	BOOL _temporary;
	int _entityType;
	int _rowID;

}
+(BOOL)supportsSecureCoding;
+(id)objectIDWithURL:(id)arg1 ;
+(id)objectIDWithCADObjectID:(SCD_Struct_EK8)arg1 ;
+(id)temporaryObjectIDWithEntityType:(int)arg1 ;
+(id)objectIDWithEntityType:(int)arg1 rowID:(int)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(id)initWithEntityType:(int)arg1 rowID:(int)arg2 temporary:(BOOL)arg3 ;
-(BOOL)isTemporary;
-(SCD_Struct_EK8)CADObjectID;
-(int)entityType;
-(int)rowID;
-(id)entityName;
-(id)URIRepresentation;
-(id)stringRepresentation;
@end

