//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray, NSMutableDictionary;

@interface TVMusicLibraryIndexBar : UIView
{
    NSArray *_indexViews;	// 8 = 0x8
    NSArray *_indexTitles;	// 16 = 0x10
    long long _activityCount;	// 24 = 0x18
    NSMutableDictionary *_mapIndexToLetterView;	// 32 = 0x20
    unsigned long long _currentIndex;	// 40 = 0x28
}

@property(nonatomic) unsigned long long currentIndex; // @synthesize currentIndex=_currentIndex;
- (void).cxx_destruct;	// IMP=0x0000000100085400
@property(nonatomic) _Bool visible;
- (void)hideIndexBarAnimated:(_Bool)arg1;	// IMP=0x00000001000852f0
- (void)showIndexBarAnimated:(_Bool)arg1;	// IMP=0x0000000100085238
- (_Bool)canBecomeFocused;	// IMP=0x0000000100085230
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x0000000100085188
- (id)_createIndexViewsForIndexTitles:(id)arg1;	// IMP=0x0000000100084c50
- (void)setIndexIndicatorPosition:(double)arg1 animated:(_Bool)arg2;	// IMP=0x0000000100084b14
@property(readonly, nonatomic) NSArray *indexTitles;
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100084aec
- (id)initWithIndexTitles:(id)arg1;	// IMP=0x0000000100084944

@end

