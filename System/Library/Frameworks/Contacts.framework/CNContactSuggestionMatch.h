/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:44 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SGContact, SGContactMatch, NSString;

@interface CNContactSuggestionMatch : NSObject {

	SGContact* _contact;
	SGContactMatch* _contactMatch;
	NSString* _mainStoreLinkedIdentifier;

}

@property (nonatomic,retain) SGContactMatch * contactMatch;                     //@synthesize contactMatch=_contactMatch - In the implementation block
@property (nonatomic,retain) SGContact * contact;                               //@synthesize contact=_contact - In the implementation block
@property (nonatomic,retain) NSString * mainStoreLinkedIdentifier;              //@synthesize mainStoreLinkedIdentifier=_mainStoreLinkedIdentifier - In the implementation block
+(id)suggestionFromContactMatch:(id)arg1 ;
+(void)fetchLinkedIdentifiersForContactSuggestionMatches:(id)arg1 fromSuggestionService:(id)arg2 ;
-(void)dealloc;
-(void)setContactMatch:(SGContactMatch *)arg1 ;
-(void)setMainStoreLinkedIdentifier:(NSString *)arg1 ;
-(SGContactMatch *)contactMatch;
-(NSString *)mainStoreLinkedIdentifier;
-(SGContact *)contact;
-(void)setContact:(SGContact *)arg1 ;
@end
