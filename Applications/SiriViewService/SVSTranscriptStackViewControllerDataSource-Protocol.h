//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AFConversation, NSSet, SVSTranscriptStackViewController;

@protocol SVSTranscriptStackViewControllerDataSource <NSObject>
- (NSSet *)siriEnabledAppListForTranscriptStackViewController:(SVSTranscriptStackViewController *)arg1;
- (id <AFUIDomainObjectStore>)domainObjectStoreForTranscriptStackViewController:(SVSTranscriptStackViewController *)arg1;
- (AFConversation *)conversationForTranscriptStackViewController:(SVSTranscriptStackViewController *)arg1;
- (long long)siriStateForTranscriptStackViewController:(SVSTranscriptStackViewController *)arg1;
@end

