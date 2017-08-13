//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ADJSODelegate.h"
#import "ADWebViewDelegate.h"

@class ADSAdImpression, ADSAdImpressionController, ADSBannerJSO, ADSCreativeView, ADSMRAIDJSO, NSString;

@interface ADSCreativeController : NSObject <ADWebViewDelegate, ADJSODelegate>
{
    ADSAdImpressionController *_adImpressionController;	// 8 = 0x8
    id <ADSCreativeControllerMRAIDDelegate> _MRAIDDelegate;	// 16 = 0x10
    _Bool _contentVisible;	// 24 = 0x18
    ADSCreativeView *_creativeView;	// 32 = 0x20
    double _lastVisible;	// 40 = 0x28
    ADSBannerJSO *_bannerScriptObject;	// 48 = 0x30
    ADSMRAIDJSO *_mraidScriptObject;	// 56 = 0x38
    ADSAdImpression *_adImpression;	// 64 = 0x40
    CDUnknownBlockType _loadCompletion;	// 72 = 0x48
}

@property(copy, nonatomic) CDUnknownBlockType loadCompletion; // @synthesize loadCompletion=_loadCompletion;
@property(retain, nonatomic) ADSAdImpression *adImpression; // @synthesize adImpression=_adImpression;
@property(retain, nonatomic) ADSMRAIDJSO *mraidScriptObject; // @synthesize mraidScriptObject=_mraidScriptObject;
@property(retain, nonatomic) ADSBannerJSO *bannerScriptObject; // @synthesize bannerScriptObject=_bannerScriptObject;
@property(nonatomic) double lastVisible; // @synthesize lastVisible=_lastVisible;
@property(nonatomic) _Bool contentVisible; // @synthesize contentVisible=_contentVisible;
@property(nonatomic) __weak id <ADSCreativeControllerMRAIDDelegate> MRAIDDelegate; // @synthesize MRAIDDelegate=_MRAIDDelegate;
- (void)scriptObjectRequestsPresentationForMRAIDOpenEvent:(id)arg1;	// IMP=0x0000000100021ecc
- (void)registerForAdDimissal:(id)arg1;	// IMP=0x0000000100021ec8
- (void)adWebView:(id)arg1 failedToLoadAssetAtURL:(id)arg2 details:(id)arg3;	// IMP=0x0000000100021e2c
- (void)adWebView:(id)arg1 hadScriptErrorWithInfo:(id)arg2;	// IMP=0x0000000100021df8
- (void)uiWebView:(id)arg1 didClearWindowObject:(id)arg2 forFrame:(id)arg3;	// IMP=0x0000000100021cd8
- (void)uiWebView:(id)arg1 resource:(id)arg2 didReceiveAuthenticationChallenge:(id)arg3 fromDataSource:(id)arg4;	// IMP=0x0000000100021c68
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;	// IMP=0x0000000100021b24
- (void)webViewDidFinishLoad:(id)arg1;	// IMP=0x00000001000219b0
- (void)webViewDidStartLoad:(id)arg1;	// IMP=0x000000010002195c
- (void)_removeCookies;	// IMP=0x0000000100021778
- (_Bool)_isiAdContentServer;	// IMP=0x0000000100021748
- (void)_callLoadCompletionWithError:(id)arg1;	// IMP=0x00000001000216b8
- (void)setDelegate:(id)arg1;	// IMP=0x0000000100021464
@property(nonatomic) __weak ADSAdImpressionController *adImpressionController;
- (void)loadAdImpression:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010002109c
@property(readonly, nonatomic) ADSCreativeView *creativeView; // @synthesize creativeView=_creativeView;
- (void)dealloc;	// IMP=0x0000000100020dd8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool modalActivityInProgress;
@property(readonly) Class superclass;

@end

