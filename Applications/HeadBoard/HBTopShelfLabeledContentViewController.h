//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "HBBubbleAnimatorViewProvider.h"
#import "HBTopShelfLabeledContentViewDataSource.h"
#import "HBTopShelfLabeledContentViewDelegate.h"
#import "HBTopShelfRepresentationHostProtocol.h"

@class HBTopShelfLabeledContentView, HBTopShelfRepresentation, NSString;

@interface HBTopShelfLabeledContentViewController : UIViewController <HBTopShelfLabeledContentViewDelegate, HBTopShelfLabeledContentViewDataSource, HBBubbleAnimatorViewProvider, HBTopShelfRepresentationHostProtocol>
{
    HBTopShelfRepresentation *_representation;	// 8 = 0x8
    HBTopShelfLabeledContentView *_labeledContentView;	// 16 = 0x10
}

+ (long long)_safeShapeForLabeledContentItem:(id)arg1;	// IMP=0x00000001000109a8
+ (long long)_genericPlaceholderForShape:(long long)arg1;	// IMP=0x0000000100010984
@property(retain, nonatomic) HBTopShelfLabeledContentView *labeledContentView; // @synthesize labeledContentView=_labeledContentView;
@property(retain, nonatomic) HBTopShelfRepresentation *representation; // @synthesize representation=_representation;
- (void).cxx_destruct;	// IMP=0x0000000100010a3c
- (long long)_mediaTypeForItem:(id)arg1;	// IMP=0x00000001000105cc
- (long long)_placeholderForItem:(id)arg1;	// IMP=0x00000001000104b8
- (id)_indexPathByAddingItems:(long long)arg1 toIndexPath:(id)arg2;	// IMP=0x00000001000102b0
- (id)_indexPathBySubtractingItems:(long long)arg1 fromIndexPath:(id)arg2;	// IMP=0x0000000100010128
- (void)_updateCell:(id)arg1 withImageStack:(id)arg2 imageSize:(struct CGSize)arg3 normalizedSize:(struct CGSize)arg4;	// IMP=0x000000010000ffb0
- (id)viewsForAnimator:(id)arg1;	// IMP=0x000000010000fdc4
- (void)labeledContentView:(id)arg1 didPlayItemAtIndexPath:(id)arg2;	// IMP=0x000000010000fb30
- (void)labeledContentView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x000000010000f838
- (_Bool)_respresentationRequiresRoundedCorners;	// IMP=0x000000010000f6ec
- (id)labeledContentView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x000000010000e4d8
- (void)labeledContentView:(id)arg1 configureLabel:(id)arg2 forSection:(unsigned long long)arg3;	// IMP=0x000000010000e380
- (id)labeledContentView:(id)arg1 titleForSection:(unsigned long long)arg2;	// IMP=0x000000010000e2dc
- (struct CGSize)labeledContentView:(id)arg1 preferredSizeForItemAtIndexPath:(id)arg2;	// IMP=0x000000010000e170
- (unsigned long long)labeledContentView:(id)arg1 numberOfItemsInSection:(unsigned long long)arg2;	// IMP=0x000000010000e0ac
- (unsigned long long)numberOfSectionsInLabeledContentView:(id)arg1;	// IMP=0x000000010000e038
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x000000010000df98
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x000000010000df28
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000010000de88
- (void)loadView;	// IMP=0x000000010000dd74
- (void)dealloc;	// IMP=0x000000010000dbdc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

