/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:04:50 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CKDatabaseOperation.h>

@class NSArray, NSMutableArray, NSMutableDictionary;

@interface CKModifyRecordZonesOperation : CKDatabaseOperation {

	BOOL _markZonesAsUserPurged;
	NSArray* _recordZonesToSave;
	NSArray* _recordZoneIDsToDelete;
	/*^block*/id _modifyRecordZonesCompletionBlock;
	NSMutableArray* _savedRecordZones;
	NSMutableArray* _deletedRecordZoneIDs;
	NSMutableDictionary* _recordZonesByZoneIDs;
	NSMutableDictionary* _recordZoneErrors;

}

@property (nonatomic,retain) NSMutableArray * savedRecordZones;                       //@synthesize savedRecordZones=_savedRecordZones - In the implementation block
@property (nonatomic,retain) NSMutableArray * deletedRecordZoneIDs;                   //@synthesize deletedRecordZoneIDs=_deletedRecordZoneIDs - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * recordZonesByZoneIDs;              //@synthesize recordZonesByZoneIDs=_recordZonesByZoneIDs - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * recordZoneErrors;                  //@synthesize recordZoneErrors=_recordZoneErrors - In the implementation block
@property (assign,nonatomic) BOOL markZonesAsUserPurged;                              //@synthesize markZonesAsUserPurged=_markZonesAsUserPurged - In the implementation block
@property (nonatomic,copy) NSArray * recordZonesToSave;                               //@synthesize recordZonesToSave=_recordZonesToSave - In the implementation block
@property (nonatomic,copy) NSArray * recordZoneIDsToDelete;                           //@synthesize recordZoneIDsToDelete=_recordZoneIDsToDelete - In the implementation block
@property (nonatomic,copy) id modifyRecordZonesCompletionBlock;                       //@synthesize modifyRecordZonesCompletionBlock=_modifyRecordZonesCompletionBlock - In the implementation block
-(id)init;
-(NSArray *)recordZonesToSave;
-(void)setRecordZonesToSave:(NSArray *)arg1 ;
-(NSArray *)recordZoneIDsToDelete;
-(void)setRecordZoneIDsToDelete:(NSArray *)arg1 ;
-(BOOL)markZonesAsUserPurged;
-(void)setMarkZonesAsUserPurged:(BOOL)arg1 ;
-(void)fillOutOperationInfo:(id)arg1 ;
-(void)fillFromOperationInfo:(id)arg1 ;
-(BOOL)hasCKOperationCallbacksSet;
-(id)modifyRecordZonesCompletionBlock;
-(BOOL)CKOperationShouldRun:(id*)arg1 ;
-(NSMutableDictionary *)recordZonesByZoneIDs;
-(NSMutableDictionary *)recordZoneErrors;
-(NSMutableArray *)deletedRecordZoneIDs;
-(NSMutableArray *)savedRecordZones;
-(void)setModifyRecordZonesCompletionBlock:(id)arg1 ;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(id)initWithRecordZonesToSave:(id)arg1 recordZoneIDsToDelete:(id)arg2 ;
-(id)activityCreate;
-(void)performCKOperation;
-(void)_handleProgressCallback:(id)arg1 ;
-(void)setSavedRecordZones:(NSMutableArray *)arg1 ;
-(void)setDeletedRecordZoneIDs:(NSMutableArray *)arg1 ;
-(void)setRecordZonesByZoneIDs:(NSMutableDictionary *)arg1 ;
-(void)setRecordZoneErrors:(NSMutableDictionary *)arg1 ;
@end

