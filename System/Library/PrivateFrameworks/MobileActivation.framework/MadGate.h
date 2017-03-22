/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:48 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/MobileActivation.framework/MobileActivation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSXPCConnection;

@interface MadGate : NSObject {

	NSXPCConnection* _connection;

}

@property (nonatomic,readonly) NSXPCConnection * connection;              //@synthesize connection=_connection - In the implementation block
-(void)dealloc;
-(id)init;
-(NSXPCConnection *)connection;
-(id)getActivationState:(id*)arg1 ;
-(id)getActivationBuild:(id*)arg1 ;
-(BOOL)isUCRTAvailable:(id*)arg1 ;
-(id)copyUCRTToken:(id*)arg1 ;
-(id)copyPCRTToken:(id*)arg1 ;
-(BOOL)isDeviceABrick:(id*)arg1 ;
-(id)createTunnel1SessionInfo:(id*)arg1 ;
-(id)createTunnel1ActivationInfo:(id)arg1 error:(id*)arg2 ;
-(id)createActivationInfo:(id*)arg1 ;
-(id)createRecertInfo:(id*)arg1 ;
-(BOOL)handleActivationInfo:(id)arg1 withError:(id*)arg2 ;
-(BOOL)handleActivationInfoWithSession:(id)arg1 activationSignature:(id)arg2 error:(id*)arg3 ;
-(BOOL)deactivateDevice:(id*)arg1 ;
-(BOOL)reactivateDevice:(id*)arg1 ;
-(BOOL)handleReCertInfo:(id)arg1 withError:(id*)arg2 ;
-(id)copyRegulatoryImages:(id*)arg1 ;
-(id)copyActivationRecord:(id*)arg1 ;
-(BOOL)unbrickDevice:(id*)arg1 ;
-(BOOL)recertifyDevice:(BOOL)arg1 withError:(id*)arg2 ;
-(id)issueClientCertificate:(id)arg1 error:(id*)arg2 ;
@end
