//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UINavigationController.h"

@interface PBNavigationController : UINavigationController
{
    CDUnknownBlockType _dismissLastViewControllerBlock;	// 8 = 0x8
}

@property(copy, nonatomic) CDUnknownBlockType dismissLastViewControllerBlock; // @synthesize dismissLastViewControllerBlock=_dismissLastViewControllerBlock;
- (void).cxx_destruct;	// IMP=0x000000010004db60
- (id)_lastViewController;	// IMP=0x000000010004dab4
- (void)_delegateDidDismissViewController:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010004d980
- (void)removeViewController:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010004d808
- (void)dismissViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010004d638

@end

