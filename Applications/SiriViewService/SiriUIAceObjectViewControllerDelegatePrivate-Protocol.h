//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AFUserUtteranceSelectionResults, NSString;

@protocol SiriUIAceObjectViewControllerDelegatePrivate <NSObject>
- (void)removeSiriViewController:(id <SiriUIViewController>)arg1;
- (void)siriViewControllerRequestToPin:(id <SiriUIViewController>)arg1;
- (void)siriViewController:(id <SiriUIViewController>)arg1 startCorrectedSpeechRequestWithText:(NSString *)arg2 correctionIdentifier:(id)arg3 userSelectionResults:(AFUserUtteranceSelectionResults *)arg4;
- (void)siriViewControllerDidEndEditing:(id <SiriUIViewController>)arg1;
- (void)siriViewControllerWillBeginEditing:(id <SiriUIViewController>)arg1;
- (_Bool)siriViewControllerShouldPreventUserInteraction:(id <SiriUIViewController>)arg1;
@end

