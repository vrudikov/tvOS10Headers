/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:04:53 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CKOperation.h>

@class NSError, NSString, NSData, NSURL, CKShareMetadata;

@interface CKCompleteParticipantVettingOperation : CKOperation {

	/*^block*/id _completeParticipantVettingCompletionBlock;
	NSError* _verificationError;
	NSString* _vettingToken;
	NSString* _vettingEmail;
	NSString* _vettingPhone;
	NSString* _routingKey;
	NSData* _encryptedKey;
	NSString* _baseToken;
	NSURL* _reconstructedShareURL;
	CKShareMetadata* _shareMetadata;

}

@property (nonatomic,retain) NSError * verificationError;                             //@synthesize verificationError=_verificationError - In the implementation block
@property (nonatomic,copy) NSString * vettingToken;                                   //@synthesize vettingToken=_vettingToken - In the implementation block
@property (nonatomic,copy) NSString * vettingEmail;                                   //@synthesize vettingEmail=_vettingEmail - In the implementation block
@property (nonatomic,copy) NSString * vettingPhone;                                   //@synthesize vettingPhone=_vettingPhone - In the implementation block
@property (nonatomic,copy) NSString * routingKey;                                     //@synthesize routingKey=_routingKey - In the implementation block
@property (nonatomic,copy) NSData * encryptedKey;                                     //@synthesize encryptedKey=_encryptedKey - In the implementation block
@property (nonatomic,copy) NSString * baseToken;                                      //@synthesize baseToken=_baseToken - In the implementation block
@property (nonatomic,copy) NSURL * reconstructedShareURL;                             //@synthesize reconstructedShareURL=_reconstructedShareURL - In the implementation block
@property (nonatomic,retain) CKShareMetadata * shareMetadata;                         //@synthesize shareMetadata=_shareMetadata - In the implementation block
@property (nonatomic,copy) id completeParticipantVettingCompletionBlock;              //@synthesize completeParticipantVettingCompletionBlock=_completeParticipantVettingCompletionBlock - In the implementation block
-(id)init;
-(CKShareMetadata *)shareMetadata;
-(void)fillOutOperationInfo:(id)arg1 ;
-(void)fillFromOperationInfo:(id)arg1 ;
-(BOOL)CKOperationShouldRun:(id*)arg1 ;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(id)activityCreate;
-(void)performCKOperation;
-(void)_handleProgressCallback:(id)arg1 ;
-(NSString *)routingKey;
-(void)setRoutingKey:(NSString *)arg1 ;
-(NSString *)baseToken;
-(void)setBaseToken:(NSString *)arg1 ;
-(void)setShareMetadata:(CKShareMetadata *)arg1 ;
-(NSString *)vettingToken;
-(void)setVettingToken:(NSString *)arg1 ;
-(NSString *)vettingEmail;
-(void)setVettingEmail:(NSString *)arg1 ;
-(NSString *)vettingPhone;
-(void)setVettingPhone:(NSString *)arg1 ;
-(NSData *)encryptedKey;
-(void)setEncryptedKey:(NSData *)arg1 ;
-(void)setReconstructedShareURL:(NSURL *)arg1 ;
-(void)setVerificationError:(NSError *)arg1 ;
-(NSError *)verificationError;
-(id)completeParticipantVettingCompletionBlock;
-(NSURL *)reconstructedShareURL;
-(id)initWithVettingToken:(id)arg1 vettingRecord:(id)arg2 ;
-(void)setCompleteParticipantVettingCompletionBlock:(id)arg1 ;
@end
