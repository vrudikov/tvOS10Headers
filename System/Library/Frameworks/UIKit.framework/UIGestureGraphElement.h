/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:02:24 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSString;

@interface UIGestureGraphElement : NSObject {

	NSMutableDictionary* _properties;
	NSString* _label;

}

@property (nonatomic,copy,readonly) NSString * label;              //@synthesize label=_label - In the implementation block
-(id)description;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(NSString *)label;
-(id)initWithLabel:(id)arg1 ;
-(void)setProperties:(id)arg1 ;
-(BOOL)hasProperties:(id)arg1 ;
-(id)propertyForKey:(id)arg1 ;
-(void)removePropertyForKey:(id)arg1 ;
-(void)setProperty:(id)arg1 forKey:(id)arg2 ;
-(void)enumeratePropertiesUsingBlock:(/*^block*/id)arg1 ;
-(void)removeAllProperties;
@end

