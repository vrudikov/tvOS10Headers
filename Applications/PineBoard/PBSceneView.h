//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class FBScene, NSString, UIView<FBSceneHostSnapshotView>, UIView<FBSceneHostView>;

@interface PBSceneView : UIView
{
    _Bool _hasBackground;	// 8 = 0x8
    _Bool _useSnapshot;	// 9 = 0x9
    NSString *_bundleID;	// 16 = 0x10
    NSString *_requester;	// 24 = 0x18
    FBScene *_scene;	// 32 = 0x20
    UIView<FBSceneHostView> *_sceneHostView;	// 40 = 0x28
    UIView<FBSceneHostSnapshotView> *_snapshotView;	// 48 = 0x30
    UIView *_backgroundView;	// 56 = 0x38
}

@property(readonly, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(readonly, nonatomic) UIView<FBSceneHostSnapshotView> *snapshotView; // @synthesize snapshotView=_snapshotView;
@property(readonly, nonatomic) __weak UIView<FBSceneHostView> *sceneHostView; // @synthesize sceneHostView=_sceneHostView;
@property(nonatomic) _Bool useSnapshot; // @synthesize useSnapshot=_useSnapshot;
@property(nonatomic) _Bool hasBackground; // @synthesize hasBackground=_hasBackground;
@property(readonly, nonatomic) FBScene *scene; // @synthesize scene=_scene;
@property(readonly, copy, nonatomic) NSString *requester; // @synthesize requester=_requester;
@property(readonly, copy, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
- (void).cxx_destruct;	// IMP=0x0000000100057e58
- (void)_updateSceneHostView;	// IMP=0x0000000100057cbc
- (void)disableHosting;	// IMP=0x0000000100057c60
- (void)didMoveToSuperview;	// IMP=0x0000000100057c10
- (id)initWithBundleID:(id)arg1 hasBackground:(_Bool)arg2 requester:(id)arg3;	// IMP=0x00000001000576e4
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100057698
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100057654

@end

