//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface ATVDataItemAcquisitionMonitor : NSObject
{
    id <ATVDataItemAcquisitionDelegate> _delegate;	// 8 = 0x8
    id _acquisitionMonitoringToken;	// 16 = 0x10
}

@property(retain, nonatomic) id acquisitionMonitoringToken; // @synthesize acquisitionMonitoringToken=_acquisitionMonitoringToken;
@property(nonatomic) __weak id <ATVDataItemAcquisitionDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;	// IMP=0x000000010002fae4
- (void)dealloc;	// IMP=0x000000010002f9e4
- (id)initWithDataItem:(id)arg1;	// IMP=0x000000010002f5a8

@end

