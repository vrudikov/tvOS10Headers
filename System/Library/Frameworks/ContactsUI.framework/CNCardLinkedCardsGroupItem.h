/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:04:34 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/CNCardGroupItem.h>

@class CNContact;

@interface CNCardLinkedCardsGroupItem : CNCardGroupItem {

	CNContact* _contact;

}

@property (nonatomic,retain) CNContact * contact;              //@synthesize contact=_contact - In the implementation block
-(id)initWithContact:(id)arg1 ;
-(CNContact *)contact;
-(void)setContact:(CNContact *)arg1 ;
@end

