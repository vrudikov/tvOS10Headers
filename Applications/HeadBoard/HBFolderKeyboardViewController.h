//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UITextFieldDelegate.h"

@class HBKeyboardContainerView, NSLayoutConstraint, NSString, UISystemInputViewController, _HBFolderTextField;

@interface HBFolderKeyboardViewController : UIViewController <UITextFieldDelegate>
{
    struct {
        unsigned int delegateDidBeginEditing:1;
        unsigned int delegateDidEndEditing:1;
    } _flags;	// 8 = 0x8
    NSLayoutConstraint *_viewBottomToTextFieldBottomConstraint;	// 16 = 0x10
    NSLayoutConstraint *_viewBottomToKeyboardBottomConstraint;	// 24 = 0x18
    _Bool _editing;	// 32 = 0x20
    _Bool _hasTouchPad;	// 33 = 0x21
    NSString *_text;	// 40 = 0x28
    id <HBFolderKeyboardViewControllerDelegate> _delegate;	// 48 = 0x30
    _HBFolderTextField *_textField;	// 56 = 0x38
    HBKeyboardContainerView *_keyboardContainerView;	// 64 = 0x40
    UISystemInputViewController *_inputViewController;	// 72 = 0x48
}

@property(nonatomic) _Bool hasTouchPad; // @synthesize hasTouchPad=_hasTouchPad;
@property(nonatomic, getter=isEditing) _Bool editing; // @synthesize editing=_editing;
@property(retain, nonatomic) UISystemInputViewController *inputViewController; // @synthesize inputViewController=_inputViewController;
@property(retain, nonatomic) HBKeyboardContainerView *keyboardContainerView; // @synthesize keyboardContainerView=_keyboardContainerView;
@property(retain, nonatomic) _HBFolderTextField *textField; // @synthesize textField=_textField;
@property(nonatomic) __weak id <HBFolderKeyboardViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;	// IMP=0x00000001000126c8
- (_Bool)_enableAutomaticKeyboardPressDone;	// IMP=0x0000000100012598
- (_Bool)_disableAutomaticKeyboardUI;	// IMP=0x000000010001258c
- (void)_closeKeyboard:(id)arg1;	// IMP=0x0000000100011cc0
- (void)_cleanupSystemInputViewController;	// IMP=0x0000000100011bb4
- (void)_setupSystemInputViewController;	// IMP=0x0000000100011a4c
- (void)textFieldDidEndEditing:(id)arg1;	// IMP=0x00000001000119e4
- (void)textFieldDidBeginEditing:(id)arg1;	// IMP=0x000000010001197c
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x0000000100011798
- (id)preferredFocusEnvironments;	// IMP=0x00000001000116b4
- (void)updateViewConstraints;	// IMP=0x0000000100011578
- (void)viewDidLoad;	// IMP=0x0000000100010d7c
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0000000100010abc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

