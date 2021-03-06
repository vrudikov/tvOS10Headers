/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:08:03 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface HMUserInviteInformation : NSObject {

	BOOL _administrator;
	BOOL _remoteAccessAllowed;
	NSString* _userID;

}

@property (nonatomic,copy,readonly) NSString * userID;                                             //@synthesize userID=_userID - In the implementation block
@property (getter=isAdministrator,nonatomic,readonly) BOOL administrator;                          //@synthesize administrator=_administrator - In the implementation block
@property (getter=isRemoteAccessAllowed,nonatomic,readonly) BOOL remoteAccessAllowed;              //@synthesize remoteAccessAllowed=_remoteAccessAllowed - In the implementation block
-(id)init;
-(id)initWithUser:(id)arg1 administrator:(BOOL)arg2 remoteAccess:(BOOL)arg3 ;
-(NSString *)userID;
-(BOOL)isRemoteAccessAllowed;
-(BOOL)isAdministrator;
@end

