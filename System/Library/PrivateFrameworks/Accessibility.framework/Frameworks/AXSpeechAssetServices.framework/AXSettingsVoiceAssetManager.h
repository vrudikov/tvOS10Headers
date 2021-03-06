/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:14 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AXSpeechAssetServices.framework/AXSpeechAssetServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AXSpeechAssetServices/AXSpeechAssetServices-Structs.h>
#import <libobjc.A.dylib/AVSpeechSynthesizerDelegate.h>

@class NSPointerArray, AVSpeechSynthesizer, NSString;

@interface AXSettingsVoiceAssetManager : NSObject <AVSpeechSynthesizerDelegate> {

	SCNetworkReachabilityRef _reachability;
	NSPointerArray* _delegates;
	AVSpeechSynthesizer* _samplePlayer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(void)speechSynthesizer:(id)arg1 didFinishSpeechUtterance:(id)arg2 ;
-(void)removeDelegate:(id)arg1 ;
-(void)addDelegate:(id)arg1 ;
-(id)_speechAssetUpdaterClient;
-(id)_assetForVoiceId:(id)arg1 forDeletion:(BOOL)arg2 ;
-(void)_startDownloadingAlternateVoice:(id)arg1 ;
-(id)_currentDelegates;
-(void)stopDownloadingAlternateVoice:(id)arg1 ;
-(void)clientUpdateAvailableSpeechAssets;
-(long long)diskSizeForAsset:(id)arg1 ;
-(void)_handleAssetProgress:(id)arg1 error:(id)arg2 voiceId:(id)arg3 diskSize:(long long)arg4 asset:(id)arg5 ;
-(id)_cachedAssetForVoiceId:(id)arg1 ;
-(void)_setProgressHandlerIfNecessary:(id)arg1 voiceId:(id)arg2 ;
-(id)_mobileAssetDownloadOptions;
-(void)_requestVoiceAlternateVoiceDownloadProgress:(id)arg1 ;
-(id)assetForVoiceId:(id)arg1 ;
-(void)startDownloadingAlternateVoice:(id)arg1 ;
-(BOOL)_voiceIdIsVocalizerVoice:(id)arg1 ;
-(void)requestVoiceAlternateVoiceDownloadProgress:(id)arg1 ;
-(void)deleteDownloadAlternateVoice:(id)arg1 ;
-(void)_updateAllowedToDownload;
-(BOOL)allowedToDownloadVoiceAssets;
-(void)playSample:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

