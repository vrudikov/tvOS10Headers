//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@interface MTPlaybackContext : NSObject <NSCopying>
{
    _Bool _interactive;	// 8 = 0x8
    unsigned long long _source;	// 16 = 0x10
    unsigned long long _presentationType;	// 24 = 0x18
    unsigned long long _upNextQueueAction;	// 32 = 0x20
}

+ (id)contextWithReason:(unsigned long long)arg1;	// IMP=0x000000010012ed10
+ (id)defaultContext;	// IMP=0x000000010012ec94
@property(nonatomic) unsigned long long upNextQueueAction; // @synthesize upNextQueueAction=_upNextQueueAction;
@property(nonatomic) unsigned long long presentationType; // @synthesize presentationType=_presentationType;
@property(nonatomic, getter=isInteractive) _Bool interactive; // @synthesize interactive=_interactive;
@property(nonatomic) unsigned long long source; // @synthesize source=_source;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010012ed58

@end

