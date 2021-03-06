/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:04:14 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAGKLinkedAnswer.h>

@class NSDate, NSString;

@interface SAGKNewsLinkedAnswer : SAGKLinkedAnswer

@property (nonatomic,copy) NSDate * publicationDate; 
@property (nonatomic,copy) NSString * source; 
+(id)newsLinkedAnswer;
+(id)newsLinkedAnswerWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setSource:(NSString *)arg1 ;
-(NSString *)source;
-(id)groupIdentifier;
-(id)encodedClassName;
-(void)setPublicationDate:(NSDate *)arg1 ;
-(NSDate *)publicationDate;
@end

