//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SiriUIPresentation.h"

@class NSString;

@interface SiriEyesFreePresentation : NSObject <SiriUIPresentation>
{
    _Bool _hasReportedPresentation;	// 8 = 0x8
    id <SiriUIPresentationDataSource> _dataSource;	// 16 = 0x10
    id <SiriUIPresentationDelegate> _delegate;	// 24 = 0x18
}

@property(nonatomic) __weak id <SiriUIPresentationDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <SiriUIPresentationDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;	// IMP=0x000000010002e3c0
- (_Bool)shouldDismissForIdling;	// IMP=0x000000010002e364
- (double)idleTimerInterval;	// IMP=0x000000010002e35c
- (void)_didPresentItemsAtIndexPaths:(id)arg1;	// IMP=0x000000010002e098
- (void)reloadItemsAtIndexPaths:(id)arg1;	// IMP=0x000000010002e08c
- (void)insertItemsAtIndexPaths:(id)arg1;	// IMP=0x000000010002e080
- (long long)options;	// IMP=0x000000010002e078
- (void)siriDidDeactivate;	// IMP=0x000000010002e030
- (void)siriDidActivateFromSource:(long long)arg1;	// IMP=0x000000010002de20
- (id)initWithNibName:(id)arg1 bundle:(id)arg2 delegate:(id)arg3 dataSource:(id)arg4;	// IMP=0x000000010002dcc4
- (id)initWithDelegate:(id)arg1 dataSource:(id)arg2;	// IMP=0x000000010002dc60

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

