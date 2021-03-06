//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DAComponent.h"

@class AVAudioSession, CADisplay, NSArray, NSNumber, NSString;

@interface DADisplayComponent : DAComponent
{
    CADisplay *_mainDisplay;	// 8 = 0x8
    AVAudioSession *_audioSession;	// 16 = 0x10
}

@property(retain, nonatomic) AVAudioSession *audioSession; // @synthesize audioSession=_audioSession;
@property(retain, nonatomic) CADisplay *mainDisplay; // @synthesize mainDisplay=_mainDisplay;
- (void).cxx_destruct;	// IMP=0x000000010001da58
- (struct __IOAVService *)createAVServiceRef;	// IMP=0x000000010001d934
@property(readonly, nonatomic) NSNumber *maximumOutputNumberOfChannels;
@property(readonly, nonatomic) NSNumber *maximumInputNumberOfChannels;
@property(readonly, nonatomic) NSArray *audioOutputFormatPreference;
@property(readonly, nonatomic) NSNumber *scanRate;
@property(readonly, nonatomic) NSNumber *refreshRate;
@property(readonly, nonatomic) NSNumber *height;
@property(readonly, nonatomic) NSNumber *width;
@property(readonly, nonatomic) NSNumber *yearOfManufacture;
@property(readonly, nonatomic) NSNumber *weekOfManufacture;
@property(readonly, nonatomic) NSString *physicalAddress;
@property(readonly, nonatomic) NSString *product;
@property(readonly, nonatomic) NSString *manufacturerPNPID;
@property(readonly, nonatomic) NSNumber *productID;
- (id)serialNumber;	// IMP=0x000000010001d1c4
- (id)profile;	// IMP=0x000000010001ce18
@property(readonly, nonatomic) _Bool zoomed;
- (id)checkPresence;	// IMP=0x000000010001c86c
- (id)type;	// IMP=0x000000010001c85c
- (id)init;	// IMP=0x000000010001c7ac

@end

