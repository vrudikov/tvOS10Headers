/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:01:27 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/CoreData-Structs.h>
#import <CoreData/NSPropertyDescription.h>

@class NSFetchRequest, NSString;

@interface NSFetchedPropertyDescription : NSPropertyDescription {

	void* _reserved5;
	void* _reserved6;
	NSFetchRequest* _fetchRequest;
	NSString* _lazyFetchRequestEntityName;

}

@property (retain) NSFetchRequest * fetchRequest; 
-(unsigned long long)_propertyType;
-(void)_createCachesAndOptimizeState;
-(void)_writeIntoData:(id)arg1 propertiesDict:(id)arg2 uniquedPropertyNames:(id)arg3 uniquedStrings:(id)arg4 uniquedData:(id)arg5 entitiesSlots:(id)arg6 fetchRequests:(id)arg7 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isTransient;
-(NSFetchRequest *)fetchRequest;
-(BOOL)isReadOnly;
-(void)setFetchRequest:(NSFetchRequest *)arg1 ;
@end
