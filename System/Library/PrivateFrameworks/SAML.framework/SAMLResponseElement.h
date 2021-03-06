/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:51 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/SAML.framework/SAML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAML/SAMLBaseElement.h>

@class NSString, NSDate, SAMLSignature, SAMLStatus, NSArray;

@interface SAMLResponseElement : SAMLBaseElement

@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) NSString * relatedRequest; 
@property (nonatomic,readonly) NSDate * issueInstant; 
@property (nonatomic,readonly) NSString * destination; 
@property (nonatomic,readonly) NSString * consent; 
@property (nonatomic,readonly) NSString * issuer; 
@property (nonatomic,readonly) SAMLSignature * signature; 
@property (nonatomic,readonly) SAMLStatus * status; 
@property (nonatomic,readonly) NSArray * assertions; 
+(id)createElement:(id*)arg1 ;
-(NSString *)identifier;
-(NSString *)destination;
-(SAMLStatus *)status;
-(NSArray *)assertions;
-(SAMLSignature *)signature;
-(BOOL)assertionMeetsConditions:(id*)arg1 ;
-(NSDate *)issueInstant;
-(NSString *)consent;
-(NSString *)issuer;
-(id)authnStatement;
-(NSString *)relatedRequest;
@end

