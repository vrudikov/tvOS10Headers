/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:01:28 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreData/CoreData-Structs.h>
@class NSArray, NSString, NSExpression, NSDictionary;

@interface NSPropertyMapping : NSObject {

	void* _reserved;
	NSArray* _transformValidations;
	NSArray* _propertyTransforms;
	NSString* _name;
	NSExpression* _valueExpression;
	NSDictionary* _userInfo;
	struct {
		unsigned _isInUse : 1;
		unsigned _reservedPropertyMapping : 31;
	}  _propertyMappingFlags;

}

@property (copy) NSString * name; 
@property (retain) NSExpression * valueExpression; 
@property (retain) NSDictionary * userInfo; 
+(void)initialize;
-(void)setValueExpression:(NSExpression *)arg1 ;
-(void)_setPropertyTransforms:(id)arg1 ;
-(void)_setTransformValidations:(id)arg1 ;
-(void)_throwIfNotEditable;
-(void)_createCachesAndOptimizeState;
-(void)_setIsEditable:(BOOL)arg1 ;
-(NSExpression *)valueExpression;
-(id)_initWithDestinationName:(id)arg1 valueExpression:(id)arg2 ;
-(id)_propertyTransforms;
-(id)_transformValidations;
-(id)initWithName:(id)arg1 valueExpression:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSDictionary *)userInfo;
-(BOOL)isEditable;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setUserInfo:(NSDictionary *)arg1 ;
@end

