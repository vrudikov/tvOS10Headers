//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTPodcastCell.h"

@class UIView;

@interface MTPodcastPlaylistCell : MTPodcastCell
{
    UIView *_disabledView;	// 24 = 0x18
    _Bool _added;	// 32 = 0x20
}

@property(nonatomic, getter=isAdded) _Bool added; // @synthesize added=_added;
- (void).cxx_destruct;	// IMP=0x00000001000b3370
- (void)setEnabled:(_Bool)arg1;	// IMP=0x00000001000b3240
- (void)prepareForReuse;	// IMP=0x00000001000b31d8
- (void)layoutSubviews;	// IMP=0x00000001000b3130
- (id)countView;	// IMP=0x00000001000b3128
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x00000001000b30cc

@end

