//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IMKeyValueStoreController, IMKeyValueStoreError, IMKeyValueStoreTransaction;

@protocol MZKeyValueStoreControllerDelegate <NSObject>
- (void)keyValueStoreController:(IMKeyValueStoreController *)arg1 transactionDidFinish:(IMKeyValueStoreTransaction *)arg2;
- (void)keyValueStoreController:(IMKeyValueStoreController *)arg1 transaction:(IMKeyValueStoreTransaction *)arg2 didCancelWithError:(IMKeyValueStoreError *)arg3;
- (_Bool)keyValueStoreController:(IMKeyValueStoreController *)arg1 transaction:(IMKeyValueStoreTransaction *)arg2 didFailWithError:(IMKeyValueStoreError *)arg3;

@optional
- (_Bool)keyValueStoreController:(IMKeyValueStoreController *)arg1 shouldScheduleTransaction:(IMKeyValueStoreTransaction *)arg2;
@end

