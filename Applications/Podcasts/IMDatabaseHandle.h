//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>;

@interface IMDatabaseHandle : NSObject
{
    struct sqlite3 *_databaseHandle;	// 8 = 0x8
    NSMutableDictionary *_statementCache;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_accessQueue;	// 24 = 0x18
}

+ (id)questionMarkListForCollection:(id)arg1;	// IMP=0x0000000100185854
- (_Bool)_bindArguments:(id)arg1 inStatement:(struct sqlite3_stmt *)arg2;	// IMP=0x0000000100185fd0
- (id)_stringRowsForQuery:(id)arg1;	// IMP=0x0000000100185c08
- (void)_reportErrorInFunction:(const char *)arg1;	// IMP=0x0000000100185b10
- (struct sqlite3 *)_databaseHandle;	// IMP=0x0000000100185b00
- (id)_cursorForQuery:(id)arg1 withArguments:(id)arg2;	// IMP=0x00000001001859a0
- (_Bool)passesIntegrityCheck;	// IMP=0x0000000100185930
- (id)stringColumnDataForQuery:(id)arg1 withArguments:(id)arg2;	// IMP=0x00000001001852ac
- (id)arrayForQuery:(id)arg1 arguments:(id)arg2 rawRows:(_Bool)arg3;	// IMP=0x0000000100184f78
- (id)arrayForQuery:(id)arg1 arguments:(id)arg2;	// IMP=0x0000000100184f68
- (_Bool)runStatement:(id)arg1 arguments:(id)arg2;	// IMP=0x0000000100184cc4
- (_Bool)runSql:(id)arg1 withArguments:(id)arg2;	// IMP=0x0000000100184c68
- (id)version;	// IMP=0x0000000100184c18
- (id)columnInfoForTable:(id)arg1;	// IMP=0x0000000100184bc8
- (id)tableNames;	// IMP=0x0000000100184bb4
- (void)dealloc;	// IMP=0x0000000100184a44
- (id)initWithPath:(id)arg1;	// IMP=0x0000000100184978

@end

