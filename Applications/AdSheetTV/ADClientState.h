//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BKSApplicationStateMonitor, NSObject<OS_dispatch_queue>, NSString;

@interface ADClientState : NSObject
{
    NSString *_clientBundleID;	// 8 = 0x8
    BKSApplicationStateMonitor *_stateMonitor;	// 16 = 0x10
    id <ADClientStateDelegate> _delegate;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_instanceQueue;	// 32 = 0x20
}

@property(nonatomic) NSObject<OS_dispatch_queue> *instanceQueue; // @synthesize instanceQueue=_instanceQueue;
@property(readonly, nonatomic) id <ADClientStateDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) BKSApplicationStateMonitor *stateMonitor; // @synthesize stateMonitor=_stateMonitor;
@property(readonly, copy, nonatomic) NSString *clientBundleID; // @synthesize clientBundleID=_clientBundleID;
- (void)_notifyDelegateOfStateChange;	// IMP=0x0000000100014028
@property(readonly, nonatomic) unsigned int clientApplicationState;
- (id)clientStateTags;	// IMP=0x0000000100013db8
- (void)close;	// IMP=0x0000000100013d44
- (void)dealloc;	// IMP=0x0000000100013cac
- (void)globalStateDidChange:(id)arg1;	// IMP=0x0000000100013ca0
- (id)initWithDelegate:(id)arg1 bundleID:(id)arg2;	// IMP=0x0000000100013ab0

@end
