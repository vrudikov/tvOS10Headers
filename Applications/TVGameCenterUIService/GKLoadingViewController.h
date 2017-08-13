//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "_GKStateMachineDelegate.h"

@class GKLoadableContentStateMachine, NSArray, NSString, UIActivityIndicatorView;

@interface GKLoadingViewController : UIViewController <_GKStateMachineDelegate>
{
    NSArray *_viewsToHideWhileLoading;	// 8 = 0x8
    double _loadingIndicatorDelay;	// 16 = 0x10
    GKLoadableContentStateMachine *_loadingMachine;	// 24 = 0x18
    UIActivityIndicatorView *_activityIndicator;	// 32 = 0x20
}

@property(retain, nonatomic) UIActivityIndicatorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
@property(retain, nonatomic) GKLoadableContentStateMachine *loadingMachine; // @synthesize loadingMachine=_loadingMachine;
@property(nonatomic) double loadingIndicatorDelay; // @synthesize loadingIndicatorDelay=_loadingIndicatorDelay;
@property(retain, nonatomic) NSArray *viewsToHideWhileLoading; // @synthesize viewsToHideWhileLoading=_viewsToHideWhileLoading;
- (void)didExitRefreshingState;	// IMP=0x000000010003c3d0
- (void)didEnterRefreshingState;	// IMP=0x000000010003c3cc
- (void)didExitLoadedState;	// IMP=0x000000010003c3c8
- (void)didEnterLoadedState;	// IMP=0x000000010003c3c4
- (void)didExitLoadingState;	// IMP=0x000000010003c298
- (void)didEnterLoadingState;	// IMP=0x000000010003c0ec
- (void)showLoadingIndicator;	// IMP=0x000000010003bf28
- (void)setViewsToHideHidden:(_Bool)arg1;	// IMP=0x000000010003be00
@property(retain, nonatomic) NSString *loadingState;
- (void)dealloc;	// IMP=0x000000010003bc10
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x000000010003bb7c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
