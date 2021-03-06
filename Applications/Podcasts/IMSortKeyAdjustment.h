//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface IMSortKeyAdjustment : NSObject
{
    NSString *_sortKey;	// 8 = 0x8
    unsigned long long _stride;	// 16 = 0x10
}

@property(readonly, nonatomic) NSString *sortKey; // @synthesize sortKey=_sortKey;
@property(readonly, nonatomic) unsigned long long stride; // @synthesize stride=_stride;
- (_Bool)resortKeyValueCodingObjects:(id)arg1;	// IMP=0x00000001001df19c
- (void)resetKeyValueCodingObjects:(id)arg1;	// IMP=0x00000001001defcc
- (void)dealloc;	// IMP=0x00000001001def6c
- (id)initWithSortKey:(id)arg1 stride:(unsigned long long)arg2;	// IMP=0x00000001001def04

@end

