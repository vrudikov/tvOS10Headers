/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:08:14 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface AWDMetricReporter : NSObject
+(void)reportPiggyBackWithSuccess:(BOOL)arg1 error:(id)arg2 ;
+(void)reportStateMachineCompletionShouldCompleteSignIn:(BOOL)arg1 cloudDataProtectionEnabled:(BOOL)arg2 error:(id)arg3 ;
+(void)reportStateMachineLockAssertionWithError:(id)arg1 ;
+(void)reportStateMachineEnableCDPShouldCompleteSignIn:(BOOL)arg1 cloudDataProtectionEnabled:(BOOL)arg2 error:(id)arg3 ;
+(void)reportStateMachineCircleJoinWithStatus:(long long)arg1 needsBackupRecovery:(BOOL)arg2 hasPeersForRemoteApproval:(BOOL)arg3 error:(id)arg4 ;
+(void)reportStateMachineRepairHSA2AuthWithError:(id)arg1 ;
+(void)reportStateMachineRepairCircleAuth;
+(void)reportStateMachineRecoveryWithSecretType:(long long)arg1 userDidReset:(BOOL)arg2 error:(id)arg3 ;
@end

