/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:04 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, AVCallbackCancellationAVKVOIntrospection;
#import <AVFoundation/AVFoundation-Structs.h>
@class AVWeakReference, AVPropertyStorage, AVPixelBufferAttributeMediator, NSObject, AVAudioSessionMediaPlayerOnly, AVPlayerItem, NSMutableSet, NSArray, NSMutableDictionary, AVAudioSession, AVOutputContext, NSMutableArray, NSHashTable, NSError, NSString, NSDictionary;

@interface AVPlayerInternal : NSObject {

	AVWeakReference* weakReference;
	AVPropertyStorage* propertyStorage;
	AVPixelBufferAttributeMediator* pixelBufferAttributeMediator;
	NSObject*<OS_dispatch_queue> stateDispatchQueue;
	NSObject*<OS_dispatch_queue> figConfigurationQueue;
	NSObject*<OS_dispatch_queue> ivarAccessQueue;
	NSObject*<OS_dispatch_queue> currentItemPropertyUpdateQueue;
	NSObject*<OS_dispatch_queue> layersQ;
	OpaqueCMTimebaseRef proxyTimebase;
	BOOL logPerformanceData;
	AVAudioSessionMediaPlayerOnly* audioSessionMediaPlayerOnly;
	void* IAPDCallbackToken;
	OpaqueFigSimpleMutexRef prerollIDMutex;
	NSObject*<OS_dispatch_queue> configurationQueue;
	AVPlayerItem* currentItem;
	AVPlayerItem* lastItem;
	NSMutableSet* items;
	NSArray* queueModifications;
	NSMutableDictionary* pendingFigPlayerProperties;
	AVAudioSession* audioSession;
	AVOutputContext* outputContext;
	BOOL IOwnTheFigPlayer;
	CFDictionaryRef videoLayers;
	NSMutableArray* subtitleLayers;
	NSMutableArray* closedCaptionLayers;
	NSHashTable* avPlayerLayers;
	int nextPrerollIDToGenerate;
	int pendingPrerollID;
	/*^block*/id prerollCompletionHandler;
	id<AVCallbackCancellation><AVKVOIntrospection> currentItemSuppressesVideoLayersCallbackInvoker;
	id<AVCallbackCancellation><AVKVOIntrospection> currentItemPreferredPixelBufferAttributesCallbackInvoker;
	OpaqueFigPlayerRef figPlayer;
	long long status;
	NSError* error;
	OpaqueFigPlaybackItemRef figPlaybackItemToIdentifyNextCurrentItem;
	BOOL needsToCreateFigPlayer;
	NSString* externalPlaybackVideoGravity;
	NSDictionary* cachedFigMediaSelectionCriteriaProperty;
	NSArray* itemsInFigPlayQueue;
	NSArray* expectedAssetTypes;
	BOOL reevaluateBackgroundPlayback;
	BOOL hostApplicationInForeground;
	BOOL hadAssociatedOnscreenPlayerLayerWhenSuspended;
	NSDictionary* vibrationPattern;
	OpaqueCMClockRef figMasterClock;
	BOOL autoSwitchStreamVariants;
	BOOL preparesItemsForPlaybackAsynchronously;
	BOOL allowsOutOfBandTextTrackRendering;
	BOOL shouldReduceResourceUsage;
	NSString* multichannelAudioStrategy;
	BOOL automaticallyWaitsToMinimizeStalling;
	BOOL usesLegacyAutomaticWaitingBehavior;
	BOOL usesDedicatedNotificationQueueForMediaServices;
	CGSize dimensionsOfReservedVideoMemory;
	NSArray* displaysUsedForPlayback;
	NSString* ancillaryPerformanceInformationForDisplay;

}
@end
