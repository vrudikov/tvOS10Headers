//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@interface UIViewController (GKDashboardUtils)
- (void)_gkPopViewControllerAnimated:(_Bool)arg1;	// IMP=0x000000010002417c
- (void)_gkPushViewController:(id)arg1 replaceCurrent:(_Bool)arg2 animated:(_Bool)arg3;	// IMP=0x0000000100024078
- (void)_gkPushViewController:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0000000100024060
- (void)_gkDismissViewController:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0000000100023ffc
- (void)_gkPresentViewController:(id)arg1 asPopoverFromView:(id)arg2 animated:(_Bool)arg3;	// IMP=0x0000000100023eec
- (void)_gkPresentViewController:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0000000100023e58
- (id)_gkOriginatingViewControllerAutoDetermined;	// IMP=0x0000000100023ddc
- (id)_gkOriginatingViewController;	// IMP=0x0000000100023d98
- (void)_gkSetOriginatingViewController:(id)arg1;	// IMP=0x0000000100023d88
- (void)_gkRemoveViewController:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0000000100023c88
- (void)_gkShowViewController:(id)arg1;	// IMP=0x0000000100023c48
- (void)_gkAddMenuButtonTapGestureRecognizerWithTarget:(id)arg1 action:(SEL)arg2;	// IMP=0x0000000100023c34
- (void)_gkAddMenuButtonTapGestureRecognizerWithTarget:(id)arg1 action:(SEL)arg2 delegate:(id)arg3;	// IMP=0x0000000100023b1c
- (void)_gkModifyTopConstraintToLayoutGuideForSubview:(id)arg1;	// IMP=0x0000000100023928
@end
