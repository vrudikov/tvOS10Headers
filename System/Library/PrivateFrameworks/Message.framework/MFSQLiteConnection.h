/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:10 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Message/Message-Structs.h>
@class NSString, MFWeakReferenceHolder, MFSQLiteConnectionPool;

@interface MFSQLiteConnection : NSObject {

	NSString* _path;
	sqlite3Ref _db;
	MFWeakReferenceHolder* _poolHolder;
	NSString* _databaseName;
	CFDictionaryRef _statementCache;
	void* _ICUSearchContext;
	void* _CPSearchContext;
	int _transactionType;
	unsigned long long _transactionCount;

}

@property (assign,nonatomic,__weak) MFSQLiteConnectionPool * pool; 
@property (nonatomic,readonly) NSString * databaseName;                         //@synthesize databaseName=_databaseName - In the implementation block
@property (nonatomic,readonly) sqlite3Ref db;                                   //@synthesize db=_db - In the implementation block
-(int)beginTransaction;
-(void)dealloc;
-(void)flush;
-(int)commitTransaction;
-(void)close;
-(BOOL)isOpen;
-(int)open;
-(sqlite3Ref)db;
-(int)beginTransactionWithType:(int)arg1 ;
-(int)rollbackTransaction;
-(MFSQLiteConnectionPool *)pool;
-(sqlite3_stmtRef)preparedStatementForPattern:(id)arg1 ;
-(const char*)_vfsModuleName;
-(id)initWithPath:(id)arg1 databaseName:(id)arg2 ;
-(NSString *)databaseName;
-(void)setPool:(MFSQLiteConnectionPool *)arg1 ;
@end

