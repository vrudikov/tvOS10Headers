//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "AFQueueDelegate.h"
#import "SVSSuggestionsViewControllerDelegate.h"
#import "SVSTranscriptDataSource.h"
#import "SVSTranscriptDelegate.h"
#import "SiriUIAceObjectViewControllerDelegate.h"
#import "SiriUIAceObjectViewControllerDelegatePrivate.h"
#import "SiriUISnippetViewControllerDelegate.h"
#import "SiriUISnippetViewControllerDelegatePrivate.h"
#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"

@class NSMutableDictionary, NSMutableSet, NSString, NSUUID, SVSSuggestionsViewController, SVSTranscript, SVSTranscriptAnimationQueue, SVSTranscriptFlowLayout, SVSTranscriptView, SiriUITranscriptItem, UITapGestureRecognizer, UIViewController<SiriUIViewController>;

@interface SVSTranscriptViewController : UIViewController <AFQueueDelegate, SiriUISnippetViewControllerDelegate, SiriUISnippetViewControllerDelegatePrivate, SiriUIAceObjectViewControllerDelegate, SiriUIAceObjectViewControllerDelegatePrivate, SVSSuggestionsViewControllerDelegate, SVSTranscriptDataSource, SVSTranscriptDelegate, UICollectionViewDataSource, UICollectionViewDelegate>
{
    long long _updateAnimationCount;	// 8 = 0x8
    _Bool _viewIsDisappearing;	// 16 = 0x10
    _Bool _isWaitingForSpeechStartPoint;	// 17 = 0x11
    _Bool _isPinExpired;	// 18 = 0x12
    unsigned long long _displayedTranscriptItemCount;	// 24 = 0x18
    double _previousContentYOffset;	// 32 = 0x20
    NSMutableSet *_controllersTrackingScrollingEvent;	// 40 = 0x28
    double _contentOffsetPriorToDraggingY;	// 48 = 0x30
    _Bool _viewIsInViewHierarchy;	// 56 = 0x38
    _Bool _didLoadConversationList;	// 57 = 0x39
    _Bool _showsTranscriptEndWhenVisible;	// 58 = 0x3a
    id <SVSTranscriptViewControllerDataSource> _dataSource;	// 64 = 0x40
    id <SVSTranscriptViewControllerDelegate> _delegate;	// 72 = 0x48
    SVSSuggestionsViewController *_suggestionsViewController;	// 80 = 0x50
    SVSTranscriptFlowLayout *_layout;	// 88 = 0x58
    SVSTranscript *_transcript;	// 96 = 0x60
    SVSTranscriptAnimationQueue *_animationQueue;	// 104 = 0x68
    SVSTranscriptAnimationQueue *_pinAnimationQueue;	// 112 = 0x70
    double _lastAnimationTime;	// 120 = 0x78
    double _lastPinAnimationTime;	// 128 = 0x80
    double _currentPinMinimumDuration;	// 136 = 0x88
    SiriUITranscriptItem *_currentPin;	// 144 = 0x90
    NSMutableSet *_identifiersOfItemsWithPendingActions;	// 152 = 0x98
    NSMutableSet *_identifiersOfItemsWithFinishedActions;	// 160 = 0xa0
    UIViewController<SiriUIViewController> *_editingViewController;	// 168 = 0xa8
    UITapGestureRecognizer *_editingEndGestureRecognizer;	// 176 = 0xb0
    double _pinDistance;	// 184 = 0xb8
    double _gridHeight;	// 192 = 0xc0
    double _lastTranscriptDragStartTime;	// 200 = 0xc8
    double _lastTranscriptEditingStartTime;	// 208 = 0xd0
    NSMutableDictionary *_displayDateByTranscriptIdentifier;	// 216 = 0xd8
}

