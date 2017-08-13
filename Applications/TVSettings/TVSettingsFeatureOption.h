//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface TVSettingsFeatureOption : NSObject
{
    NSString *_optionName;	// 8 = 0x8
    NSString *_optionDescription;	// 16 = 0x10
    NSString *_optionDomain;	// 24 = 0x18
    NSString *_optionPreference;	// 32 = 0x20
}

@property(copy, nonatomic) NSString *optionPreference; // @synthesize optionPreference=_optionPreference;
@property(copy, nonatomic) NSString *optionDomain; // @synthesize optionDomain=_optionDomain;
@property(copy, nonatomic) NSString *optionDescription; // @synthesize optionDescription=_optionDescription;
@property(copy, nonatomic) NSString *optionName; // @synthesize optionName=_optionName;
- (void).cxx_destruct;	// IMP=0x000000010008c62c
- (_Bool)setOptionEnabled:(_Bool)arg1;	// IMP=0x000000010008c424
@property(readonly, nonatomic, getter=isOptionEnabled) _Bool optionEnabled;
- (id)debugDescription;	// IMP=0x000000010008c24c
- (id)initWithName:(id)arg1 andDescription:(id)arg2 forOptionDomain:(id)arg3 andOptionPreference:(id)arg4;	// IMP=0x000000010008c0f8

@end

