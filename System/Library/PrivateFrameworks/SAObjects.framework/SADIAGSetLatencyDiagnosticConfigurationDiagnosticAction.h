/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:04:02 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSURL, NSString;

@interface SADIAGSetLatencyDiagnosticConfigurationDiagnosticAction : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSURL * uri; 
@property (nonatomic,copy) NSString * verb; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)setLatencyDiagnosticConfigurationDiagnosticAction;
+(id)setLatencyDiagnosticConfigurationDiagnosticActionWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSURL *)uri;
-(void)setUri:(NSURL *)arg1 ;
-(NSString *)verb;
-(void)setVerb:(NSString *)arg1 ;
@end

