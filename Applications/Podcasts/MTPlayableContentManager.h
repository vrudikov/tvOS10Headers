//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MPPlayableContentDataSource.h"
#import "MPPlayableContentDelegate.h"
#import "MTLibraryChangeNotifier.h"

@class MTLibraryChanges, MTPlayableContentItem, MTUuidQueryObserver, NSMapTable, NSMutableArray, NSMutableDictionary, NSNumber, NSObject<OS_dispatch_queue>, NSString;

@interface MTPlayableContentManager : NSObject <MTLibraryChangeNotifier, MPPlayableContentDataSource, MPPlayableContentDelegate>
{
    NSString *_derivedPropertyCallbackToken;	// 8 = 0x8
    MTPlayableContentItem *_rootItem;	// 16 = 0x10
    MTLibraryChanges *_libraryChanges;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_serialQueue;	// 32 = 0x20
    _Bool _forcedReloadData;	// 40 = 0x28
    _Bool _lastDumpFailed;	// 41 = 0x29
    _Bool _reloadingData;	// 42 = 0x2a
    _Bool _libraryChangedWhileReloading;	// 43 = 0x2b
    _Bool _running;	// 44 = 0x2c
    _Bool _contentActive;	// 45 = 0x2d
    _Bool _hasStations;	// 46 = 0x2e
    _Bool _hasMiniPlayer;	// 47 = 0x2f
    NSMutableArray *_storeTopPodcastsChart;	// 48 = 0x30
    NSMapTable *_contentItems;	// 56 = 0x38
    NSMutableDictionary *_uuidCache;	// 64 = 0x40
    MTPlayableContentItem *_topLevelMiniPlayer;	// 72 = 0x48
    MTPlayableContentItem *_topLevelUnplayed;	// 80 = 0x50
    MTPlayableContentItem *_topLevelPodcasts;	// 88 = 0x58
    MTPlayableContentItem *_topLevelStations;	// 96 = 0x60
    MTPlayableContentItem *_topLevelTopCharts;	// 104 = 0x68
    MTUuidQueryObserver *_countObserverForPodcasts;	// 112 = 0x70
    MTUuidQueryObserver *_countObserverForStations;	// 120 = 0x78
    MTUuidQueryObserver *_countObserverForUnplayed;	// 128 = 0x80
    NSNumber *_countOfPodcasts;	// 136 = 0x88
    NSNumber *_countOfStations;	// 144 = 0x90
    NSNumber *_countOfUnplayed;	// 152 = 0x98
}

