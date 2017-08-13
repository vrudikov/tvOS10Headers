//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIGestureRecognizer.h"

@class NSTimer, TVSBluetoothDevice;

@interface TVSettingsBluetoothRecognizer : UIGestureRecognizer
{
    struct __IOHIDEventSystemClient *_hidSystemClient;	// 8 = 0x8
    unsigned long long _matchingSenderID;	// 16 = 0x10
    NSTimer *_continousTimer;	// 24 = 0x18
    unsigned int _touchCount;	// 32 = 0x20
    _Bool _continuous;	// 36 = 0x24
    TVSBluetoothDevice *_matchingPhysicalDevice;	// 40 = 0x28
}

+ (_Bool)_shouldDefaultToTouches;	// IMP=0x000000010005c940
@property(copy, nonatomic) TVSBluetoothDevice *matchingPhysicalDevice; // @synthesize matchingPhysicalDevice=_matchingPhysicalDevice;
@property(nonatomic, getter=isContinuous) _Bool continuous; // @synthesize continuous=_continuous;
- (void).cxx_destruct;	// IMP=0x000000010005d5d0
- (void)_continuousEvent;	// IMP=0x000000010005d590
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000010005d4e8
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000010005d440
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000010005d370
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000010005d260
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000010005d150
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000010005d044
- (_Bool)_matchesDeviceOfEvent:(id)arg1;	// IMP=0x000000010005cac8
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;	// IMP=0x000000010005c948

@end

