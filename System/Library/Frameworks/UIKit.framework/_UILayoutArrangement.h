/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:02:38 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/_UILAPropertySource.h>

@class NSMutableSet, NSMutableArray, _UILAConfigurationHistory, _UILayoutSpacer, UIView, NSSet, NSArray, NSString;

@interface _UILayoutArrangement : NSObject <_UILAPropertySource> {

	NSMutableSet* _incomingItems;
	NSMutableSet* _outgoingItems;
	NSMutableSet* _hiddenItems;
	NSMutableSet* _newlyHiddenItems;
	NSMutableSet* _newlyUnhiddenItems;
	NSMutableArray* _canvasConnectionConstraints;
	BOOL _awaitingAnimationLayoutPass;
	BOOL _layoutFillsCanvas;
	BOOL _layoutUsesCanvasMarginsWhenFilling;
	_UILAConfigurationHistory* _unanimatedConfigurationTarget;
	NSMutableArray* _mutableItems;
	_UILayoutSpacer* _spanningLayoutGuide;
	_UILAConfigurationHistory* _configurationHistory;
	UIView* _canvas;
	long long _axis;

}

@property (setter=_setMutableItems:,nonatomic,retain) NSMutableArray * _mutableItems;                                                           //@synthesize mutableItems=_mutableItems - In the implementation block
@property (nonatomic,readonly) NSSet * _hiddenItems; 
@property (nonatomic,readonly) NSSet * _incomingItems; 
@property (nonatomic,readonly) NSSet * _outgoingItems; 
@property (setter=_setUnanimatedConfigurationTarget:,nonatomic,retain) _UILAConfigurationHistory * _unanimatedConfigurationTarget;              //@synthesize unanimatedConfigurationTarget=_unanimatedConfigurationTarget - In the implementation block
@property (nonatomic,readonly) BOOL _awaitingAnimationLayoutPass;                                                                               //@synthesize awaitingAnimationLayoutPass=_awaitingAnimationLayoutPass - In the implementation block
@property (nonatomic,readonly) id<_UILAPropertySource> _propertySource; 
@property (nonatomic,retain,readonly) _UILayoutSpacer * _spanningLayoutGuide;                                                                   //@synthesize spanningLayoutGuide=_spanningLayoutGuide - In the implementation block
@property (nonatomic,retain,readonly) _UILAConfigurationHistory * _configurationHistory;                                                        //@synthesize configurationHistory=_configurationHistory - In the implementation block
@property (assign,nonatomic) BOOL layoutFillsCanvas;                                                                                            //@synthesize layoutFillsCanvas=_layoutFillsCanvas - In the implementation block
@property (assign,nonatomic) BOOL layoutUsesCanvasMarginsWhenFilling;                                                                           //@synthesize layoutUsesCanvasMarginsWhenFilling=_layoutUsesCanvasMarginsWhenFilling - In the implementation block
@property (assign,nonatomic,__weak) UIView * canvas;                                                                                            //@synthesize canvas=_canvas - In the implementation block
@property (assign,nonatomic) long long axis;                                                                                                    //@synthesize axis=_axis - In the implementation block
@property (nonatomic,copy,readonly) NSArray * items; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSSet * _newlyHiddenItems; 
@property (nonatomic,readonly) NSSet * _newlyUnhiddenItems; 
+(Class)_configurationHistoryClass;
-(id)init;
-(NSArray *)items;
-(BOOL)_awaitingAnimationLayoutPass;
-(void)setCanvas:(UIView *)arg1 ;
-(void)removeItem:(id)arg1 ;
-(void)_visibilityParameterChangedForItem:(id)arg1 ;
-(long long)axis;
-(id)initWithItems:(id)arg1 ;
-(void)setAxis:(long long)arg1 ;
-(BOOL)layoutFillsCanvas;
-(void)setLayoutFillsCanvas:(BOOL)arg1 ;
-(BOOL)layoutUsesCanvasMarginsWhenFilling;
-(void)setLayoutUsesCanvasMarginsWhenFilling:(BOOL)arg1 ;
-(NSSet *)_newlyHiddenItems;
-(NSSet *)_newlyUnhiddenItems;
-(unsigned long long)_indexOfItemForLocationAttribute:(long long)arg1 ;
-(NSMutableArray *)_mutableItems;
-(BOOL)_usesInequalitySpanningConstraintForAttribute:(long long)arg1 ;
-(BOOL)_spanningGuideConstraintsNeedUpdate;
-(id)_viewOrGuideForLocationAttribute:(long long)arg1 ;
-(_UILayoutSpacer *)_spanningLayoutGuide;
-(BOOL)_canvasConnectionConstraintsNeedUpdatePass;
-(void)_trackChangesWithValue:(id)arg1 forKey:(id)arg2 ;
-(UIView *)canvas;
-(_UILAConfigurationHistory *)_configurationHistory;
-(id<_UILAPropertySource>)_propertySource;
-(BOOL)_hasStaleConfiguration;
-(void)_updateConfigurationHistory;
-(NSSet *)_outgoingItems;
-(BOOL)_itemWantsLayoutAsIfVisible:(id)arg1 ;
-(long long)_dimensionAttributeForCurrentAxis;
-(NSSet *)_incomingItems;
-(void)_updateArrangementConstraints;
-(void)_clearAllConstraintsArrays;
-(id)_identifierForSpanningLayoutGuide;
-(long long)_axisForSpanningLayoutGuide;
-(long long)_layoutRelationForCanvasConnectionForAttribute:(long long)arg1 ;
-(BOOL)_usesCenteringConnectionConstraint;
-(void)addItem:(id)arg1 ;
-(id)initWithItems:(id)arg1 onAxis:(long long)arg2 ;
-(void)insertItem:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)_didEvaluateMultilineHeightForView:(id)arg1 ;
-(void)_intrinsicContentSizeInvalidatedForItem:(id)arg1 ;
-(BOOL)_monitorsSystemLayoutFittingSizeForItem:(id)arg1 ;
-(void)_systemLayoutFittingSizeDidChangeForItem:(id)arg1 ;
-(void)_createSpanningLayoutGuide;
-(void)_updateSpanningLayoutGuideConstraintsIfNecessary;
-(void)_respondToChangesWithIncomingItem:(id)arg1 outgoingItem:(id)arg2 newlyHiddenItem:(id)arg3 newlyUnhiddenItem:(id)arg4 ;
-(void)_createUnanimatedConfigurationTargetIfNecessary;
-(void)_registerAnimationRequest;
-(void)_setUnanimatedConfigurationTarget:(id)arg1 ;
-(void)_removeSpanningLayoutGuide;
-(void)_clearCanvasConnectionConstraints;
-(void)_updateCanvasConnectionConstraintsIfNecessary;
-(id)_spanningLayoutGuideCreateIfNecessary;
-(long long)_minAttributeForCanvasConnections;
-(BOOL)_configurationRequiresCanvasConnectionFittingConstraint;
-(long long)_centerAttributeForCanvasConnections;
-(NSSet *)_hiddenItems;
-(_UILAConfigurationHistory *)_unanimatedConfigurationTarget;
-(void)_setMutableItems:(id)arg1 ;
@end

