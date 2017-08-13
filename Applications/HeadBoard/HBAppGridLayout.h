//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewFlowLayout.h"

@class NSArray, NSIndexPath;

@interface HBAppGridLayout : UICollectionViewFlowLayout
{
    _Bool _displayHoverOverlay;	// 8 = 0x8
    _Bool _dockMode;	// 9 = 0x9
}

+ (Class)layoutAttributesClass;	// IMP=0x0000000100055c18
+ (id)layoutAttributesNearPosition:(struct CGPoint)arg1 inLayoutAttributes:(id)arg2;	// IMP=0x00000001000549c4
@property(nonatomic) _Bool dockMode; // @synthesize dockMode=_dockMode;
- (id)_delegateRespondingToHoverOverlayRect;	// IMP=0x00000001000564e8
- (id)_layoutAttributesForHoverRegionOverlayAtIndexPath:(id)arg1;	// IMP=0x00000001000563d8
- (_Bool)_shouldDisplayHoverOverlay;	// IMP=0x0000000100056384
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;	// IMP=0x0000000100056328
- (id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2;	// IMP=0x0000000100056110
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;	// IMP=0x0000000100056058
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;	// IMP=0x0000000100055fb8
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;	// IMP=0x0000000100055c2c
@property(readonly, nonatomic) unsigned long long indexOfLastRow;
@property(readonly, nonatomic) unsigned long long numberOfRows;
- (unsigned long long)colFromIndexPath:(id)arg1;	// IMP=0x0000000100055aa8
- (unsigned long long)rowFromIndexPath:(id)arg1;	// IMP=0x0000000100055a64
- (id)_layoutAttributesForCellsInRowNearPosition:(struct CGPoint)arg1 positionContainedInRow:(_Bool *)arg2 constrainToHoverRect:(_Bool)arg3;	// IMP=0x00000001000555dc
- (struct CGRect)_searchRectForConstrainToHoverRect:(_Bool)arg1;	// IMP=0x00000001000554e0
- (id)_layoutAttributesForCellsInRect:(struct CGRect)arg1;	// IMP=0x000000010005531c
- (id)indexPathInRowNearestPosition:(struct CGPoint)arg1 constrainToHoverRect:(_Bool)arg2;	// IMP=0x0000000100055264
- (id)indexPathInRowNearestPosition:(struct CGPoint)arg1;	// IMP=0x0000000100055254
- (id)indexPathNearPosition:(struct CGPoint)arg1 constrainToHoverRect:(_Bool)arg2;	// IMP=0x0000000100055034
- (id)indexPathNearPosition:(struct CGPoint)arg1;	// IMP=0x0000000100055024
- (id)indexPathAdjacentToItemsNearPosition:(struct CGPoint)arg1 fromIndexPath:(id)arg2 constrainToHoverRect:(_Bool)arg3;	// IMP=0x0000000100054bb4
- (id)indexPathAdjacentToItemsNearPosition:(struct CGPoint)arg1 fromIndexPath:(id)arg2;	// IMP=0x0000000100054ba4
- (id)indexPathInDirection:(long long)arg1 fromIndexPath:(id)arg2;	// IMP=0x0000000100054830
- (_Bool)isIndexPathInDock:(id)arg1;	// IMP=0x00000001000547a8
@property(readonly, nonatomic) NSIndexPath *firstIndexPathOutOfDock;
@property(readonly, nonatomic) NSArray *indexPathsInDock;
@property(readonly, nonatomic) unsigned long long numberOfColumns;
@property(readonly, nonatomic) double dockHeight;
- (id)init;	// IMP=0x0000000100054470

@end
