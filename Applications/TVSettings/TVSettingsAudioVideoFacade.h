//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface TVSettingsAudioVideoFacade : NSObject
{
    NSString *_subtitleLanguageOption;	// 8 = 0x8
    NSArray *_availableSubtitleLanguageOptions;	// 16 = 0x10
    NSArray *_availableAudioLanguageCodes;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x0000000100021cd8
@property(readonly, copy, nonatomic) NSArray *availableAudioLanguageCodes; // @synthesize availableAudioLanguageCodes=_availableAudioLanguageCodes;
@property(readonly, copy, nonatomic) NSArray *availableSubtitleLanguageOptions; // @synthesize availableSubtitleLanguageOptions=_availableSubtitleLanguageOptions;
@property(copy, nonatomic) NSString *subtitleLanguageOption; // @synthesize subtitleLanguageOption=_subtitleLanguageOption;
- (void).cxx_destruct;	// IMP=0x0000000100022ff4
- (id)_availableDefaultAudioLanguages;	// IMP=0x0000000100022d80
- (id)_availableDefaultSubtitleLanguages;	// IMP=0x0000000100022b18
- (void)_updateSelectedSubtitleOption:(_Bool)arg1;	// IMP=0x00000001000229d8
- (void)_updateAvailableSubtitleLanguageOptions:(_Bool)arg1;	// IMP=0x0000000100022824
- (void)_updateAvailableAudioLanguageCodes:(_Bool)arg1;	// IMP=0x0000000100022610
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000100022304
@property(nonatomic) _Bool transitionSoundsAndPreviewAudioEnabled;
@property(nonatomic) _Bool navigationSoundEffectsEnabled;
- (void)dealloc;	// IMP=0x0000000100021e7c
- (id)init;	// IMP=0x0000000100021d58

@end
