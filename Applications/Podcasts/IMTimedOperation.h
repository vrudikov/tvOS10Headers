//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IMOperation.h"

@class IMStopWatch;

@interface IMTimedOperation : IMOperation
{
    IMStopWatch *_stopwatch;	// 72 = 0x48
    _Bool _shouldReportDuration;	// 80 = 0x50
}

- (void)sendFinishedMessage;	// IMP=0x00000001001884f8
- (void)sendStartedMessage;	// IMP=0x0000000100188430
- (void)sendStartedMessageWithTimerDescription:(id)arg1;	// IMP=0x0000000100188390
- (void)setShouldReportDuration:(_Bool)arg1;	// IMP=0x0000000100188380
- (void)dealloc;	// IMP=0x0000000100188320

@end

