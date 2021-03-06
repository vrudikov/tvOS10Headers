//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumber, NSString, TVSDataType;

@interface TVHSDeepLinkOptions : NSObject
{
    id _dataServerID;	// 8 = 0x8
    TVSDataType *_dataItemType;	// 16 = 0x10
    unsigned long long _action;	// 24 = 0x18
    NSNumber *_dataItemID;	// 32 = 0x20
    NSString *_dataItemName;	// 40 = 0x28
    NSNumber *_albumID;	// 48 = 0x30
    NSString *_albumName;	// 56 = 0x38
    NSNumber *_artistID;	// 64 = 0x40
    NSString *_artistName;	// 72 = 0x48
    NSNumber *_seasonNumber;	// 80 = 0x50
    NSString *_showName;	// 88 = 0x58
}

+ (id)deepLinkOptionsFromURL:(id)arg1;	// IMP=0x00000001000208dc
@property(copy, nonatomic) NSString *showName; // @synthesize showName=_showName;
@property(retain, nonatomic) NSNumber *seasonNumber; // @synthesize seasonNumber=_seasonNumber;
@property(copy, nonatomic) NSString *artistName; // @synthesize artistName=_artistName;
@property(retain, nonatomic) NSNumber *artistID; // @synthesize artistID=_artistID;
@property(copy, nonatomic) NSString *albumName; // @synthesize albumName=_albumName;
@property(retain, nonatomic) NSNumber *albumID; // @synthesize albumID=_albumID;
@property(copy, nonatomic) NSString *dataItemName; // @synthesize dataItemName=_dataItemName;
@property(retain, nonatomic) NSNumber *dataItemID; // @synthesize dataItemID=_dataItemID;
@property(nonatomic) unsigned long long action; // @synthesize action=_action;
@property(nonatomic) TVSDataType *dataItemType; // @synthesize dataItemType=_dataItemType;
@property(retain, nonatomic) id dataServerID; // @synthesize dataServerID=_dataServerID;
- (void).cxx_destruct;	// IMP=0x00000001000212e0

@end

