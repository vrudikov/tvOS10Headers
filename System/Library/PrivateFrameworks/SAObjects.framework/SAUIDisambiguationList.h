/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:59 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAAceView.h>

@class NSString, SAUIDomainObjectPicker, NSArray;

@interface SAUIDisambiguationList : SAAceView

@property (nonatomic,copy) NSString * disambiguationKey; 
@property (nonatomic,retain) SAUIDomainObjectPicker * domainObjectPicker; 
@property (nonatomic,copy) NSArray * fallbackCommands; 
@property (nonatomic,copy) NSArray * items; 
@property (nonatomic,copy) NSString * selectionResponse; 
@property (nonatomic,copy) NSString * speakableDelimiter; 
@property (nonatomic,copy) NSString * speakableFinalDelimiter; 
@property (nonatomic,copy) NSString * speakableSelectionResponse; 
@property (nonatomic,copy) NSString * speakableSuffix; 
@property (nonatomic,copy) NSString * title; 
+(id)disambiguationList;
+(id)disambiguationListWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(NSArray *)items;
-(void)setItems:(NSArray *)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSString *)selectionResponse;
-(void)setSelectionResponse:(NSString *)arg1 ;
-(NSString *)speakableSelectionResponse;
-(void)setSpeakableSelectionResponse:(NSString *)arg1 ;
-(NSString *)disambiguationKey;
-(void)setDisambiguationKey:(NSString *)arg1 ;
-(SAUIDomainObjectPicker *)domainObjectPicker;
-(void)setDomainObjectPicker:(SAUIDomainObjectPicker *)arg1 ;
-(NSArray *)fallbackCommands;
-(void)setFallbackCommands:(NSArray *)arg1 ;
-(NSString *)speakableDelimiter;
-(void)setSpeakableDelimiter:(NSString *)arg1 ;
-(NSString *)speakableFinalDelimiter;
-(void)setSpeakableFinalDelimiter:(NSString *)arg1 ;
-(NSString *)speakableSuffix;
-(void)setSpeakableSuffix:(NSString *)arg1 ;
@end
