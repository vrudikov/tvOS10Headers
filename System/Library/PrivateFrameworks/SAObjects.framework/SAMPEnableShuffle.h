/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:59 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainCommand.h>

@interface SAMPEnableShuffle : SADomainCommand

@property (assign,nonatomic) BOOL enable; 
+(id)enableShuffle;
+(id)enableShuffleWithDictionary:(id)arg1 context:(id)arg2 ;
-(BOOL)enable;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(void)setEnable:(BOOL)arg1 ;
@end

