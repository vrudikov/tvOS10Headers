/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:08:02 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSSet, NSArray;

@interface HMApplicationData : NSObject {

	NSMutableDictionary* _applicationData;
	NSSet* _allowedObjectClasses;

}

@property (nonatomic,retain) NSMutableDictionary * applicationData;              //@synthesize applicationData=_applicationData - In the implementation block
@property (nonatomic,retain) NSSet * allowedObjectClasses;                       //@synthesize allowedObjectClasses=_allowedObjectClasses - In the implementation block
@property (nonatomic,copy,readonly) NSArray * allKeys; 
@property (nonatomic,copy,readonly) NSArray * allValues; 
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(id)objectForKey:(id)arg1 ;
-(id)dictionary;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(NSArray *)allKeys;
-(NSArray *)allValues;
-(id)dictionaryRepresentation;
-(id)initWithContentsOfDictionary:(id)arg1 allowedObjectClasses:(id)arg2 ;
-(id)initWithContentsOfDictionary:(id)arg1 ;
-(BOOL)isAllowedClassForObject:(id)arg1 ;
-(NSSet *)allowedObjectClasses;
-(void)setAllowedObjectClasses:(NSSet *)arg1 ;
-(void)setApplicationData:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)applicationData;
@end

