/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:48 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/ITMLKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class IKJSDataItem, NSString, IKDataBinding, NSDictionary;

@interface IKAppDataItem : NSObject <NSCopying> {

	IKJSDataItem* _jsDataItem;
	NSString* _type;
	NSString* _identifier;
	IKDataBinding* _binding;
	NSDictionary* _properties;

}

@property (nonatomic,copy) NSDictionary * properties;                         //@synthesize properties=_properties - In the implementation block
@property (nonatomic,__weak,readonly) IKJSDataItem * jsDataItem;              //@synthesize jsDataItem=_jsDataItem - In the implementation block
@property (nonatomic,readonly) NSString * type;                               //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSString * identifier;                         //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) IKDataBinding * binding;                       //@synthesize binding=_binding - In the implementation block
@property (getter=isDisabled,nonatomic,readonly) BOOL disabled; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)identifier;
-(NSString *)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setProperties:(NSDictionary *)arg1 ;
-(NSDictionary *)properties;
-(IKDataBinding *)binding;
-(IKJSDataItem *)jsDataItem;
-(id)initWithJSDataItem:(id)arg1 type:(id)arg2 identifier:(id)arg3 binding:(id)arg4 ;
-(id)dataItemByUpdatingProperties:(id)arg1 ;
-(BOOL)isDisabled;
@end
