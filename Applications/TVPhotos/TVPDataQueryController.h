//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class TVSDataClient, TVSDataQuery, TVSiCloudAccountManager, UIView;

@interface TVPDataQueryController : UIViewController
{
    _Bool _showLaunchImageOnLoad;	// 8 = 0x8
    id _serverID;	// 16 = 0x10
    TVSDataQuery *_dataQuery;	// 24 = 0x18
    unsigned long long _dataClientType;	// 32 = 0x20
    TVSDataClient *_dataClient;	// 40 = 0x28
    TVSDataQuery *_preDataQuery;	// 48 = 0x30
    TVSDataQuery *_previewDataQuery;	// 56 = 0x38
    TVSiCloudAccountManager *_accountManager;	// 64 = 0x40
    UIView *_loadingView;	// 72 = 0x48
}

@property(retain, nonatomic) UIView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) TVSiCloudAccountManager *accountManager; // @synthesize accountManager=_accountManager;
@property(retain, nonatomic) TVSDataQuery *previewDataQuery; // @synthesize previewDataQuery=_previewDataQuery;
@property(retain, nonatomic) TVSDataQuery *preDataQuery; // @synthesize preDataQuery=_preDataQuery;
@property(retain, nonatomic) TVSDataClient *dataClient; // @synthesize dataClient=_dataClient;
@property(nonatomic) unsigned long long dataClientType; // @synthesize dataClientType=_dataClientType;
@property(retain, nonatomic) TVSDataQuery *dataQuery; // @synthesize dataQuery=_dataQuery;
@property(nonatomic) _Bool showLaunchImageOnLoad; // @synthesize showLaunchImageOnLoad=_showLaunchImageOnLoad;
@property(nonatomic) id serverID; // @synthesize serverID=_serverID;
- (void).cxx_destruct;	// IMP=0x000000010001fb7c
- (void)previewQueryComplete:(id)arg1;	// IMP=0x000000010001f968
- (void)dataQueryComplete:(id)arg1;	// IMP=0x000000010001f964
- (_Bool)updateWithDataClientNotification:(id)arg1;	// IMP=0x000000010001f95c
- (void)dataClientConnectionFailed;	// IMP=0x000000010001f950
- (void)dataClientConnected;	// IMP=0x000000010001f94c
- (id)newPreviewDataQuery;	// IMP=0x000000010001f944
- (id)newDataQuery;	// IMP=0x000000010001f93c
- (_Bool)isQueryResultValid:(id)arg1;	// IMP=0x000000010001f8e8
- (void)_removeLoadingView;	// IMP=0x000000010001f89c
- (void)_connectDataClient;	// IMP=0x000000010001f780
- (void)_dataQueryComplete:(id)arg1;	// IMP=0x000000010001f718
- (void)setDataClientForUpdateNotifications;	// IMP=0x000000010001f680
- (void)dataClientDataUpdated:(id)arg1;	// IMP=0x000000010001f674
- (void)dataClientDidChangeStatus:(id)arg1;	// IMP=0x000000010001f5b8
- (void)dataClientWillChangeStatus:(id)arg1;	// IMP=0x000000010001f5b4
@property(readonly, nonatomic) _Bool isProcessingQuery;
- (void)executePreviewQuery;	// IMP=0x000000010001f348
- (void)executeDataQuery;	// IMP=0x000000010001f158
- (void)connectDataClient;	// IMP=0x000000010001eeac
- (void)showLoadingSpinnerView;	// IMP=0x000000010001ed34
- (void)removePhotoStreamEmptyView;	// IMP=0x000000010001ebac
- (void)displayPhotoStreamEmptyView;	// IMP=0x000000010001ea00
- (void)dealloc;	// IMP=0x000000010001e984
- (id)initWithDataClient:(id)arg1 dataClientOfType:(unsigned long long)arg2;	// IMP=0x000000010001e824
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x000000010001e7e8

@end

