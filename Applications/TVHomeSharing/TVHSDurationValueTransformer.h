//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSValueTransformer.h"

@class NSDateComponentsFormatter;

@interface TVHSDurationValueTransformer : NSValueTransformer
{
    NSDateComponentsFormatter *_minutesFormatter;	// 8 = 0x8
    NSDateComponentsFormatter *_secondsFormatter;	// 16 = 0x10
}

+ (_Bool)allowsReverseTransformation;	// IMP=0x0000000100008ef4
+ (Class)transformedValueClass;	// IMP=0x0000000100008ee0
+ (void)initialize;	// IMP=0x0000000100008d28
@property(retain, nonatomic) NSDateComponentsFormatter *secondsFormatter; // @synthesize secondsFormatter=_secondsFormatter;
@property(retain, nonatomic) NSDateComponentsFormatter *minutesFormatter; // @synthesize minutesFormatter=_minutesFormatter;
- (void).cxx_destruct;	// IMP=0x00000001000090fc
- (id)transformedValue:(id)arg1;	// IMP=0x0000000100008efc
- (id)init;	// IMP=0x0000000100008dd0

@end