+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100133a44
+ (id)sharedInstance;	// IMP=0x00000001001338c8
@property(retain, nonatomic) NSNumber *countOfUnplayed; // @synthesize countOfUnplayed=_countOfUnplayed;
@property(retain, nonatomic) NSNumber *countOfStations; // @synthesize countOfStations=_countOfStations;
@property(retain, nonatomic) NSNumber *countOfPodcasts; // @synthesize countOfPodcasts=_countOfPodcasts;
@property(retain, nonatomic) MTUuidQueryObserver *countObserverForUnplayed; // @synthesize countObserverForUnplayed=_countObserverForUnplayed;
@property(retain, nonatomic) MTUuidQueryObserver *countObserverForStations; // @synthesize countObserverForStations=_countObserverForStations;
@property(retain, nonatomic) MTUuidQueryObserver *countObserverForPodcasts; // @synthesize countObserverForPodcasts=_countObserverForPodcasts;
@property(retain, nonatomic) MTPlayableContentItem *topLevelTopCharts; // @synthesize topLevelTopCharts=_topLevelTopCharts;
@property(retain, nonatomic) MTPlayableContentItem *topLevelStations; // @synthesize topLevelStations=_topLevelStations;
@property(retain, nonatomic) MTPlayableContentItem *topLevelPodcasts; // @synthesize topLevelPodcasts=_topLevelPodcasts;
@property(retain, nonatomic) MTPlayableContentItem *topLevelUnplayed; // @synthesize topLevelUnplayed=_topLevelUnplayed;
@property(retain, nonatomic) MTPlayableContentItem *topLevelMiniPlayer; // @synthesize topLevelMiniPlayer=_topLevelMiniPlayer;
@property(nonatomic) _Bool hasMiniPlayer; // @synthesize hasMiniPlayer=_hasMiniPlayer;
@property(nonatomic) _Bool hasStations; // @synthesize hasStations=_hasStations;
@property(nonatomic, getter=isContentActive) _Bool contentActive; // @synthesize contentActive=_contentActive;
@property(nonatomic, getter=isRunning) _Bool running; // @synthesize running=_running;
@property(nonatomic) _Bool libraryChangedWhileReloading; // @synthesize libraryChangedWhileReloading=_libraryChangedWhileReloading;
@property(nonatomic, getter=isReloadingData) _Bool reloadingData; // @synthesize reloadingData=_reloadingData;
@property(retain, nonatomic) NSMutableDictionary *uuidCache; // @synthesize uuidCache=_uuidCache;
@property(retain, nonatomic) NSMapTable *contentItems; // @synthesize contentItems=_contentItems;
@property(retain, nonatomic) NSMutableArray *storeTopPodcastsChart; // @synthesize storeTopPodcastsChart=_storeTopPodcastsChart;
- (void).cxx_destruct;	// IMP=0x000000010013e2dc
- (void)invalidatePlayableContentForObjects:(id)arg1 andChangeType:(int)arg2;	// IMP=0x000000010013dc50
- (void)invalidateImageCacheForObjects:(id)arg1;	// IMP=0x000000010013dc4c
- (void)context:(id)arg1 didUpdateObjects:(id)arg2;	// IMP=0x000000010013dbe8
- (void)context:(id)arg1 didInsertObjects:(id)arg2;	// IMP=0x000000010013dbd0
- (void)context:(id)arg1 didDeleteObjects:(id)arg2;	// IMP=0x000000010013db6c
- (void)cacheKeys:(id)arg1 forObject:(id)arg2 withUuid:(id)arg3;	// IMP=0x000000010013d974
- (void)updateSubtitleForTopLevelStations;	// IMP=0x000000010013d854
- (void)updateSubtitleForTopLevelPodcasts;	// IMP=0x000000010013d734
- (void)updateSubtitleForTopLevelUnplayed;	// IMP=0x000000010013d614
- (void)startObserveringCounts;	// IMP=0x000000010013cc60
- (void)updatePlayableContentItem:(id)arg1 withStation:(id)arg2;	// IMP=0x000000010013c97c
- (void)updatePlayableContentItem:(id)arg1 withPodcast:(id)arg2;	// IMP=0x000000010013c3a8
- (id)_subtitleForEpisode:(id)arg1;	// IMP=0x000000010013c060
- (void)updatePlayableContentItem:(id)arg1 withEpisode:(id)arg2;	// IMP=0x000000010013bee8
- (id)_createEpisodeItemUnsafe:(id)arg1;	// IMP=0x000000010013bd88
- (id)_createEpisodeItem:(id)arg1;	// IMP=0x000000010013bad8
- (id)_createSavedItemForPodcastUuid:(id)arg1;	// IMP=0x000000010013b53c
- (id)_createChildrenItemsForTopCharts;	// IMP=0x000000010013b4c4
- (void)_loadChildrenIfNeeded:(id)arg1;	// IMP=0x000000010013a768
- (id)createTopLevelStationsItem;	// IMP=0x000000010013a5a4
- (id)createTopLevelPodcastsItem;	// IMP=0x000000010013a3dc
- (id)_createRootItem;	// IMP=0x0000000100139cac
- (_Bool)hasNowPlayingItem;	// IMP=0x0000000100139c08
- (void)nowPlayingItemDidChange:(id)arg1;	// IMP=0x00000001001399f0
- (void)updateMiniPlayerItem;	// IMP=0x0000000100139348
- (id)_rootItem;	// IMP=0x00000001001392c0
- (id)_stationUuidForStationIndex:(unsigned long long)arg1;	// IMP=0x0000000100139214
- (id)_podcastUuidForPodcastIndex:(unsigned long long)arg1;	// IMP=0x0000000100139168
- (id)_childOfItem:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x0000000100139088
- (id)_itemAtIndexPath:(id)arg1;	// IMP=0x0000000100138f9c
- (id)_diffForSet:(id)arg1 deleteSet:(id)arg2 currentMap:(id)arg3;	// IMP=0x0000000100138c90
- (_Bool)dumpNewDiffToFile:(id)arg1 podcastItems:(id)arg2 stationsItem:(id)arg3;	// IMP=0x0000000100138970
- (_Bool)dumpDiffForRootItem;	// IMP=0x00000001001373e8
- (id)dumpPlistTraversal:(id)arg1;	// IMP=0x00000001001370fc
- (_Bool)dumpPlistForRootItem;	// IMP=0x0000000100136e44
- (id)_rootItemForSiri;	// IMP=0x0000000100136bcc
- (void)updateEpisodeContentItem:(id)arg1;	// IMP=0x00000001001369c0
- (void)updateStationContentItem:(id)arg1;	// IMP=0x00000001001367b4
- (void)updatePodcastContentItem:(id)arg1;	// IMP=0x00000001001365a8
- (void)reloadPlayableContentItemsForUpatedEntities:(id)arg1;	// IMP=0x0000000100136090
- (_Bool)isPropertyWithName:(id)arg1 ofCachedObjectWithUuid:(id)arg2 equalToValue:(id)arg3;	// IMP=0x0000000100135fa0
- (_Bool)shouldReloadAllDataForUpdatedStationUuids:(id)arg1;	// IMP=0x0000000100135b74
- (_Bool)shouldReloadAllDataForUpdatedPodcastUuids:(id)arg1;	// IMP=0x0000000100135748
- (_Bool)rootItemNeedsFullReload;	// IMP=0x0000000100135484
- (_Bool)dataForSiriHasChanged;	// IMP=0x00000001001353c4
- (void)_destroyPlayableContentTree;	// IMP=0x000000010013531c
- (void)reloadData;	// IMP=0x00000001001350bc
- (void)forceReloadData;	// IMP=0x00000001001350a0
- (void)reloadDataAfterDelay;	// IMP=0x0000000100134fd0
- (void)libraryChanged:(id)arg1;	// IMP=0x0000000100134e94
- (_Bool)_isIndexPathForTogglePlayState:(id)arg1;	// IMP=0x0000000100134cd0
- (void)_playStationAtIndex:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100134a24
- (void)_togglePlayStateWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100134908
- (void)playableContentManager:(id)arg1 initializePlaybackQueueWithCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001001346e4
- (void)beginLoadingChildItemsAtIndexPath:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001001343b4
- (_Bool)childItemsDisplayPlaybackProgressAtIndexPath:(id)arg1;	// IMP=0x000000010013438c
- (id)contentItemAtIndexPath:(id)arg1;	// IMP=0x0000000100134318
- (long long)numberOfChildItemsAtIndexPath:(id)arg1;	// IMP=0x0000000100134010
- (void)start;	// IMP=0x0000000100133d40
- (void)dealloc;	// IMP=0x0000000100133c84
- (id)init;	// IMP=0x0000000100133a8c
- (id)copy;	// IMP=0x0000000100133a64

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

