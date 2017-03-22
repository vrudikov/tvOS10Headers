/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:08:08 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/AccountNotification.framework/AccountNotification
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDate, ANNotificationAction, NSDictionary;

@interface ANAccountNotification : NSObject <NSSecureCoding> {

	NSString* _identifier;
	NSString* _accountTypeID;
	NSString* _title;
	NSString* _message;
	NSDate* _date;
	NSString* _activateButtonTitle;
	NSString* _dismissButtonTitle;
	ANNotificationAction* _activateAction;
	ANNotificationAction* _dismissAction;
	ANNotificationAction* _clearAction;
	NSDictionary* _userInfo;
	NSString* _eventIdentifier;
	long long _destinations;
	long long _sectionSubtype;
	NSString* _callbackMachService;

}

@property (nonatomic,copy) NSString * callbackMachService;                       //@synthesize callbackMachService=_callbackMachService - In the implementation block
@property (nonatomic,readonly) NSString * identifier;                            //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSString * accountTypeID;                         //@synthesize accountTypeID=_accountTypeID - In the implementation block
@property (nonatomic,copy) NSString * title;                                     //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * message;                                   //@synthesize message=_message - In the implementation block
@property (nonatomic,copy) NSDate * date;                                        //@synthesize date=_date - In the implementation block
@property (nonatomic,copy) NSString * activateButtonTitle;                       //@synthesize activateButtonTitle=_activateButtonTitle - In the implementation block
@property (nonatomic,copy) NSString * dismissButtonTitle;                        //@synthesize dismissButtonTitle=_dismissButtonTitle - In the implementation block
@property (nonatomic,retain) ANNotificationAction * activateAction;              //@synthesize activateAction=_activateAction - In the implementation block
@property (nonatomic,retain) ANNotificationAction * dismissAction;               //@synthesize dismissAction=_dismissAction - In the implementation block
@property (nonatomic,retain) ANNotificationAction * clearAction;                 //@synthesize clearAction=_clearAction - In the implementation block
@property (nonatomic,copy) NSDictionary * userInfo;                              //@synthesize userInfo=_userInfo - In the implementation block
@property (nonatomic,copy) NSString * eventIdentifier;                           //@synthesize eventIdentifier=_eventIdentifier - In the implementation block
@property (assign,nonatomic) long long destinations;                             //@synthesize destinations=_destinations - In the implementation block
@property (assign,nonatomic) long long sectionSubtype;                           //@synthesize sectionSubtype=_sectionSubtype - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(id)description;
-(NSString *)identifier;
-(NSDictionary *)userInfo;
-(NSString *)title;
-(NSDate *)date;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(void)setDate:(NSDate *)arg1 ;
-(void)setMessage:(NSString *)arg1 ;
-(NSString *)message;
-(long long)destinations;
-(void)setDestinations:(long long)arg1 ;
-(long long)sectionSubtype;
-(NSString *)eventIdentifier;
-(void)setSectionSubtype:(long long)arg1 ;
-(ANNotificationAction *)dismissAction;
-(NSString *)accountTypeID;
-(NSString *)activateButtonTitle;
-(void)setActivateButtonTitle:(NSString *)arg1 ;
-(NSString *)dismissButtonTitle;
-(void)setDismissButtonTitle:(NSString *)arg1 ;
-(NSString *)callbackMachService;
-(id)initForAccountWithType:(id)arg1 ;
-(ANNotificationAction *)activateAction;
-(id)initWithManagedObject:(id)arg1 ;
-(ANNotificationAction *)clearAction;
-(void)setActivateAction:(ANNotificationAction *)arg1 ;
-(void)setClearAction:(ANNotificationAction *)arg1 ;
-(void)setEventIdentifier:(NSString *)arg1 ;
-(void)setCallbackMachService:(NSString *)arg1 ;
-(void)setDismissAction:(ANNotificationAction *)arg1 ;
@end
