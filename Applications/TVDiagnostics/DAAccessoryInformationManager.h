//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>;

@interface DAAccessoryInformationManager : NSObject
{
    id <DAAccessoryInformationManagerDelegate> _delegate;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_accessoryObservationQueue;	// 16 = 0x10
}

+ (id)retrieveHIDReport:(long long)arg1 device:(struct __IOHIDDevice *)arg2;	// IMP=0x000000010001c54c
+ (id)retrieveHIDKeys:(id)arg1 device:(struct __IOHIDDevice *)arg2;	// IMP=0x000000010001c1cc
+ (struct __IOHIDDevice *)findMatchingDevice:(struct __IOHIDDevice **)arg1 count:(long long)arg2 accessoryIdentifier:(CDStruct_7523a67d)arg3;	// IMP=0x000000010001bec8
+ (id)retrieveKeys:(id)arg1 reportID:(long long)arg2 reportResultKey:(id)arg3 accessoryIdentifier:(CDStruct_7523a67d)arg4;	// IMP=0x000000010001b8c0
+ (id)retrieveReport:(long long)arg1 reportResultKey:(id)arg2 accessoryIdentifier:(CDStruct_7523a67d)arg3;	// IMP=0x000000010001b888
+ (id)retrieveKeys:(id)arg1 accessoryIdentifier:(CDStruct_7523a67d)arg2;	// IMP=0x000000010001b85c
+ (id)convertExternalAccessoryToDictionary:(id)arg1;	// IMP=0x000000010001b594
+ (id)retrieveAllExternalAccessories;	// IMP=0x000000010001b538
+ (id)retrieveAllPowerSourceInformation;	// IMP=0x000000010001b32c
+ (unsigned long long)retrieveDAAccessoryForExternalAccessory:(id)arg1;	// IMP=0x000000010001b0e0
+ (id)flattenDictionary:(id)arg1;	// IMP=0x000000010001af38
+ (id)sanitizeDictionary:(id)arg1 flatten:(_Bool)arg2;	// IMP=0x000000010001a8f4
+ (id)mergePowerSourceInformation:(id)arg1 externalAccessories:(id)arg2 HIDEntry:(id)arg3 accessoryIdentifer:(CDStruct_7523a67d)arg4;	// IMP=0x000000010001a40c
+ (_Bool)validBatterySerialNumberString:(id)arg1;	// IMP=0x000000010001a374
+ (id)generateSmartBatteryProfile:(id)arg1;	// IMP=0x0000000100019e74
+ (id)generateProfileForAccessory:(unsigned long long)arg1 filter:(id)arg2;	// IMP=0x0000000100019e20
+ (id)retrieveNameForAccessory:(unsigned long long)arg1;	// IMP=0x0000000100019dbc
+ (CDStruct_7523a67d)retrieveAccessoryIdentifierForAccessory:(unsigned long long)arg1;	// IMP=0x0000000100019d64
+ (id)retrieveInformationForAccessory:(unsigned long long)arg1 flattenEntries:(_Bool)arg2;	// IMP=0x000000010001990c
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *accessoryObservationQueue; // @synthesize accessoryObservationQueue=_accessoryObservationQueue;
@property(nonatomic) __weak id <DAAccessoryInformationManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;	// IMP=0x000000010001c770
- (void)endObserving;	// IMP=0x0000000100019888
- (void)accessoryDisconnected:(id)arg1;	// IMP=0x000000010001964c
- (void)accessoryConnected:(id)arg1;	// IMP=0x0000000100019418
- (void)beginObserving;	// IMP=0x0000000100019320
- (id)init;	// IMP=0x0000000100019310
- (id)initWithDelegate:(id)arg1;	// IMP=0x0000000100019270

@end

