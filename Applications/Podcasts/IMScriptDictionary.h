//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary;

@interface IMScriptDictionary : NSObject
{
    NSDictionary *_dictionary;	// 8 = 0x8
}

+ (_Bool)isKeyExcludedFromWebScript:(const char *)arg1;	// IMP=0x000000010019672c
@property(readonly) NSDictionary *dictionary; // @synthesize dictionary=_dictionary;
- (id)attributeKeys;	// IMP=0x0000000100196734
- (id)valueForKey:(id)arg1;	// IMP=0x0000000100196714
- (void)setValue:(id)arg1 forKey:(id)arg2;	// IMP=0x00000001001966c0
- (id)description;	// IMP=0x000000010019663c
- (void)dealloc;	// IMP=0x00000001001965e0
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000100196578
- (id)init;	// IMP=0x0000000100196568

@end

