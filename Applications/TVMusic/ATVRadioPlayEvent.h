//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class RadioMutablePlayEvent, TVSDataItem;

@interface ATVRadioPlayEvent : NSObject
{
    TVSDataItem *_dataItem;	// 8 = 0x8
    RadioMutablePlayEvent *_radioPlayEvent;	// 16 = 0x10
    double _trackDuration;	// 24 = 0x18
}

@property(nonatomic) double trackDuration; // @synthesize trackDuration=_trackDuration;
@property(retain, nonatomic) RadioMutablePlayEvent *radioPlayEvent; // @synthesize radioPlayEvent=_radioPlayEvent;
@property(retain, nonatomic) TVSDataItem *dataItem; // @synthesize dataItem=_dataItem;
- (void).cxx_destruct;	// IMP=0x0000000100057a14
- (id)_formatedDuration;	// IMP=0x00000001000578c4
- (id)_endReasonStr;	// IMP=0x00000001000577ac
- (id)_trackTypeStr;	// IMP=0x00000001000576e4
- (id)description;	// IMP=0x00000001000573f0
- (id)initWithDataItem:(id)arg1;	// IMP=0x00000001000573e0
- (id)initWithDataItem:(id)arg1 timedMetadata:(id)arg2;	// IMP=0x0000000100056f7c

@end

