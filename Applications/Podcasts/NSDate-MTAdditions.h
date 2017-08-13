//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSDate.h"

@interface NSDate (MTAdditions)
+ (id)mt_verboseDateFormatter;	// IMP=0x000000010002c3f8
+ (id)mt_dateFormatterNoYearAbbrevMonth;	// IMP=0x000000010002c2e0
+ (id)mt_dateFormatterNoYear;	// IMP=0x000000010002c1c8
+ (id)mt_dateFormatterShortStyleWithYear;	// IMP=0x000000010002c0d8
+ (id)mt_dateFormatterNoDayWithYear;	// IMP=0x000000010002bfc0
+ (id)mt_dateFormatterWithYear;	// IMP=0x000000010002bea8
+ (double)maxWidthForMicroFriendlyDateStringWithFont:(id)arg1;	// IMP=0x000000010002bd78
+ (id)dayOfWeekFromDate:(id)arg1 abbreviated:(_Bool)arg2;	// IMP=0x000000010002b698
- (_Bool)isSameDayOfWeekAs:(id)arg1;	// IMP=0x000000010002bcd0
- (_Bool)inSameYearAs:(id)arg1;	// IMP=0x000000010002bbd8
- (_Bool)isThisYear;	// IMP=0x000000010002bb78
- (id)timeString;	// IMP=0x000000010002bab0
- (id)verboseDisplayString;	// IMP=0x000000010002b980
- (id)nanoFriendlyDisplayString;	// IMP=0x000000010002b474
- (id)microFriendlyDisplayString;	// IMP=0x000000010002b250
- (id)abbreviatedFriendlyDisplayString;	// IMP=0x000000010002b02c
- (id)friendlyDisplayString;	// IMP=0x000000010002ae08
@end

