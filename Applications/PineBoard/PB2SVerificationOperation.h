//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TVS2SVerificationOperation.h"

#import "PBTextEntryViewControllerDelegate.h"

@class NSString;

@interface PB2SVerificationOperation : TVS2SVerificationOperation <PBTextEntryViewControllerDelegate>
{
    unsigned long long _submitIndex;	// 120 = 0x78
    unsigned long long _sendCodeIndex;	// 128 = 0x80
    CDUnknownBlockType _codeHandler;	// 136 = 0x88
    CDUnknownBlockType _sendNewCode;	// 144 = 0x90
}

@property(copy, nonatomic) CDUnknownBlockType sendNewCode; // @synthesize sendNewCode=_sendNewCode;
@property(copy, nonatomic) CDUnknownBlockType codeHandler; // @synthesize codeHandler=_codeHandler;
- (void).cxx_destruct;	// IMP=0x0000000100066564
- (void)textEntryDidCancel:(id)arg1;	// IMP=0x000000010006646c
- (void)textEntry:(id)arg1 didSelectButtonAtIndex:(unsigned long long)arg2;	// IMP=0x00000001000662e4
- (void)presentFailureAlertWithTitle:(id)arg1 message:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100065f50
- (void)presentCodeEntryAlertWithTitle:(id)arg1 message:(id)arg2 newCodeLabel:(id)arg3 submitLabel:(id)arg4 newCodeRequestHandler:(CDUnknownBlockType)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x0000000100065be0
- (void)presentDevicesAlertWithTitle:(id)arg1 message:(id)arg2 deviceList:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000100065560

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

