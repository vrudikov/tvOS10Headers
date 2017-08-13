//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MTPodcastHeaderView, NSString, UIBarButtonItem, UIButton;

@protocol MTPodcastHeaderDelegate <NSObject>
- (void)detailHeaderDisclosureButtonTapped:(MTPodcastHeaderView *)arg1;
- (_Bool)detailHeaderHasDisclosureButton:(MTPodcastHeaderView *)arg1;

@optional
- (void)detailHeaderHeightDidChangetoHeight:(double)arg1;
- (void)showPodcastDescription:(NSString *)arg1 fromMoreButton:(UIButton *)arg2;
- (void)podcastHeaderView:(MTPodcastHeaderView *)arg1 didTapShareButton:(UIBarButtonItem *)arg2;
@end
