//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface MTResultsController : NSObject
{
    NSString *title;	// 8 = 0x8
    id <MTResultsControllerDelegate> delegate;	// 16 = 0x10
}

@property(nonatomic) __weak id <MTResultsControllerDelegate> delegate; // @synthesize delegate;
@property(copy, nonatomic) NSString *title; // @synthesize title;
- (void).cxx_destruct;	// IMP=0x00000001000434e8
- (_Bool)hasObjects;	// IMP=0x0000000100043474
- (unsigned long long)numberOfObjects;	// IMP=0x0000000100043428
- (id)objectAtIndex:(unsigned long long)arg1;	// IMP=0x00000001000433bc
- (unsigned long long)indexOfObject:(id)arg1;	// IMP=0x0000000100043360
- (id)allObjects;	// IMP=0x0000000100043358
- (unsigned long long)numberOfObjectsInSection:(unsigned long long)arg1;	// IMP=0x0000000100043350
- (id)indexPathForObject:(id)arg1;	// IMP=0x0000000100043348
- (id)objectAtIndexPath:(id)arg1;	// IMP=0x0000000100043340
- (void)reloadData;	// IMP=0x000000010004333c
- (id)description;	// IMP=0x000000010004328c

@end

