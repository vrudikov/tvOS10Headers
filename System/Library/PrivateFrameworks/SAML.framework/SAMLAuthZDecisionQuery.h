/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:51 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/SAML.framework/SAML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAML/XMLWrapperDoc.h>

@class SAMLAuthZDecisionQueryElement, NSString;

@interface SAMLAuthZDecisionQuery : XMLWrapperDoc {

	SAMLAuthZDecisionQueryElement* _requestElement;

}

@property (nonatomic,retain) SAMLAuthZDecisionQueryElement * requestElement;              //@synthesize requestElement=_requestElement - In the implementation block
@property (nonatomic,readonly) NSString * channelId; 
-(void)addAction:(id)arg1 ;
-(NSString *)channelId;
-(void)setSubjectFromResponse:(id)arg1 ;
-(void)setResource:(id)arg1 ;
-(id)initWithData:(id)arg1 schema:(id)arg2 error:(id*)arg3 ;
-(id)initWithElement:(id)arg1 schema:(id)arg2 error:(id*)arg3 ;
-(SAMLAuthZDecisionQueryElement *)requestElement;
-(void)setRequestElement:(SAMLAuthZDecisionQueryElement *)arg1 ;
@end
