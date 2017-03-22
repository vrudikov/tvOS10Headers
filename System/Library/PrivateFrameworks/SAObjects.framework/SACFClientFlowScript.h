/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:59 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseAceObject.h>

@class NSString, NSData;

@interface SACFClientFlowScript : SABaseAceObject

@property (nonatomic,copy) NSString * jsScript; 
@property (nonatomic,copy) NSData * jsScriptChecksum; 
@property (nonatomic,copy) NSString * jsScriptIdentifier; 
@property (assign,nonatomic) BOOL shouldCacheScript; 
+(id)clientFlowScript;
+(id)clientFlowScriptWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSString *)jsScript;
-(void)setJsScript:(NSString *)arg1 ;
-(NSData *)jsScriptChecksum;
-(void)setJsScriptChecksum:(NSData *)arg1 ;
-(NSString *)jsScriptIdentifier;
-(void)setJsScriptIdentifier:(NSString *)arg1 ;
-(BOOL)shouldCacheScript;
-(void)setShouldCacheScript:(BOOL)arg1 ;
@end
