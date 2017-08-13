//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TVPhotoCollectionGridViewCell.h"

@class NSString, UIImage;

@interface TVPSharedPSAlbumDescriptionView : TVPhotoCollectionGridViewCell
{
    _Bool _displaysNewAlbumBadge;	// 8 = 0x8
    _Bool _needsNewOverlayView;	// 9 = 0x9
    NSString *_cellIdentifier;	// 16 = 0x10
    UIImage *_overlayImage;	// 24 = 0x18
}

@property(nonatomic) _Bool needsNewOverlayView; // @synthesize needsNewOverlayView=_needsNewOverlayView;
@property(retain, nonatomic) UIImage *overlayImage; // @synthesize overlayImage=_overlayImage;
@property(nonatomic) _Bool displaysNewAlbumBadge; // @synthesize displaysNewAlbumBadge=_displaysNewAlbumBadge;
@property(copy, nonatomic) NSString *cellIdentifier; // @synthesize cellIdentifier=_cellIdentifier;
- (void).cxx_destruct;	// IMP=0x000000010003f5e0
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000010003f4cc
- (void)layoutSubviews;	// IMP=0x000000010003f20c
- (void)_updatePlaceholderImage;	// IMP=0x000000010003f104
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000010003efb4

@end
