//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IMKeyValueStoreTransaction, NSArray, NSData, NSDate, NSDictionary, NSNumber, NSString;

@interface IMKeyValueStoreNode : NSObject
{
    IMKeyValueStoreTransaction *_transaction;	// 8 = 0x8
    NSString *_key;	// 16 = 0x10
    NSString *_version;	// 24 = 0x18
    NSData *_value;	// 32 = 0x20
    _Bool _mismatch;	// 40 = 0x28
    int _wrapperRevision;	// 44 = 0x2c
    NSString *_name;	// 48 = 0x30
}

+ (id)assetIDForKey:(id)arg1 withPrefix:(id)arg2;	// IMP=0x00000001000679c0
+ (id)keysWithPrefix:(id)arg1 assetIDs:(id)arg2;	// IMP=0x0000000100067818
+ (id)keyWithPrefix:(id)arg1 assetID:(id)arg2;	// IMP=0x0000000100067794
+ (id)keyValueStoreDataFirstRevision;	// IMP=0x0000000100067748
+ (id)keyValueStoreDataCurrentRevision;	// IMP=0x00000001000676fc
+ (_Bool)isServerRevisionNewerThanClient:(id)arg1;	// IMP=0x0000000100067690
+ (void)setServerRevisionNewerThanClient:(id)arg1;	// IMP=0x0000000100067608
+ (id)serverRevisionNewerThanClientKeys;	// IMP=0x0000000100067590
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) int wrapperRevision; // @synthesize wrapperRevision=_wrapperRevision;
@property(nonatomic) _Bool mismatch; // @synthesize mismatch=_mismatch;
@property(retain, nonatomic) NSData *value; // @synthesize value=_value;
@property(retain, nonatomic) NSString *version; // @synthesize version=_version;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
@property(retain, nonatomic) IMKeyValueStoreTransaction *transaction; // @synthesize transaction=_transaction;
@property(retain, nonatomic) id objectValue; // @dynamic objectValue;
@property(retain, nonatomic) NSDictionary *dictionaryValue; // @dynamic dictionaryValue;
@property(retain, nonatomic) NSArray *arrayValue; // @dynamic arrayValue;
@property(retain, nonatomic) NSData *dataValue; // @dynamic dataValue;
@property(retain, nonatomic) NSDate *dateValue; // @dynamic dateValue;
@property(retain, nonatomic) NSNumber *numberValue; // @dynamic numberValue;
@property(retain, nonatomic) NSString *stringValue; // @dynamic stringValue;
- (id)objectValueMatchingClass:(Class)arg1;	// IMP=0x0000000100067bdc
- (_Bool)hasData;	// IMP=0x0000000100067bac
- (id)description;	// IMP=0x0000000100067af8
- (void)dealloc;	// IMP=0x0000000100067a44
- (id)init;	// IMP=0x00000001000679fc

@end

