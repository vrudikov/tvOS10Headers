//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@protocol AFUISpeechSynthesisDelegate <NSObject>
- (void)speechSynthesisDidStopSpeakingQueueIsEmpty:(_Bool)arg1;
- (void)speechSynthesisDidStartSpeaking;
- (void)speechSynthesisExecuteAnimationForIdentifier:(NSString *)arg1;
- (void)speechSynthesisGetPreparedTextForIdentifier:(NSString *)arg1 completion:(void (^)(NSString *))arg2;
@end