@property(readonly, nonatomic, getter=_displayDateByTranscriptIdentifier) NSMutableDictionary *displayDateByTranscriptIdentifier; // @synthesize displayDateByTranscriptIdentifier=_displayDateByTranscriptIdentifier;
@property(nonatomic, getter=_lastTranscriptEditingStartTime, setter=_setLastTranscriptEditingStartTime:) double lastTranscriptEditingStartTime; // @synthesize lastTranscriptEditingStartTime=_lastTranscriptEditingStartTime;
@property(nonatomic, getter=_lastTranscriptDragStartTime, setter=_setLastTranscriptDragStartTime:) double lastTranscriptDragStartTime; // @synthesize lastTranscriptDragStartTime=_lastTranscriptDragStartTime;
@property(readonly, nonatomic, getter=_gridHeight) double gridHeight; // @synthesize gridHeight=_gridHeight;
@property(readonly, nonatomic, getter=_pinDistance) double pinDistance; // @synthesize pinDistance=_pinDistance;
@property(nonatomic, getter=_showsTranscriptEndWhenVisible, setter=_setShowsTranscriptEndWhenVisible:) _Bool showsTranscriptEndWhenVisible; // @synthesize showsTranscriptEndWhenVisible=_showsTranscriptEndWhenVisible;
@property(retain, nonatomic, getter=_editingEndGestureRecognizer, setter=_setEditingEndGestureRecognizer:) UITapGestureRecognizer *editingEndGestureRecognizer; // @synthesize editingEndGestureRecognizer=_editingEndGestureRecognizer;
@property(retain, nonatomic, getter=_editingViewController, setter=_setEditingViewController:) UIViewController<SiriUIViewController> *editingViewController; // @synthesize editingViewController=_editingViewController;
@property(readonly, nonatomic, getter=_identifiersOfItemsWithFinishedActions) NSMutableSet *identifiersOfItemsWithFinishedActions; // @synthesize identifiersOfItemsWithFinishedActions=_identifiersOfItemsWithFinishedActions;
@property(readonly, nonatomic, getter=_identifiersOfItemsWithPendingActions) NSMutableSet *identifiersOfItemsWithPendingActions; // @synthesize identifiersOfItemsWithPendingActions=_identifiersOfItemsWithPendingActions;
@property(retain, nonatomic, getter=_currentPin, setter=_setCurrentPin:) SiriUITranscriptItem *currentPin; // @synthesize currentPin=_currentPin;
@property(nonatomic, getter=_currentPinMinimumDuration, setter=_setCurrentPinMinimumDuration:) double currentPinMinimumDuration; // @synthesize currentPinMinimumDuration=_currentPinMinimumDuration;
@property(nonatomic, getter=_lastPinAnimationTime, setter=_setLastPinAnimationTime:) double lastPinAnimationTime; // @synthesize lastPinAnimationTime=_lastPinAnimationTime;
@property(nonatomic, getter=_lastAnimationTime, setter=_setLastAnimationTime:) double lastAnimationTime; // @synthesize lastAnimationTime=_lastAnimationTime;
@property(readonly, nonatomic, getter=_pinAnimationQueue) SVSTranscriptAnimationQueue *pinAnimationQueue; // @synthesize pinAnimationQueue=_pinAnimationQueue;
@property(readonly, nonatomic, getter=_animationQueue) SVSTranscriptAnimationQueue *animationQueue; // @synthesize animationQueue=_animationQueue;
@property(nonatomic, getter=_didLoadConversationList, setter=_setDidLoadConversationList:) _Bool didLoadConversationList; // @synthesize didLoadConversationList=_didLoadConversationList;
@property(readonly, nonatomic, getter=_transcript) SVSTranscript *transcript; // @synthesize transcript=_transcript;
@property(readonly, nonatomic, getter=_layout) SVSTranscriptFlowLayout *layout; // @synthesize layout=_layout;
@property(readonly, nonatomic, getter=_suggestionsViewController) SVSSuggestionsViewController *suggestionsViewController; // @synthesize suggestionsViewController=_suggestionsViewController;
@property(nonatomic, getter=_viewIsInViewHierarchy, setter=_setViewIsInViewHierarchy:) _Bool viewIsInViewHierarchy; // @synthesize viewIsInViewHierarchy=_viewIsInViewHierarchy;
@property(nonatomic) __weak id <SVSTranscriptViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <SVSTranscriptViewControllerDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;	// IMP=0x00000001000134a8
- (void)_logMetricsForSnippetAtIndexPath:(id)arg1;	// IMP=0x0000000100012e10
- (void)_logMetricsForVisibleSnippets;	// IMP=0x0000000100012d28
- (id)mostRecentMetricsContext;	// IMP=0x0000000100012bd8
- (void)siriStoppedFingerprintingMusic;	// IMP=0x0000000100012bc0
- (void)siriBeganFingerprintingMusic;	// IMP=0x0000000100012ba8
- (void)changeUtterance:(id)arg1;	// IMP=0x00000001000129c4
- (void)_animateSnippetConfirmation:(id)arg1;	// IMP=0x00000001000128d4
- (void)_animateSnippetCancellation:(id)arg1;	// IMP=0x00000001000127e4
- (id)_tossAnimationForCell;	// IMP=0x00000001000125d0
- (void)_animateSnippetTossInCell:(id)arg1;	// IMP=0x00000001000124c8
- (void)_performNextAnimation;	// IMP=0x0000000100011cb0
- (_Bool)_shouldConditionallyPinToTranscriptItem:(id)arg1;	// IMP=0x00000001000115b8
- (void)_performNextPinAnimation;	// IMP=0x0000000100011320
- (void)_processPinAnimationQueue;	// IMP=0x0000000100010ff4
- (void)_scheduleNextPinAnimationAfterDelay:(double)arg1;	// IMP=0x0000000100010f84
- (void)_processAnimationQueue;	// IMP=0x0000000100010d0c
- (void)_scheduleNextAnimationAfterDelay:(double)arg1;	// IMP=0x0000000100010c9c
- (double)_nextPinAnimationTime;	// IMP=0x0000000100010a78
- (double)_nextAnimationTime;	// IMP=0x000000010001099c
- (void)queue:(id)arg1 didEnqueueObjects:(id)arg2;	// IMP=0x00000001000108dc
- (void)animateTranscriptWithUpdates:(CDUnknownBlockType)arg1;	// IMP=0x0000000100010834
- (double)_pinDistanceFromTop;	// IMP=0x00000001000107e0
- (struct UIEdgeInsets)_requiredExtraSpaceToPinTranscriptItem:(id)arg1;	// IMP=0x0000000100010628
- (void)_appendExtraSpaceToContentInsets;	// IMP=0x00000001000104fc
- (void)_pinTranscriptToCurrentPin;	// IMP=0x0000000100010318
- (struct CGRect)_frameForItemAtIndex:(unsigned long long)arg1;	// IMP=0x0000000100010250
- (void)pinItemWithIdentifier:(id)arg1;	// IMP=0x00000001000101a4
- (void)_tappedOutsideEditingView:(id)arg1;	// IMP=0x0000000100010030
- (void)_teardownEditingViewController:(id)arg1;	// IMP=0x000000010000ff7c
- (void)_setupEditingForViewController:(id)arg1;	// IMP=0x000000010000fe28
- (id)_indexPathForFirstResponder;	// IMP=0x000000010000fb00
- (void)_keyboardWillHide:(id)arg1;	// IMP=0x000000010000fa84
- (void)_keyboardDidShow:(id)arg1;	// IMP=0x000000010000f7dc
- (id)_indexPathForItemAtIndex:(long long)arg1;	// IMP=0x000000010000f7c4
- (id)_indexPathsForItemsAtIndexes:(id)arg1;	// IMP=0x000000010000f62c
- (id)_transcriptItemForSiriViewController:(id)arg1;	// IMP=0x000000010000f4b0
- (void)_registerReusableView:(Class)arg1;	// IMP=0x000000010000f0bc
- (id)_aceViewControllerIfExistsAtItemIndex:(long long)arg1;	// IMP=0x000000010000f040
- (id)_snippetViewControllerIfExistsAtItemIndex:(long long)arg1;	// IMP=0x000000010000efc4
- (id)_snippetViewControllerIfExistsForTranscriptItem:(id)arg1;	// IMP=0x000000010000ef44
- (id)_aceViewControllerIfExistsForTranscriptItem:(id)arg1;	// IMP=0x000000010000eec4
- (id)_controllerForItemIndex:(long long)arg1;	// IMP=0x000000010000ee40
- (Class)aceControllerCellClass;	// IMP=0x000000010000ee2c
- (Class)snippetControllerCellClass;	// IMP=0x000000010000ee18
- (double)_expectedWidthForItemIndex:(unsigned long long)arg1;	// IMP=0x000000010000ec78
- (_Bool)_itemIndexIsInset:(unsigned long long)arg1;	// IMP=0x000000010000ec2c
- (struct UIEdgeInsets)_edgeInsetsForItemIndex:(unsigned long long)arg1;	// IMP=0x000000010000ebe0
- (struct UIEdgeInsets)_transcriptItemLayoutMargins;	// IMP=0x000000010000ebb0
- (void)_updateBottomKeylineForScrollView:(id)arg1;	// IMP=0x000000010000eae8
- (void)_processHidingSnippetView:(id)arg1;	// IMP=0x000000010000e548
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x000000010000e4e8
- (void)scrollViewDidEndDecelerating:(id)arg1;	// IMP=0x000000010000e40c
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;	// IMP=0x000000010000e318
- (void)notifySnippetsEndDraggingEventForScrollView:(id)arg1;	// IMP=0x000000010000e1cc
- (void)scrollViewWillBeginDragging:(id)arg1;	// IMP=0x000000010000e104
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;	// IMP=0x000000010000e0f8
- (double)_heightForFooterAtItemIndex:(long long)arg1;	// IMP=0x000000010000dfd0
- (double)_heightForHeaderAtItemIndex:(long long)arg1;	// IMP=0x000000010000dea8
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;	// IMP=0x000000010000dbf0
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;	// IMP=0x000000010000da44
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;	// IMP=0x000000010000d8ac
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x000000010000cbb4
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x000000010000cba4
- (long long)numberOfSectionsInCollectionView:(id)arg1;	// IMP=0x000000010000cb9c
- (void)transcript:(id)arg1 performAceCommands:(id)arg2 conversationItemIdentifier:(id)arg3;	// IMP=0x000000010000ca14
- (void)transcript:(id)arg1 presentationStateDidChangeForItemsAtIndexPaths:(id)arg2;	// IMP=0x000000010000c588
- (void)transcript:(id)arg1 didRemoveTranscriptItems:(id)arg2 atIndexes:(id)arg3;	// IMP=0x000000010000c0f4
- (void)transcript:(id)arg1 didReloadTranscriptItemsAtIndexes:(id)arg2;	// IMP=0x000000010000bf80
- (void)transcript:(id)arg1 didReplaceTranscriptItemsAtIndexes:(id)arg2 replacedTranscriptItems:(id)arg3;	// IMP=0x000000010000b528
- (id)_invalidIndexesToRemoveBeforeIndex:(long long)arg1;	// IMP=0x000000010000b2d8
- (void)transcript:(id)arg1 didDiscardTranscriptItemsWithConversationItemIdentifiers:(id)arg2;	// IMP=0x000000010000b280
- (void)transcript:(id)arg1 didInsertTranscriptItemsAtIndexes:(id)arg2;	// IMP=0x000000010000a93c
- (void)_removeConversationItemWithIdentifier:(id)arg1;	// IMP=0x000000010000a8e8
- (void)_removeConversationItemsWithIdentifiers:(id)arg1;	// IMP=0x000000010000a878
- (void)_updateTitle;	// IMP=0x000000010000a63c
- (id)viewControllerDelegateForTranscript:(id)arg1;	// IMP=0x000000010000a638
- (long long)transcript:(id)arg1 presentationStateForItemAtIndex:(long long)arg2;	// IMP=0x000000010000a5e8
- (id)transcript:(id)arg1 aceObjectForItemAtIndex:(long long)arg2;	// IMP=0x000000010000a590
- (_Bool)transcript:(id)arg1 itemAtIndexIsVirgin:(long long)arg2;	// IMP=0x000000010000a540
- (id)transcript:(id)arg1 aceCommandIdentifierForItemAtIndex:(long long)arg2;	// IMP=0x000000010000a4e8
- (id)transcript:(id)arg1 dialogPhaseForItemAtIndex:(long long)arg2;	// IMP=0x000000010000a4d8
- (id)transcript:(id)arg1 identifierOfItemAtIndex:(long long)arg2;	// IMP=0x000000010000a480
- (id)_aceCommandIdentifierForItemAtIndex:(long long)arg1;	// IMP=0x000000010000a42c
- (id)_dialogPhaseForItemAtIndex:(long long)arg1;	// IMP=0x000000010000a3d8
- (id)_conversationItemAtIndex:(long long)arg1;	// IMP=0x000000010000a37c
- (long long)numberOfItemsInTranscript:(id)arg1;	// IMP=0x000000010000a330
- (double)statusViewHeightForSuggestionsViewController:(id)arg1;	// IMP=0x000000010000a2fc
- (struct CGRect)statusBarFrameForSuggestionsViewController:(id)arg1;	// IMP=0x000000010000a280
- (void)suggestionsViewController:(id)arg1 didHideVibrantView:(id)arg2;	// IMP=0x000000010000a210
- (void)suggestionsViewDidShowSuggestions:(id)arg1;	// IMP=0x000000010000a1c8
- (void)cancelSpeakingForSiriViewController:(id)arg1;	// IMP=0x000000010000a180
- (void)siriViewController:(id)arg1 speakText:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010000a12c
- (void)_speakText:(id)arg1 isPhonetic:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010000a090
- (id)siriEnabledAppListForSiriViewController:(id)arg1;	// IMP=0x000000010000a034
- (unsigned long long)siriDeviceLockStateForSnippetViewController:(id)arg1;	// IMP=0x0000000100009fe0
- (void)siriSnippetViewController:(id)arg1 requestPasscodeUnlockWithCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100009f70
- (void)siriSnippetViewController:(id)arg1 shouldPresentPicker:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100009ee4
- (void)siriSnippetViewController:(id)arg1 setStatusBarHidden:(_Bool)arg2;	// IMP=0x0000000100009e8c
- (void)siriSnippetViewController:(id)arg1 willDismissViewController:(id)arg2;	// IMP=0x0000000100009e1c
- (void)siriSnippetViewController:(id)arg1 willPresentViewController:(id)arg2;	// IMP=0x0000000100009dac
- (void)siriSnippetViewController:(id)arg1 setStatusViewHidden:(_Bool)arg2;	// IMP=0x0000000100009d54
- (void)siriViewController:(id)arg1 didHideVibrantView:(id)arg2;	// IMP=0x0000000100009ce4
- (id)persistentStoreForSiriViewController:(id)arg1;	// IMP=0x0000000100009c90
- (id)persistentDataStoreForSiriViewController:(id)arg1;	// IMP=0x0000000100009ba4
- (void)cancelRequestForSiriSnippetViewController:(id)arg1;	// IMP=0x0000000100009b5c
- (void)siriSnippetViewController:(id)arg1 didShowGuideStartDate:(id)arg2 endDate:(id)arg3;	// IMP=0x0000000100009ad0
- (_Bool)siriSnippetViewControllerIsVisible:(id)arg1;	// IMP=0x0000000100009704
- (void)siriSnippetViewControllerViewDidLoad:(id)arg1;	// IMP=0x0000000100009698
- (void)siriSnippetViewControllerWillBecomeFirstResponder:(id)arg1;	// IMP=0x0000000100009650
- (double)siriSnippetViewControllerExpectedWidth:(id)arg1;	// IMP=0x0000000100009644
- (void)siriViewController:(id)arg1 setContentOffset:(double)arg2;	// IMP=0x00000001000094a4
- (struct UIEdgeInsets)siriViewControllerDisplayInsetsForVisibleSpace:(id)arg1;	// IMP=0x0000000100009490
- (struct UIEdgeInsets)siriViewControllerBackgroundInsets:(id)arg1;	// IMP=0x0000000100009344
- (struct CGSize)siriViewControllerVisibleContentArea:(id)arg1;	// IMP=0x0000000100009250
- (double)siriViewControllerExpectedWidth:(id)arg1;	// IMP=0x000000010000912c
- (void)siriViewControllerHeightDidChange:(id)arg1 pinTopOfSnippet:(_Bool)arg2;	// IMP=0x0000000100008f48
- (void)siriViewControllerHeightDidChange:(id)arg1 heightDifference:(double)arg2;	// IMP=0x0000000100008e6c
- (void)siriViewControllerHeightDidChange:(id)arg1;	// IMP=0x0000000100008e5c
- (void)siriSnippetViewController:(id)arg1 pushSirilandSnippets:(id)arg2;	// IMP=0x0000000100008cac
- (void)removeSiriViewController:(id)arg1;	// IMP=0x0000000100008c38
- (void)siriViewController:(id)arg1 startCorrectedSpeechRequestWithText:(id)arg2 correctionIdentifier:(id)arg3 userSelectionResults:(id)arg4;	// IMP=0x0000000100008980
- (void)siriViewControllerDidEndEditing:(id)arg1;	// IMP=0x00000001000087a4
- (void)siriViewControllerWillBeginEditing:(id)arg1;	// IMP=0x0000000100008674
- (void)siriViewControllerRequestToPin:(id)arg1;	// IMP=0x00000001000085c8
- (_Bool)siriViewControllerShouldPreventUserInteraction:(id)arg1;	// IMP=0x0000000100008574
- (void)siriViewController:(id)arg1 addSelectionResponse:(id)arg2;	// IMP=0x000000010000846c
- (id)siriViewController:(id)arg1 listItemToPickInAutodisambiguationForListItems:(id)arg2;	// IMP=0x00000001000083e4
- (id)siriViewController:(id)arg1 disambiguationItemForListItem:(id)arg2 disambiguationKey:(id)arg3;	// IMP=0x0000000100008340
- (id)siriViewController:(id)arg1 filteredDisambiguationListItems:(id)arg2;	// IMP=0x00000001000082b8
- (id)siriViewControllerEffectiveBundleForCoreLocation:(id)arg1;	// IMP=0x0000000100008184
- (_Bool)siriViewController:(id)arg1 openPunchOut:(id)arg2;	// IMP=0x0000000100008098
- (void)siriViewController:(id)arg1 setDomainObject:(id)arg2 forIdentifier:(id)arg3;	// IMP=0x0000000100008010
- (id)siriViewController:(id)arg1 domainObjectForIdentifier:(id)arg2;	// IMP=0x0000000100007f8c
- (id)_domainObjectStore;	// IMP=0x0000000100007f30
- (void)siriViewController:(id)arg1 sendGenericAceCommands:(id)arg2;	// IMP=0x0000000100007d5c
- (id)updatedUserUtteranceForSiriViewController:(id)arg1;	// IMP=0x0000000100007c8c
- (id)additionalSpeechInterpretationsForSiriViewController:(id)arg1;	// IMP=0x0000000100007bbc
- (void)siriViewController:(id)arg1 openURL:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100007ac0
- (_Bool)siriViewController:(id)arg1 openURL:(id)arg2;	// IMP=0x0000000100007a64
- (void)siriViewController:(id)arg1 performAceCommands:(id)arg2;	// IMP=0x0000000100007890
- (id)requestContext;	// IMP=0x0000000100007784
- (void)siriDidDetectSpeechStartpoint;	// IMP=0x0000000100007574
- (void)endEditingAndCorrect:(_Bool)arg1;	// IMP=0x0000000100007508
- (void)siriRequestWillStart;	// IMP=0x000000010000744c
- (void)siriDidFinishActionsForConversationItemWithIdentifier:(id)arg1;	// IMP=0x00000001000072fc
- (void)presentationStateDidChangeForItemsAtIndexes:(id)arg1;	// IMP=0x0000000100007290
- (void)removeItemsWithIdentifiers:(id)arg1 atIndexes:(id)arg2;	// IMP=0x0000000100007208
- (void)reloadItemsAtIndexes:(id)arg1;	// IMP=0x000000010000719c
- (void)insertItemsAtIndexes:(id)arg1;	// IMP=0x00000001000070cc
- (void)reloadData;	// IMP=0x0000000100006f08
@property(readonly, nonatomic) _Bool transcriptIsAnimating;
- (void)showTranscriptEnd;	// IMP=0x0000000100006d20
@property(readonly, nonatomic) _Bool transcriptEndIsVisible;
@property(readonly, nonatomic) _Bool transcriptStartIsVisible;
- (double)_contentHeight;	// IMP=0x0000000100006c00
- (struct CGPoint)_contentOffset;	// IMP=0x0000000100006ba4
@property(readonly, nonatomic) NSUUID *identifierOfLastDisplayedItem;
- (void)updateSuggestedUtterances:(id)arg1 forLanguage:(id)arg2;	// IMP=0x00000001000069f8
- (void)_showSuggestionsIfNecessary;	// IMP=0x0000000100006414
- (void)_showListeningNudgeIfNecessary;	// IMP=0x0000000100006310
- (void)statusBarFrameDidChange;	// IMP=0x0000000100006300
- (void)_updateViewTopMarginHeight;	// IMP=0x00000001000061d4
- (void)_updateNavigationBarFrame;	// IMP=0x0000000100006090
- (_Bool)_isNavigationBarHidden;	// IMP=0x0000000100006044
- (id)_navigationBar;	// IMP=0x0000000100005ff0
- (void)_updateStatusBarRelatedAttributesAndUpdateContentInset:(_Bool)arg1;	// IMP=0x0000000100005f98
- (struct CGRect)_statusBarFrame;	// IMP=0x0000000100005f1c
- (void)didRotateFromInterfaceOrientation:(long long)arg1;	// IMP=0x0000000100005e60
- (id)_conversationItemList;	// IMP=0x0000000100005e04
- (void)siriDidDeactivate;	// IMP=0x0000000100005d3c
- (void)siriDidTransitionFromState:(long long)arg1 event:(long long)arg2;	// IMP=0x0000000100005c30
- (void)siriWillActivateFromSource:(long long)arg1;	// IMP=0x0000000100005b5c
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x0000000100005afc
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0000000100005a80
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000001000059ac
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00000001000051a0
- (void)_runSirilandTransitionTestWithIterations:(int)arg1;	// IMP=0x0000000100004fc8
- (_Bool)_isRootViewController;	// IMP=0x0000000100004f40
- (double)_navigationControllerContentOffsetAdjustment;	// IMP=0x0000000100004f38
- (void)_setNavigationControllerContentInsetAdjustment:(struct UIEdgeInsets)arg1;	// IMP=0x0000000100004f34
- (void)_updateGridAndPinHeight;	// IMP=0x0000000100004c48
- (double)_bottomBarInset;	// IMP=0x0000000100004c1c
- (double)_topBarHeight;	// IMP=0x0000000100004b58
- (void)_updateViewContentInset;	// IMP=0x0000000100004ad4
- (id)_collectionView;	// IMP=0x0000000100004a80
- (void)viewDidLayoutSubviews;	// IMP=0x00000001000049d4
- (void)viewDidLoad;	// IMP=0x0000000100004844
- (void)loadView;	// IMP=0x0000000100004584
- (void)dealloc;	// IMP=0x000000010000445c
- (void)invalidate;	// IMP=0x000000010000441c
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0000000100004158
- (void)svscvc_setItemIdentifier:(id)arg1;	// IMP=0x00000001000370c4
- (id)svscvc_itemIdentifier;	// IMP=0x00000001000370b8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) SVSTranscriptView *view; // @dynamic view;

@end
