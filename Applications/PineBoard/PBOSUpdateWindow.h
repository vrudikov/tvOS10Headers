//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBWindow.h"

@class TVOSUpdateViewController;

@interface PBOSUpdateWindow : PBWindow
{
    TVOSUpdateViewController *_controller;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000001000b8c44
- (_Bool)_ignoresHitTest;	// IMP=0x00000001000b8c3c
- (void)didEncounterSlowUpdate;	// IMP=0x00000001000b8bd4
- (void)setProgressPercentage:(float)arg1;	// IMP=0x00000001000b8bbc
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000001000b8ac4

@end

