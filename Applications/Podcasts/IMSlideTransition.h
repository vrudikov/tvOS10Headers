//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IMViewControllerTransition.h"

@interface IMSlideTransition : IMViewControllerTransition
{
    int _type;	// 88 = 0x58
}

@property(nonatomic) int type; // @synthesize type=_type;
- (void)cleanupTransition;	// IMP=0x00000001001c488c
- (void)performTransition;	// IMP=0x00000001001c4694
- (void)prepareTransition;	// IMP=0x00000001001c44f8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001001c4490
- (id)init;	// IMP=0x00000001001c4424

@end
