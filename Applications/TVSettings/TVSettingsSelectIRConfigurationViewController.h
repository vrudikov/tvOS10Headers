//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TSKViewController.h"

@class NSArray, TVSExternalControlSystem;

@interface TVSettingsSelectIRConfigurationViewController : TSKViewController
{
    TVSExternalControlSystem *_externalControlSystem;	// 8 = 0x8
    NSArray *_cachedIRVolumeButtonConfiguration;	// 16 = 0x10
}

@property(copy, nonatomic) NSArray *cachedIRVolumeButtonConfiguration; // @synthesize cachedIRVolumeButtonConfiguration=_cachedIRVolumeButtonConfiguration;
@property(retain, nonatomic) TVSExternalControlSystem *externalControlSystem; // @synthesize externalControlSystem=_externalControlSystem;
- (void).cxx_destruct;	// IMP=0x0000000100053710
- (void)_didSelectEditConfigurations;	// IMP=0x00000001000535f0
- (void)_didSelectAddConfiguration;	// IMP=0x00000001000531a8
- (void)_didSelectOffValue;	// IMP=0x0000000100052f34
- (void)_didSelectConfiguration:(id)arg1;	// IMP=0x0000000100052e48
- (void)_didSelectAutoValue;	// IMP=0x0000000100052d8c
- (void)_externalControlSystemConfigurationChanged;	// IMP=0x0000000100052d80
- (void)_remotePolicyChanged;	// IMP=0x0000000100052d74
- (void)_cacheIRVolumeButtonConfigurations;	// IMP=0x0000000100052c8c
- (id)loadSettingGroups;	// IMP=0x0000000100052358
- (void)viewDidLoad;	// IMP=0x0000000100052290
- (void)dealloc;	// IMP=0x0000000100052214
- (id)init;	// IMP=0x0000000100052134

@end

