/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:04:59 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class NSArray, ML3DatabaseConnection;

@interface ML3ContainerItemDiffOperation : NSOperation {

	long long _containerPersistentID;
	NSArray* _updatedItemsPersistentIDs;
	ML3DatabaseConnection* _connection;
	NSArray* _containerItemsToUpdate;
	NSArray* _containerItemsToDelete;

}

@property (nonatomic,retain) NSArray * containerItemsToUpdate;              //@synthesize containerItemsToUpdate=_containerItemsToUpdate - In the implementation block
@property (nonatomic,retain) NSArray * containerItemsToDelete;              //@synthesize containerItemsToDelete=_containerItemsToDelete - In the implementation block
-(void)main;
-(id)initWithContainerPersistentID:(long long)arg1 updatedItemsPersistentIDs:(id)arg2 connection:(id)arg3 ;
-(NSArray *)containerItemsToDelete;
-(NSArray *)containerItemsToUpdate;
-(void)setContainerItemsToUpdate:(NSArray *)arg1 ;
-(void)setContainerItemsToDelete:(NSArray *)arg1 ;
@end
