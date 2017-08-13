//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PBUserNotificationViewControllerDelegate.h"
#import "TVSUserNotificationDelegate.h"

@class NSMutableDictionary, NSString;

@interface PBUserNotificationHandler : NSObject <PBUserNotificationViewControllerDelegate, TVSUserNotificationDelegate>
{
    NSMutableDictionary *_displayedViewControllers;	// 8 = 0x8
    CDUnknownBlockType _notificationFilter;	// 16 = 0x10
}

@property(copy, nonatomic) CDUnknownBlockType notificationFilter; // @synthesize notificationFilter=_notificationFilter;
- (void).cxx_destruct;	// IMP=0x000000010000559c
- (void)_dismissViewController:(id)arg1;	// IMP=0x0000000100005488
- (void)didCancelUserNotificationViewController:(id)arg1;	// IMP=0x0000000100005408
- (void)userNotificationViewController:(id)arg1 didSelectButtonIndex:(unsigned long long)arg2;	// IMP=0x0000000100005378
- (id)_newViewControllerForNotification:(id)arg1;	// IMP=0x0000000100005294
- (void)userNotificationCenterDidCancelCFNotification:(id)arg1;	// IMP=0x00000001000051e8
- (void)userNotificationCenterDidReceiveCFNotification:(id)arg1;	// IMP=0x0000000100004e24
- (id)init;	// IMP=0x0000000100004da4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
