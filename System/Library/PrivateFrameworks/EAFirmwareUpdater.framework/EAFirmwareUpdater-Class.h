/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:08:22 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/EAFirmwareUpdater.framework/EAFirmwareUpdater
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileAssetUpdater/MobileAssetUpdater.h>
#import <EAFirmwareUpdater/EAAccessoryDelegate.h>
#import <libobjc.A.dylib/NSStreamDelegate.h>
#import <libobjc.A.dylib/iAUPServerDelegate.h>

@protocol OS_dispatch_queue;
@class EAAccessory, NSString, EASession, NSURL, NSMutableData, iAUPServer, NSObject, NSTimer;

@interface EAFirmwareUpdater : MobileAssetUpdater <EAAccessoryDelegate, NSStreamDelegate, iAUPServerDelegate> {

	unsigned _productIDCode;
	EAAccessory* _accessory;
	NSString* _protocolString;
	EASession* _session;
	NSString* _bootloaderProtocol;
	NSString* _appProtocol;
	unsigned _firmwareVersionMajor;
	unsigned _firmwareVersionMinor;
	unsigned _firmwareVersionRelease;
	NSString* _firmwareBundleFilename;
	NSURL* _firmwareBundleURL;
	/*^block*/id _applyCompletion;
	/*^block*/id _progressHandler;
	NSMutableData* _outputData;
	iAUPServer* _iAUPServer;
	NSObject*<OS_dispatch_queue> _eaNotificationDispatchQueue;
	BOOL _firmwareUpdateComplete;
	int _isExpectingReconnect;
	NSTimer* _reconnectTimer;
	BOOL _forceSilentUpdate;
	NSString* _updateBundleFilename;
	NSURL* _updateBundleURL;

}

@property (assign,nonatomic) unsigned productIDCode;                         //@synthesize productIDCode=_productIDCode - In the implementation block
@property (nonatomic,retain) EAAccessory * accessory;                        //@synthesize accessory=_accessory - In the implementation block
@property (nonatomic,retain) NSString * protocolString;                      //@synthesize protocolString=_protocolString - In the implementation block
@property (nonatomic,retain) EASession * session;                            //@synthesize session=_session - In the implementation block
@property (nonatomic,retain) NSString * bootloaderProtocol;                  //@synthesize bootloaderProtocol=_bootloaderProtocol - In the implementation block
@property (nonatomic,retain) NSString * appProtocol;                         //@synthesize appProtocol=_appProtocol - In the implementation block
@property (nonatomic,retain) NSString * firmwareBundleFilename;              //@synthesize updateBundleFilename=_updateBundleFilename - In the implementation block
@property (nonatomic,retain) NSURL * firmwareBundleURL;                      //@synthesize updateBundleURL=_updateBundleURL - In the implementation block
@property (nonatomic,copy) id applyCompletion;                               //@synthesize applyCompletion=_applyCompletion - In the implementation block
@property (nonatomic,retain) iAUPServer * server;                            //@synthesize iAUPServer=_iAUPServer - In the implementation block
@property (assign,nonatomic) BOOL forceSilentUpdate;                         //@synthesize forceSilentUpdate=_forceSilentUpdate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)bootloaderProtocolStringWithProductIDCode:(unsigned)arg1 ;
+(id)appProtocolStringWithProductIDCode:(unsigned)arg1 ;
+(id)findAccessoryWithProductIDCode:(unsigned)arg1 ;
-(void)stream:(id)arg1 handleEvent:(unsigned long long)arg2 ;
-(void)dealloc;
-(iAUPServer *)server;
-(EASession *)session;
-(void)setSession:(EASession *)arg1 ;
-(id)writeData:(id)arg1 ;
-(void)setServer:(iAUPServer *)arg1 ;
-(void)updateProgress:(double)arg1 ;
-(void)accessoryDidDisconnect:(id)arg1 ;
-(void)_accessoryDidDisconnect:(id)arg1 ;
-(NSString *)protocolString;
-(void)setProductIDCode:(unsigned)arg1 ;
-(BOOL)findAccessory;
-(void)stopReconnectTimer;
-(void)reconnectTimerDidFire:(id)arg1 ;
-(void)setBootloaderProtocol:(NSString *)arg1 ;
-(void)setAppProtocol:(NSString *)arg1 ;
-(id)supportedProtocolForAccessory:(id)arg1 ;
-(void)setProtocolString:(NSString *)arg1 ;
-(NSString *)bootloaderProtocol;
-(NSString *)appProtocol;
-(void)setFirmwareBundleFilename:(NSString *)arg1 ;
-(NSString *)firmwareBundleFilename;
-(void)setForceSilentUpdate:(BOOL)arg1 ;
-(BOOL)forceSilentUpdate;
-(void)setFirmwareBundleURL:(NSURL *)arg1 ;
-(NSURL *)firmwareBundleURL;
-(void)_accessoryDidConnect:(id)arg1 ;
-(void)startReconnectTimer:(int)arg1 ;
-(void)updateComplete:(id)arg1 ;
-(id)flushOutput;
-(id)applyCompletion;
-(void)handleInputData;
-(void)logStatusString:(id)arg1 ;
-(void)firmwareUpdateComplete:(id)arg1 ;
-(id)initWithProductIDCode:(unsigned)arg1 assetType:(id)arg2 ;
-(id)overrideQueryPredicateFromDict:(id)arg1 ;
-(id)queryPredicate;
-(id)assetWithMaxVersion:(id)arg1 ;
-(id)validateAssetAttributes:(id)arg1 ;
-(id)validateAsset;
-(id)applyFirmware:(/*^block*/id)arg1 progress:(/*^block*/id)arg2 ;
-(unsigned)productIDCode;
-(void)setApplyCompletion:(id)arg1 ;
-(EAAccessory *)accessory;
-(void)setAccessory:(EAAccessory *)arg1 ;
-(id)openSession;
@end
