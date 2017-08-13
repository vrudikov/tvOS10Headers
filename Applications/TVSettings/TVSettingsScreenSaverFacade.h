//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString, NSURL, TVPhotoCollection, TVPhotoCollectionGroup, TVSPreferences;

@interface TVSettingsScreenSaverFacade : NSObject
{
    NSArray *_availablePhotoCollections;	// 8 = 0x8
    TVPhotoCollection *_selectedPhotoCollection;	// 16 = 0x10
    TVSPreferences *_screenSaverAppPrefs;	// 24 = 0x18
    TVSPreferences *_airPlayAppPrefs;	// 32 = 0x20
    id _screenSaverObserverToken;	// 40 = 0x28
    _Bool _isFetchingCollections;	// 48 = 0x30
}

+ (id)keyPathsForValuesAffectingScreenSaverName;	// IMP=0x0000000100076004
+ (id)sharedInstance;	// IMP=0x0000000100075b90
- (void).cxx_destruct;	// IMP=0x000000010007831c
- (void)_fetchPhotoCollections;	// IMP=0x0000000100078118
- (void)_openApplicationWithIdentifer:(id)arg1;	// IMP=0x0000000100077ec8
- (void)_photoSourcesUpdated:(id)arg1;	// IMP=0x0000000100077ebc
- (void)disableScreenSaverProviders;	// IMP=0x0000000100077bd8
- (void)resetToIdleScreensaver;	// IMP=0x0000000100077b8c
@property(copy, nonatomic) NSString *selectedIdleScreenRefreshInterval;
@property(readonly, copy, nonatomic) NSArray *availableIdleScreenRefreshIntervals;
@property(nonatomic) _Bool useIdleScreen;
@property(copy, nonatomic) NSURL *conferenceRoomDisplayBackgroundPhotoURL;
@property(nonatomic, getter=isConferenceRoomDisplayEnabled) _Bool conferenceRoomDisplayEnabled;
@property(copy, nonatomic) NSString *conferenceRoomDisplayMessage;
@property(copy, nonatomic) NSString *transitionType;
@property(nonatomic) long long timePerSlide;
@property(readonly, copy, nonatomic) NSArray *availableTimesPerSlide;
@property(readonly, nonatomic) NSString *screenSaverName;
@property(copy, nonatomic) NSString *screenSaverStyle;
@property(readonly, nonatomic) NSString *screenSaverPhotoCollectionIdentifier;
@property(readonly, nonatomic) id screenSaverType;
@property(readonly, copy, nonatomic) NSArray *availablePhotoCollectionGroups;
@property(readonly, nonatomic) TVPhotoCollectionGroup *selectedPhotoCollectionGroup;
@property(retain, nonatomic) TVPhotoCollection *selectedPhotoCollection;
@property(readonly, copy, nonatomic) NSArray *availablePhotoCollections;
@property(nonatomic) _Bool allowsScreenSaverOverMusic;
@property(nonatomic) long long activationDelay;
@property(readonly, copy, nonatomic) NSArray *availableActivationDelays;
- (void)dealloc;	// IMP=0x0000000100075f88
- (id)init;	// IMP=0x0000000100075c98

@end
