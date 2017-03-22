/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:52 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/SAML.framework/SAML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAML/SAMLBaseElement.h>

@class NSString, NSDate, SAMLSignature, SAMLNameId;

@interface SAMLLogoutRequestElement : SAMLBaseElement

@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) NSDate * issueInstant; 
@property (nonatomic,retain) NSString * destination; 
@property (nonatomic,readonly) NSString * consent; 
@property (nonatomic,retain) NSString * reason; 
@property (nonatomic,retain) NSDate * notOnOrAfter; 
@property (nonatomic,retain) NSString * issuer; 
@property (nonatomic,readonly) SAMLSignature * signature; 
@property (nonatomic,readonly) SAMLNameId * nameId; 
@property (nonatomic,retain) NSString * sessionIndex; 
+(id)createElement:(id*)arg1 ;
-(NSString *)identifier;
-(NSString *)reason;
-(NSString *)destination;
-(void)setDestination:(NSString *)arg1 ;
-(SAMLSignature *)signature;
-(void)setReason:(NSString *)arg1 ;
-(NSDate *)notOnOrAfter;
-(NSDate *)issueInstant;
-(NSString *)consent;
-(NSString *)issuer;
-(NSString *)sessionIndex;
-(void)setIssuer:(NSString *)arg1 ;
-(SAMLNameId *)nameId;
-(void)setNotOnOrAfter:(NSDate *)arg1 ;
-(void)setSessionIndex:(NSString *)arg1 ;
@end
