/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:04:07 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SASStartSpeechDictation.h>

@class NSDictionary, NSArray;

@interface SASStartVoiceSearchRequest : SASStartSpeechDictation

@property (nonatomic,copy) NSDictionary * headers; 
@property (nonatomic,copy) NSDictionary * queryParameters; 
@property (nonatomic,copy) NSArray * searchTypes; 
+(id)startVoiceSearchRequest;
+(id)startVoiceSearchRequestWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSDictionary *)queryParameters;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSArray *)searchTypes;
-(void)setSearchTypes:(NSArray *)arg1 ;
-(void)setQueryParameters:(NSDictionary *)arg1 ;
-(NSDictionary *)headers;
-(void)setHeaders:(NSDictionary *)arg1 ;
@end

