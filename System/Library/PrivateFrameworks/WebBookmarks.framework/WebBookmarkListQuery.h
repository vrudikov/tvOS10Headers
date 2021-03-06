/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:04:27 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray;

@interface WebBookmarkListQuery : NSObject {

	NSString* _query;
	NSString* _queryWithOrderBy;
	NSString* _orderBy;
	NSArray* _titleWordPrefixes;
	NSArray* _titleWordPrefixesForInMemoryFiltering;
	NSString* _urlFilter;
	BOOL _includeHidden;
	BOOL _countShouldUseNumChildrenIfPossible;
	BOOL _customQuery;
	int _folderID;

}

@property (getter=isCustomQuery,nonatomic,readonly) BOOL customQuery;              //@synthesize customQuery=_customQuery - In the implementation block
@property (nonatomic,readonly) int folderID;                                       //@synthesize folderID=_folderID - In the implementation block
-(id)init;
-(id)debugDescription;
-(id)initWithBookmarksWhere:(id)arg1 orderBy:(id)arg2 usingFilter:(id)arg3 ;
-(id)initWithFolderID:(int)arg1 inCollection:(id)arg2 includeHidden:(BOOL)arg3 usingFilter:(id)arg4 ;
-(id)initWithBookmarksWhere:(id)arg1 folderID:(int)arg2 orderBy:(id)arg3 usingFilter:(id)arg4 ;
-(BOOL)isCustomQuery;
-(id)bookmarksInCollection:(id)arg1 fromIndex:(unsigned)arg2 toIndex:(unsigned)arg3 ;
-(int)countInCollection:(id)arg1 ;
-(id)_normalizeUserTypedString:(id)arg1 ;
-(void)_preparePrefixesFromNormalizedString:(id)arg1 ;
-(long long)_listQueryType;
-(id)_sqliteNotInConditionForInMemoryDeletedBookmarksInFolder:(int)arg1 collection:(id)arg2 ;
-(int)_childCountInDatabaseForFolderFetchInCollection:(id)arg1 skipCountingInDatabaseBookmarksThatAreDeletedInMemory:(BOOL)arg2 ;
-(id)_whereClauseByAddingCondition:(id)arg1 ;
-(int)_inMemoryAddedChildrenCountForBookmarkFolder:(int)arg1 collection:(id)arg2 skipCountingBookmarksThatAreDeletedInMemory:(BOOL)arg3 ;
-(id)_filterBookmarks:(id)arg1 ;
-(int)folderID;
@end

