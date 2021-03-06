//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "PBSBulletinPresenter.h"

@class GKNotificationBannerView, NSString, PBSBulletin;

@interface GKDashboardNotificationBannerViewController : UIViewController <PBSBulletinPresenter>
{
    PBSBulletin *_bulletin;	// 8 = 0x8
    GKNotificationBannerView *_bulletinView;	// 16 = 0x10
}

+ (id)_exportedInterface;	// IMP=0x00000001000064c0
@property(retain, nonatomic) GKNotificationBannerView *bulletinView; // @synthesize bulletinView=_bulletinView;
@property(retain, nonatomic) PBSBulletin *bulletin; // @synthesize bulletin=_bulletin;
- (void)dealloc;	// IMP=0x0000000100006990
- (void)viewDidLoad;	// IMP=0x0000000100006914
- (id)init;	// IMP=0x00000001000068e0
- (void)bulletinServiceUpdateWithBulletin:(id)arg1;	// IMP=0x00000001000068dc
- (void)bulletinServiceEndPresentationWithReason:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000067f0
- (void)bulletinServiceBeginPresentationWithBulletin:(id)arg1;	// IMP=0x00000001000065b8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

