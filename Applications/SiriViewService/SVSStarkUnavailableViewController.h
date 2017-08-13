//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SVSStarkItemController.h"

@class NSString, NSUUID, SVSStarkUnavailableSnippetView;

@interface SVSStarkUnavailableViewController : UIViewController <SVSStarkItemController>
{
    SVSStarkUnavailableSnippetView *_snippetView;	// 8 = 0x8
    _Bool _shouldSynthesizeTitles;	// 16 = 0x10
    _Bool _dismissAssistantAfterSpeaking;	// 17 = 0x11
    id <SVSStarkItemControllerDelegate> _delegate;	// 24 = 0x18
    NSString *_titleString;	// 32 = 0x20
    NSString *_subtitle;	// 40 = 0x28
    long long _interactionStyle;	// 48 = 0x30
    NSUUID *_conversationItemIdentifier;	// 56 = 0x38
}

@property(nonatomic) _Bool dismissAssistantAfterSpeaking; // @synthesize dismissAssistantAfterSpeaking=_dismissAssistantAfterSpeaking;
@property(nonatomic) _Bool shouldSynthesizeTitles; // @synthesize shouldSynthesizeTitles=_shouldSynthesizeTitles;
@property(copy, nonatomic) NSUUID *conversationItemIdentifier; // @synthesize conversationItemIdentifier=_conversationItemIdentifier;
@property(nonatomic) long long interactionStyle; // @synthesize interactionStyle=_interactionStyle;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy, nonatomic) NSString *titleString; // @synthesize titleString=_titleString;
@property(nonatomic) __weak id <SVSStarkItemControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;	// IMP=0x000000010001cbb8
- (_Bool)isActive;	// IMP=0x000000010001cae0
- (void)viewDidLoad;	// IMP=0x000000010001c7c4
- (void)loadView;	// IMP=0x000000010001c710
- (id)init;	// IMP=0x000000010001c5a0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

