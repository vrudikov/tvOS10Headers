//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface BuddyWifiAutoJoiner : NSObject
{
    struct __WiFiManagerClient *_wifiManagerRef;	// 8 = 0x8
}

+ (void)stopAutojoiningWiFiNetworks;	// IMP=0x0000000100004a3c
+ (void)beginAutojoiningWiFiNetworks;	// IMP=0x00000001000049fc
+ (id)_sharedInstance;	// IMP=0x00000001000049a8
- (void)stopAutojoiningWiFiNetworks;	// IMP=0x0000000100004e84
- (void)beginAutojoiningWiFiNetworks;	// IMP=0x0000000100004dcc
- (struct __CFArray *)_copyAutoJoinableWiFiNetworks;	// IMP=0x0000000100004c0c
- (struct __WiFiNetwork *)createNetworkWithSSID:(id)arg1;	// IMP=0x0000000100004acc
- (void)dealloc;	// IMP=0x0000000100004a7c

@end

