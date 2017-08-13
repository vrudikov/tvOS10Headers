//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewFlowLayout.h"

@class NSMutableDictionary, TVPCollectionViewLayoutAttributes;

@interface TVPCollectionViewFlowLayout : UICollectionViewFlowLayout
{
    _Bool _isFocusEnteringCollectionView;	// 8 = 0x8
    _Bool _isFocusLeavingCollectionView;	// 9 = 0x9
    _Bool _isFocusInsideCollectionView;	// 10 = 0xa
    TVPCollectionViewLayoutAttributes *_titleLayoutAttributes;	// 16 = 0x10
    NSMutableDictionary *_headerAttributes;	// 24 = 0x18
    unsigned long long _focusHeading;	// 32 = 0x20
    NSMutableDictionary *_focusContainerGuides;	// 40 = 0x28
    struct CGSize _titleSize;	// 48 = 0x30
}

+ (Class)invalidationContextClass;	// IMP=0x0000000100020cf4
+ (Class)layoutAttributesClass;	// IMP=0x00000001000207f8
@property(retain, nonatomic) NSMutableDictionary *focusContainerGuides; // @synthesize focusContainerGuides=_focusContainerGuides;
@property(nonatomic) _Bool isFocusInsideCollectionView; // @synthesize isFocusInsideCollectionView=_isFocusInsideCollectionView;
@property(nonatomic, setter=setFocusLeavingCollectionView:) _Bool isFocusLeavingCollectionView; // @synthesize isFocusLeavingCollectionView=_isFocusLeavingCollectionView;
@property(nonatomic, setter=setFocusEnteringCollectionView:) _Bool isFocusEnteringCollectionView; // @synthesize isFocusEnteringCollectionView=_isFocusEnteringCollectionView;
@property(nonatomic) unsigned long long focusHeading; // @synthesize focusHeading=_focusHeading;
@property(retain, nonatomic) NSMutableDictionary *headerAttributes; // @synthesize headerAttributes=_headerAttributes;
@property(retain, nonatomic) TVPCollectionViewLayoutAttributes *titleLayoutAttributes; // @synthesize titleLayoutAttributes=_titleLayoutAttributes;
@property(nonatomic, getter=_titleSize, setter=_setTitleSize:) struct CGSize titleSize; // @synthesize titleSize=_titleSize;
- (void).cxx_destruct;	// IMP=0x0000000100021bf8
- (void)_removeFocusContainerGuideForSection:(long long)arg1;	// IMP=0x00000001000218b4
- (id)_focusContainerGuideForSection:(long long)arg1;	// IMP=0x0000000100021740
- (void)_updateFocusContainerGuides;	// IMP=0x000000010002133c
- (struct CGSize)_titleAdjustmentSize;	// IMP=0x00000001000212ec
- (struct CGRect)_titleFrame;	// IMP=0x0000000100021104
- (struct CGPoint)targetContentOffsetForProposedContentOffset:(struct CGPoint)arg1 withScrollingVelocity:(struct CGPoint)arg2;	// IMP=0x0000000100020d70
- (struct CGSize)collectionViewContentSize;	// IMP=0x0000000100020d08
- (void)invalidateLayoutWithContext:(id)arg1;	// IMP=0x000000010002092c
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;	// IMP=0x00000001000208b4
- (void)_adjustLayoutAttributes:(id)arg1;	// IMP=0x000000010002080c
- (void)_applyCustomAttributesToAttributes:(id)arg1;	// IMP=0x00000001000206ac
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;	// IMP=0x0000000100020628
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;	// IMP=0x0000000100020530
- (id)_layoutAttributesForTitle;	// IMP=0x0000000100020468
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;	// IMP=0x000000010002010c
- (void)prepareLayout;	// IMP=0x000000010001ffe0

@end

