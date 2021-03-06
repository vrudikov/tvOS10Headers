/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:08:18 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CoreDAVAccountInfoProvider <NSObject>
@optional
-(void)noteHomeSetOnDifferentHost:(id)arg1;
-(void)clientTokenRequestedByServer;
-(id)clientCertificateInfoProvider;
-(id)oauthInfoProvider;
-(BOOL)handleTrustChallenge:(id)arg1 withConnection:(id)arg2;
-(BOOL)shouldRetryUnauthorizedConnection:(id)arg1;
-(BOOL)shouldTryRenewingCredential;
-(BOOL)renewCredential;
-(BOOL)handleAuthenticateAgainstProtectionSpace:(id)arg1;
-(BOOL)handleAuthenticateAgainstProtectionSpace:(id)arg1 withConnection:(id)arg2;
-(BOOL)handleShouldUseCredentialStorage;
-(BOOL)shouldHandleHTTPCookiesForURL:(id)arg1;
-(BOOL)shouldSendClientInfoHeaderForURL:(id)arg1;
-(BOOL)shouldTurnModalOnBadPassword;
-(void)noteSuccessfulRequestWithNumDownloadedElements:(long long)arg1 forTask:(id)arg2;
-(void)noteFailedNetworkRequestForTask:(id)arg1;
-(void)noteFailedProtocolRequestForTask:(id)arg1;
-(void)noteTimeSpentInNetworking:(double)arg1 forTask:(id)arg2;
-(BOOL)shouldCompressRequests;
-(void)webLoginRequestedAtURL:(id)arg1 reasonString:(id)arg2 completionBlock:(/*^block*/id)arg3;
-(id)getAppleIDSession;
-(id)clientToken;
-(id)additionalHeaderValues;
-(CFURLStorageSessionRef)copyStorageSession;
-(id)customConnectionProperties;
-(BOOL)shouldUseOpportunisticSockets;
-(void)noteTimeSpentInNetworking:(double)arg1;
-(BOOL)handleTrustChallenge:(id)arg1;
-(void)noteSuccessfulRequestWithNumDownloadedElements:(long long)arg1;
-(void)noteFailedProtocolRequest;
-(void)noteFailedNetworkRequest;

@required
-(id)principalURL;
-(id)scheme;
-(id)host;
-(long long)port;
-(id)serverRoot;
-(id)serverComplianceClasses;
-(BOOL)handleCertificateError:(id)arg1;
-(void)promptUserForNewCoreDAVPasswordWithCompletionBlock:(/*^block*/id)arg1;
-(id)userAgentHeader;
-(id)accountID;
-(id)identityPersist;
-(BOOL)shouldFailAllTasks;
-(id)user;
-(id)password;

@end

