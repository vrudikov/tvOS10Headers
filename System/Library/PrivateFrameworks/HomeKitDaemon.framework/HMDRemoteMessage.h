/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:08:33 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFMessage.h>

@class NSUUID, HMDHomeKitVersion;

@interface HMDRemoteMessage : HMFMessage {

	BOOL _secure;
	long long _type;
	NSUUID* _transactionIdentifier;
	double _timeout;
	unsigned long long _restriction;
	HMDHomeKitVersion* _sourceVersion;

}

@property (nonatomic,retain) HMDHomeKitVersion * sourceVersion;              //@synthesize sourceVersion=_sourceVersion - In the implementation block
@property (assign,nonatomic) long long type;                                 //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSUUID * transactionIdentifier;                   //@synthesize transactionIdentifier=_transactionIdentifier - In the implementation block
@property (assign,getter=isSecure,nonatomic) BOOL secure;                    //@synthesize secure=_secure - In the implementation block
@property (nonatomic,readonly) double timeout;                               //@synthesize timeout=_timeout - In the implementation block
@property (nonatomic,readonly) unsigned long long restriction;               //@synthesize restriction=_restriction - In the implementation block
+(id)secureMessageWithName:(id)arg1 destination:(id)arg2 messagePayload:(id)arg3 ;
-(void)setType:(long long)arg1 ;
-(long long)type;
-(void)setSecure:(BOOL)arg1 ;
-(BOOL)isSecure;
-(double)timeout;
-(HMDHomeKitVersion *)sourceVersion;
-(void)setSourceVersion:(HMDHomeKitVersion *)arg1 ;
-(void)setResponseHandler:(/*^block*/id)arg1 ;
-(BOOL)isRemoteSource;
-(id)initWithName:(id)arg1 destination:(id)arg2 payload:(id)arg3 type:(long long)arg4 timeout:(double)arg5 secure:(BOOL)arg6 ;
-(unsigned long long)restriction;
-(NSUUID *)transactionIdentifier;
-(void)setTransactionIdentifier:(NSUUID *)arg1 ;
-(id)initWithName:(id)arg1 destination:(id)arg2 payload:(id)arg3 type:(long long)arg4 timeout:(double)arg5 secure:(BOOL)arg6 restriction:(unsigned long long)arg7 ;
-(id)initWithName:(id)arg1 destination:(id)arg2 payload:(id)arg3 ;
@end

