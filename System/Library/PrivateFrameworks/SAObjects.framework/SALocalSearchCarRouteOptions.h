/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:04:04 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString;

@interface SALocalSearchCarRouteOptions : AceObject <SAAceSerializable>

@property (assign,nonatomic) BOOL avoidHighways; 
@property (assign,nonatomic) BOOL avoidTolls; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)carRouteOptions;
+(id)carRouteOptionsWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setAvoidTolls:(BOOL)arg1 ;
-(void)setAvoidHighways:(BOOL)arg1 ;
-(BOOL)avoidTolls;
-(BOOL)avoidHighways;
-(id)groupIdentifier;
-(id)encodedClassName;
@end
