/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:38 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <UIKit/UIViewController.h>
#import <TVMLKit/TVAppTemplateImpressionable.h>
#import <TVMLKit/_TVCollectionViewDelegate.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <TVMLKit/_TVSubviewPreloading.h>

@class UICollectionView, UIViewController, IKCollectionElement, IKViewElement, NSIndexPath, _TVShadowViewElement, _TVCollectionWrappingView, NSString;

@interface _TVMLCollectionViewController : UIViewController <TVAppTemplateImpressionable, _TVCollectionViewDelegate, UICollectionViewDataSource, _TVSubviewPreloading> {

	BOOL _ignoreNextSelect;
	BOOL _didAppear;
	double _impressionThreshold;
	BOOL _needsMoreContent;
	UICollectionView* _collectionView;
	UIViewController* _headerViewController;
	IKCollectionElement* _collectionElement;
	IKViewElement* _headerElement;
	NSIndexPath* _lastFocusedIndexPath;
	_TVShadowViewElement* _shadowViewElement;
	TVCellMetrics _cellMetrics;

}

@property (nonatomic,retain) UIViewController * headerViewController;                                  //@synthesize headerViewController=_headerViewController - In the implementation block
@property (nonatomic,retain) _TVShadowViewElement * shadowViewElement;                                 //@synthesize shadowViewElement=_shadowViewElement - In the implementation block
@property (nonatomic,retain,readonly) _TVCollectionWrappingView * collectionWrappingView; 
@property (nonatomic,retain) UICollectionView * collectionView;                                        //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,retain,readonly) IKCollectionElement * collectionElement;                         //@synthesize collectionElement=_collectionElement - In the implementation block
@property (nonatomic,retain,readonly) IKViewElement * headerElement;                                   //@synthesize headerElement=_headerElement - In the implementation block
@property (nonatomic,readonly) TVCellMetrics cellMetrics;                                              //@synthesize cellMetrics=_cellMetrics - In the implementation block
@property (nonatomic,copy) NSIndexPath * lastFocusedIndexPath;                                         //@synthesize lastFocusedIndexPath=_lastFocusedIndexPath - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_shadowViewElementForCollectionElement:(id)arg1 ;
+(id)headerElementFromCollectionElement:(id)arg1 ;
-(void)dealloc;
-(void)scrollViewDidScroll:(id)arg1 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg1 didUpdateFocusInContext:(id)arg2 withAnimationCoordinator:(id)arg3 ;
-(id)indexPathForPreferredFocusedViewInCollectionView:(id)arg1 ;
-(void)loadView;
-(id)preferredFocusEnvironments;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(UICollectionView *)collectionView;
-(void)setCollectionView:(UICollectionView *)arg1 ;
-(void)collectionView:(id)arg1 didReceivePhysicalPlayForItemAtIndexPath:(id)arg2 ;
-(BOOL)collectionView:(id)arg1 shouldHandleLongPressForItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didReceiveLongPressForItemAtIndexPath:(id)arg2 ;
-(UIViewController *)headerViewController;
-(void)setHeaderViewController:(UIViewController *)arg1 ;
-(void)tv_updateViewLayout;
-(TVCellMetrics)cellMetrics;
-(void)updateWithViewElement:(id)arg1 cellMetrics:(TVCellMetrics)arg2 ;
-(IKCollectionElement *)collectionElement;
-(IKViewElement *)headerElement;
-(void)_cancelImpressionsUpdate;
-(void)_updateImpressions;
-(void)_recordImpressionsForVisibleView;
-(id)impressionableElementsContainedInDocument:(id)arg1 ;
-(void)_evaluateNeedsMoreContent;
-(void)preloadSubviewsInRect:(CGRect)arg1 ;
-(NSIndexPath *)lastFocusedIndexPath;
-(void)setLastFocusedIndexPath:(NSIndexPath *)arg1 ;
-(void)dispatchEventOfType:(unsigned long long)arg1 forItemAtIndexPath:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(_TVCollectionWrappingView *)collectionWrappingView;
-(void)updateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)_updateHeaderView;
-(void)_registerCellClassesInCollectionView:(id)arg1 ;
-(CGSize)expectedCellSizeForElement:(id)arg1 ;
-(void)_doUpdateViewLayoutAnimated:(BOOL)arg1 relayout:(BOOL)arg2 ;
-(_TVShadowViewElement *)shadowViewElement;
-(void)setShadowViewElement:(_TVShadowViewElement *)arg1 ;
@end
