//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableDictionary;

@interface AEMarginNotesController : NSObject
{
    NSMutableDictionary *mMarginNoteLayers;	// 8 = 0x8
    struct CGRect mOwnerFrame;	// 16 = 0x10
}

@property(nonatomic) struct CGRect ownerFrame; // @synthesize ownerFrame=mOwnerFrame;
@property(retain, nonatomic) NSMutableDictionary *marginNoteLayers; // @synthesize marginNoteLayers=mMarginNoteLayers;
- (void)unhighlightLayerOfNote:(id)arg1;	// IMP=0x00000001001d7140
- (void)highlightLayerOfNote:(id)arg1;	// IMP=0x00000001001d708c
- (void)removeMarginNote:(id)arg1;	// IMP=0x00000001001d7044
- (void)addMarginNote:(id)arg1;	// IMP=0x00000001001d6f48
- (void)p_updateLayerLayout;	// IMP=0x00000001001d6a94
- (id)p_highlightedImageForMarginNote:(id)arg1;	// IMP=0x00000001001d69a0
- (id)p_imageForMarginNote:(id)arg1;	// IMP=0x00000001001d6978
- (_Bool)hasMarginNoteAtPoint:(struct CGPoint)arg1;	// IMP=0x00000001001d6954
- (id)marginNoteAtPoint:(struct CGPoint)arg1;	// IMP=0x00000001001d66cc
@property(readonly, nonatomic) NSArray *layers;
@property(nonatomic) struct CGSize ownerSize;
- (void)dealloc;	// IMP=0x00000001001d6614
- (id)init;	// IMP=0x00000001001d65a4
@property(nonatomic, setter=imaxSetAccessibilityDelegate:) id <AEMarginNotesControllerAccessibilityDelegate> imaxAccessibilityDelegate;

@end

