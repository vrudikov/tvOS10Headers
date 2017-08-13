//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableView.h"

@interface UITableView (MTAdditions)
- (_Bool)_hasRowAtIndexPath:(id)arg1 focusable:(_Bool)arg2;	// IMP=0x00000001000fc1c8
- (id)_indexPathForRowBeforeIndexPath:(id)arg1 focusable:(_Bool)arg2;	// IMP=0x00000001000fc178
- (id)_indexPathForRowAfterIndexPath:(id)arg1 focusable:(_Bool)arg2;	// IMP=0x00000001000fc128
- (id)_indexPathForClosestRowToIndexPath:(id)arg1 focusable:(_Bool)arg2;	// IMP=0x00000001000fbe80
- (unsigned long long)numberOfRowsFromIndexPath:(id)arg1 toFromIndexPath:(id)arg2;	// IMP=0x00000001000fbc44
- (id)distanceFromIndexPath:(id)arg1 toIndexPath:(id)arg2;	// IMP=0x00000001000fbb6c
- (id)indexPathForClosestFocusableRowToIndexPath:(id)arg1;	// IMP=0x00000001000fbb5c
- (id)indexPathForClosestRowToIndexPath:(id)arg1;	// IMP=0x00000001000fbb4c
- (id)indexPathForFocusableRowAfterIndexPath:(id)arg1;	// IMP=0x00000001000fb9c8
- (id)indexPathForRowAfterIndexPath:(id)arg1;	// IMP=0x00000001000fb864
- (id)indexPathForFocusableRowBeforeIndexPath:(id)arg1;	// IMP=0x00000001000fb730
- (id)indexPathForRowBeforeIndexPath:(id)arg1;	// IMP=0x00000001000fb5cc
- (id)indexPathForFirstFocusableRow;	// IMP=0x00000001000fb4b4
- (id)indexPathForLastRowInSection:(long long)arg1;	// IMP=0x00000001000fb444
- (id)indexPathForFirstRowInSection:(long long)arg1;	// IMP=0x00000001000fb3d4
- (id)indexPathForLastRow;	// IMP=0x00000001000fb344
- (id)indexPathForFirstRow;	// IMP=0x00000001000fb2ac
- (_Bool)canFocusRowAtIndexPath:(id)arg1;	// IMP=0x00000001000fb1c4
- (_Bool)hasRowsInSectionAtIndex:(long long)arg1;	// IMP=0x00000001000fb16c
- (_Bool)hasRowAtIndexPath:(id)arg1;	// IMP=0x00000001000fb088
@end

