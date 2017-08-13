//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SVSTranscriptViewControllerDataSource.h"
#import "SVSTranscriptViewControllerDelegate.h"
#import "UINavigationControllerDelegate.h"

@class NSArray, NSMutableArray, NSString, NSTimer, SVSTranscriptStackView, UINavigationController;

@interface SVSTranscriptStackViewController : UIViewController <SVSTranscriptViewControllerDataSource, SVSTranscriptViewControllerDelegate, UINavigationControllerDelegate>
{
    id <SVSTranscriptStackViewControllerDataSource> _dataSource;	// 8 = 0x8
    id <SVSTranscriptStackViewControllerDelegate> _delegate;	// 16 = 0x10
    UINavigationController *_navigationController;	// 24 = 0x18
    NSMutableArray *_navigationTransitionQueue;	// 32 = 0x20
    NSTimer *_navigationTransitionTimer;	// 40 = 0x28
}

+ (id)_createViewControllerWithItemIdentifier:(id)arg1;	// IMP=0x0000000100033330
@property(retain, nonatomic, getter=_navigationTransitionTimer, setter=_setNavigationTransitionTimer:) NSTimer *navigationTransitionTimer; // @synthesize navigationTransitionTimer=_navigationTransitionTimer;
@property(retain, nonatomic, getter=_navigationTransitionQueue, setter=_navigationTransitionQueue:) NSMutableArray *navigationTransitionQueue; // @synthesize navigationTransitionQueue=_navigationTransitionQueue;
@property(readonly, nonatomic, getter=_navigationController) UINavigationController *navigationController; // @synthesize navigationController=_navigationController;
@property(nonatomic) __weak id <SVSTranscriptStackViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <SVSTranscriptStackViewControllerDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;	// IMP=0x0000000100037044
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(_Bool)arg3;	// IMP=0x0000000100036c70
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(_Bool)arg3;	// IMP=0x0000000100036b88
- (void)transcriptViewController:(id)arg1 requestPasscodeUnlockWithCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100036b18
- (unsigned long long)deviceLockStateForTranscriptViewController:(id)arg1;	// IMP=0x0000000100036ac4
- (id)transcriptViewController:(id)arg1 updatedUserUtteranceForRefId:(id)arg2;	// IMP=0x0000000100036a3c
- (id)transcriptViewController:(id)arg1 additionalSpeechInterpretationsForRefId:(id)arg2;	// IMP=0x00000001000369b4
- (void)transcriptViewController:(id)arg1 didShowGuideStartDate:(id)arg2 endDate:(id)arg3;	// IMP=0x0000000100036928
- (void)transcriptViewController:(id)arg1 didShowTipWithIdentifier:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 flowID:(id)arg5;	// IMP=0x000000010003685c
- (void)transcriptViewController:(id)arg1 didShowAceViewWithIdentifier:(id)arg2 aceViewClass:(Class)arg3 metricsContext:(id)arg4 forInterval:(double)arg5;	// IMP=0x00000001000367b0
- (void)transcriptViewController:(id)arg1 didScrollForInterval:(double)arg2;	// IMP=0x0000000100036724
- (void)transcriptViewController:(id)arg1 didEditSpeechRecognized:(id)arg2 forInterval:(double)arg3;	// IMP=0x00000001000366a4
- (void)transcriptViewController:(id)arg1 shouldPresentPicker:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100036618
- (void)transcriptViewController:(id)arg1 setStatusBarHidden:(_Bool)arg2;	// IMP=0x00000001000365c0
- (void)transcriptViewController:(id)arg1 willDismissViewController:(id)arg2;	// IMP=0x0000000100036550
- (void)transcriptViewController:(id)arg1 willPresentViewController:(id)arg2;	// IMP=0x00000001000364e0
- (void)transcriptViewController:(id)arg1 setStatusViewHidden:(_Bool)arg2;	// IMP=0x0000000100036488
- (void)cancelSpeakingForTranscriptViewController:(id)arg1;	// IMP=0x0000000100036440
- (void)transcriptViewController:(id)arg1 speakText:(id)arg2 isPhonetic:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000001000363a4
- (void)cancelRequestForTranscriptViewController:(id)arg1;	// IMP=0x000000010003635c
- (void)transcriptViewControllerDidEndEditing:(id)arg1;	// IMP=0x0000000100036314
- (void)transcriptViewControllerWillBeginEditing:(id)arg1;	// IMP=0x00000001000362cc
- (_Bool)transcriptViewControllerShouldPreventUserInteraction:(id)arg1;	// IMP=0x0000000100036278
- (void)transcriptViewController:(id)arg1 performAceCommand:(id)arg2 conversationItemIdentifier:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000001000361c8
- (void)transcriptViewController:(id)arg1 showSiriStatusWithText:(id)arg2 speakableDescription:(id)arg3;	// IMP=0x00000001000361c4
- (void)transcriptViewController:(id)arg1 didCorrectRecognition:(id)arg2 correctionIdentifier:(id)arg3 forItemAtIndex:(long long)arg4 userSelectionResults:(id)arg5;	// IMP=0x00000001000360bc
- (void)transcriptViewController:(id)arg1 openURL:(id)arg2 conversationItemIdentifier:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000010003600c
- (id)effectiveCoreLocationBundleForTranscriptViewController:(id)arg1;	// IMP=0x0000000100035fb0
- (void)transcriptViewController:(id)arg1 didPresentConversationItemsWithIdentifiers:(id)arg2;	// IMP=0x0000000100035f40
- (void)transcriptViewController:(id)arg1 didHideVibrantView:(id)arg2;	// IMP=0x0000000100035ed0
- (void)transcriptViewControllerDidShowSuggestions:(id)arg1;	// IMP=0x0000000100035e88
- (_Bool)transcriptViewControllerWillShowSuggestions:(id)arg1;	// IMP=0x0000000100035e34
- (long long)initialDisplayTypeForTranscriptViewController:(id)arg1;	// IMP=0x0000000100035de0
- (struct CGRect)statusBarFrameForTranscriptViewController:(id)arg1;	// IMP=0x0000000100035d64
- (double)contentWidthForTranscriptViewController:(id)arg1;	// IMP=0x0000000100035d08
- (id)siriEnabledAppListForTranscriptViewController:(id)arg1;	// IMP=0x0000000100035cac
- (id)domainObjectStoreForTranscriptViewController:(id)arg1;	// IMP=0x0000000100035c50
- (id)conversationItemListForTranscriptViewController:(id)arg1;	// IMP=0x0000000100035b6c
- (long long)siriStateForTranscriptViewController:(id)arg1;	// IMP=0x0000000100035b18
- (void)_enumerateSortedParentItemIndexPathsForItemIndexPaths:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000100035ac4
- (void)_enumerateSortedParentItemIndexPathsForItemIndexPaths:(id)arg1 withOptions:(unsigned long long)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000100035670
- (id)_indexPathsForItemsAtIndexes:(id)arg1 inTranscriptViewController:(id)arg2;	// IMP=0x0000000100035480
- (id)_indexPathForItemAtIndex:(long long)arg1 inTranscriptViewController:(id)arg2;	// IMP=0x0000000100035420
- (id)_indexPathForViewControllerDisplayingItemAtIndexPath:(id)arg1;	// IMP=0x0000000100035410
- (id)_transcriptViewControllerDisplayingChildrenOfItemAtIndexPath:(id)arg1;	// IMP=0x00000001000353b0
- (id)_transcriptViewControllerDisplayingChildrenOfItemWithIdentifier:(id)arg1;	// IMP=0x0000000100035164
- (id)_indexPathForParentOfItemsInTranscriptViewController:(id)arg1;	// IMP=0x0000000100035100
- (id)_indexPathForItemWithIdentifier:(id)arg1;	// IMP=0x000000010003507c
- (id)_identifierOfItemAtIndexPath:(id)arg1;	// IMP=0x0000000100034ff8
- (id)_topTranscriptViewController;	// IMP=0x0000000100034fa4
- (void)siriDidDetectSpeechStartpoint;	// IMP=0x0000000100034f64
- (void)siriStoppedFingerprintingMusic;	// IMP=0x0000000100034f24
- (void)siriBeganFingerprintingMusic;	// IMP=0x0000000100034ee4
- (void)updateSuggestedUtterances:(id)arg1 forLanguage:(id)arg2;	// IMP=0x0000000100034d8c
- (void)changeUtterance:(id)arg1;	// IMP=0x0000000100034d20
- (void)_processTransitionQueue;	// IMP=0x0000000100034b14
- (void)_queuePushViewController:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0000000100034978
- (void)_queuePopToViewController:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00000001000347d4
- (void)siriDidFinishActionsForConversationItemWithIdentifier:(id)arg1;	// IMP=0x000000010003471c
- (void)presentationStateDidChangeForItemsAtIndexPaths:(id)arg1;	// IMP=0x00000001000345f0
- (void)removeItemsWithIdentifiers:(id)arg1 atIndexPaths:(id)arg2 parentItemIdentifiers:(id)arg3;	// IMP=0x0000000100034130
- (void)reloadItemsAtIndexPaths:(id)arg1;	// IMP=0x0000000100034004
- (void)insertItemsAtIndexPaths:(id)arg1;	// IMP=0x0000000100033ce0
@property(readonly, nonatomic) _Bool transcriptIsAnimating;
- (void)showTranscriptEnd;	// IMP=0x0000000100033c54
@property(readonly, nonatomic) _Bool transcriptEndIsVisible;
@property(readonly, nonatomic) _Bool transcriptStartIsVisible;
- (id)_conversation;	// IMP=0x0000000100033b60
- (void)siriRequestWillStart;	// IMP=0x0000000100033b20
- (void)siriDidDeactivate;	// IMP=0x0000000100033a04
- (void)siriDidTransitionFromState:(long long)arg1 event:(long long)arg2;	// IMP=0x00000001000338d8
- (void)siriWillActivateFromSource:(long long)arg1;	// IMP=0x00000001000337b4
@property(readonly, nonatomic) NSArray *requestContext;
- (void)statusBarFrameDidChange;	// IMP=0x0000000100033718
- (void)endEditingAndCorrect:(_Bool)arg1;	// IMP=0x00000001000335f4
- (void)showRootTranscript;	// IMP=0x000000010003357c
- (void)pinLastDisplayedChildOfItemWithIdentifier:(id)arg1;	// IMP=0x0000000100033530
- (void)pinItemWithIdentifier:(id)arg1;	// IMP=0x0000000100033478
- (id)identifierOfLastDisplayedChildOfItemWithIdentifier:(id)arg1;	// IMP=0x0000000100033424
- (id)_transcriptViewControllers;	// IMP=0x00000001000333d0
- (id)_createViewControllerWithItemIdentifier:(id)arg1;	// IMP=0x000000010003329c
- (void)reloadData;	// IMP=0x0000000100033170
- (void)loadView;	// IMP=0x0000000100032f24
- (void)dealloc;	// IMP=0x0000000100032e54
- (id)initWithNibName:(id)arg1 bundle:(id)arg2 delegate:(id)arg3 dataSource:(id)arg4;	// IMP=0x0000000100032af0
- (id)initWithDelegate:(id)arg1 dataSource:(id)arg2;	// IMP=0x0000000100032a8c
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0000000100032a28
- (void)svssvc_setConversation:(id)arg1;	// IMP=0x0000000100023b44
- (id)svssvc_conversation;	// IMP=0x0000000100023b38

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) SVSTranscriptStackView *view; // @dynamic view;

@end
