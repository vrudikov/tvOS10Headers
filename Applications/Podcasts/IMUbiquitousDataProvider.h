//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IMUbiquitousPersistentStoreLoader, NSManagedObjectModel, NSMutableDictionary, NSObject<OS_dispatch_source>, NSPersistentStore, NSPersistentStoreCoordinator, NSString;

@interface IMUbiquitousDataProvider : NSObject
{
    NSManagedObjectModel *_managedObjectModel;	// 8 = 0x8
    NSPersistentStoreCoordinator *_persistentStoreCoordinator;	// 16 = 0x10
    NSPersistentStore *_currentPersistentStore;	// 24 = 0x18
    int _currentPersistentStoreType;	// 32 = 0x20
    IMUbiquitousPersistentStoreLoader *_bringUpPersistentStoreLoader;	// 40 = 0x28
    IMUbiquitousPersistentStoreLoader *_localPersistentStoreLoader;	// 48 = 0x30
    IMUbiquitousPersistentStoreLoader *_ubiquityPersistentStoreLoader;	// 56 = 0x38
    long long _onceToken;	// 64 = 0x40
    _Bool _ubiquityEnabled;	// 72 = 0x48
    _Bool _metadataDictionaryDirty;	// 73 = 0x49
    NSObject<OS_dispatch_source> *_ubiquitousStoreRetryTimer;	// 80 = 0x50
    NSMutableDictionary *_metadataDictionary;	// 88 = 0x58
}

+ (id)ubiquityUUIDUserDefaultsKey;	// IMP=0x00000001001f0fac
+ (id)managedObjectModelName;	// IMP=0x00000001001f0008
+ (_Bool)ubiquityDebug;	// IMP=0x00000001001ee7a4
+ (id)ubiquityQueue;	// IMP=0x00000001001ee12c
+ (void)initialize;	// IMP=0x00000001001ee0dc
@property(nonatomic) _Bool metadataDictionaryDirty; // @synthesize metadataDictionaryDirty=_metadataDictionaryDirty;
@property(retain, nonatomic) NSMutableDictionary *metadataDictionary; // @synthesize metadataDictionary=_metadataDictionary;
@property(retain, nonatomic) IMUbiquitousPersistentStoreLoader *ubiquityPersistentStoreLoader; // @synthesize ubiquityPersistentStoreLoader=_ubiquityPersistentStoreLoader;
@property(retain, nonatomic) IMUbiquitousPersistentStoreLoader *localPersistentStoreLoader; // @synthesize localPersistentStoreLoader=_localPersistentStoreLoader;
@property(retain, nonatomic) IMUbiquitousPersistentStoreLoader *bringUpPersistentStoreLoader; // @synthesize bringUpPersistentStoreLoader=_bringUpPersistentStoreLoader;
@property int currentPersistentStoreType; // @synthesize currentPersistentStoreType=_currentPersistentStoreType;
@property(nonatomic, getter=isUbiquityEnabled) _Bool ubiquityEnabled; // @synthesize ubiquityEnabled=_ubiquityEnabled;
@property(retain, nonatomic) NSPersistentStore *currentPersistentStore; // @synthesize currentPersistentStore=_currentPersistentStore;
@property(nonatomic) NSObject<OS_dispatch_source> *ubiquitousStoreRetryTimer; // @synthesize ubiquitousStoreRetryTimer=_ubiquitousStoreRetryTimer;
@property(retain) NSPersistentStoreCoordinator *persistentStoreCoordinator; // @synthesize persistentStoreCoordinator=_persistentStoreCoordinator;
@property(retain) NSManagedObjectModel *managedObjectModel; // @synthesize managedObjectModel=_managedObjectModel;
@property(retain, nonatomic) NSString *remoteUbiquityUUID; // @dynamic remoteUbiquityUUID;
@property(retain, nonatomic) NSString *localUbiquityUUID; // @dynamic localUbiquityUUID;
- (id)ubiquityUUIDFileName;	// IMP=0x00000001001f0988
- (id)ubiquityUUIDFileURL;	// IMP=0x00000001001f08b4
- (_Bool)isUbiquityUUIDValid;	// IMP=0x00000001001f0828
- (void)generateUbiquityUUID;	// IMP=0x00000001001f077c
- (void)scheduleRetryTimerWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000001001f05c0
- (void)prefligthUbiquityBaseline:(CDUnknownBlockType)arg1;	// IMP=0x00000001001f0074
- (_Bool)isEnabled;	// IMP=0x00000001001effa0
- (void)cacheMetadataDictionary;	// IMP=0x00000001001efecc
- (void)removePersistentStores;	// IMP=0x00000001001efcf8
- (void)migrateFromPersistentStoreCoordinator:(id)arg1 toPersistentStoreCoordinator:(id)arg2;	// IMP=0x00000001001efcf4
- (void)loadUbiquityPersistentStoreWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000001001ef76c
- (void)loadBringUpPersistentStore;	// IMP=0x00000001001ef548
- (void)loadLocalPersistentStoreWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000001001ef4a4
- (void)loadPersistentStoreCoordinator;	// IMP=0x00000001001ef350
- (void)loadManagedObjectModel;	// IMP=0x00000001001ef1a4
- (void)applicationDidBecomeActive:(id)arg1;	// IMP=0x00000001001ef160
- (void)notifyAnnotationsUpdated:(id)arg1;	// IMP=0x00000001001ef014
- (id)metadataObjectForKey:(id)arg1;	// IMP=0x00000001001eee98
- (void)setMetadataObject:(id)arg1 forKey:(id)arg2;	// IMP=0x00000001001eecf4
- (void)incrementGeneration:(id)arg1;	// IMP=0x00000001001eec64
- (id)generationValue:(id)arg1;	// IMP=0x00000001001eebf0
- (void)setGenerationValue:(id)arg1 forKey:(id)arg2;	// IMP=0x00000001001eebe4
- (void)updateCurrentPersistentStore;	// IMP=0x00000001001eebe0
- (void)loadCoreData;	// IMP=0x00000001001eeb0c
- (id)newManagedObjectContext;	// IMP=0x00000001001eea68
- (_Bool)saveManagedObjectContext:(id)arg1;	// IMP=0x00000001001ee8a0
- (_Bool)isUploadingUbiquitousLogs;	// IMP=0x00000001001ee4cc
- (_Bool)isReady;	// IMP=0x00000001001ee49c
- (void)reset;	// IMP=0x00000001001ee460
- (void)dealloc;	// IMP=0x00000001001ee2c0
- (id)initWithPersistentStoreURL:(id)arg1;	// IMP=0x00000001001ee244
- (id)initWithUbiquityEnabled:(_Bool)arg1;	// IMP=0x00000001001ee1c8
- (id)init;	// IMP=0x00000001001ee138

@end

