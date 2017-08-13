//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TVSCarMVerificationOperation.h"

#import "PBTextEntryViewControllerDelegate.h"

@class NSString;

@interface PBCarMVerificationOperation : TVSCarMVerificationOperation <PBTextEntryViewControllerDelegate>
{
    unsigned long long _submitIndex;	// 120 = 0x78
    unsigned long long _sendCodeIndex;	// 128 = 0x80
    CDUnknownBlockType _codeHandler;	// 136 = 0x88
    CDUnknownBlockType _sendNewCodeBlock;	// 144 = 0x90
}

@property(copy, nonatomic) CDUnknownBlockType sendNewCodeBlock; // @synthesize sendNewCodeBlock=_sendNewCodeBlock;
@property(copy, nonatomic) CDUnknownBlockType codeHandler; // @synthesize codeHandler=_codeHandler;
- (void).cxx_destruct;	// IMP=0x00000001000a6e7c
- (void)textEntryDidCancel:(id)arg1;	// IMP=0x00000001000a6d84
- (void)textEntry:(id)arg1 didSelectButtonAtIndex:(unsigned long long)arg2;	// IMP=0x00000001000a6bfc
- (void)presentFailureAlertWithTitle:(id)arg1 message:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001000a6934
- (void)presentCodeEntryAlertWithTitle:(id)arg1 message:(id)arg2 newCodeLabel:(id)arg3 submitLabel:(id)arg4 newCodeRequestHandler:(CDUnknownBlockType)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x00000001000a65c0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

