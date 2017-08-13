//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDate, NSDictionary, NSString;

@interface ATVRadioSearchResults : NSObject
{
    _Bool _hasBeenDisplayed;	// 8 = 0x8
    NSString *_searchTerm;	// 16 = 0x10
    NSDate *_startDate;	// 24 = 0x18
    NSDictionary *_unparsedResponseDictionary;	// 32 = 0x20
    NSArray *_sections;	// 40 = 0x28
}

@property(nonatomic) _Bool hasBeenDisplayed; // @synthesize hasBeenDisplayed=_hasBeenDisplayed;
@property(copy, nonatomic) NSArray *sections; // @synthesize sections=_sections;
@property(copy, nonatomic) NSDictionary *unparsedResponseDictionary; // @synthesize unparsedResponseDictionary=_unparsedResponseDictionary;
@property(retain, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(copy, nonatomic) NSString *searchTerm; // @synthesize searchTerm=_searchTerm;
- (void).cxx_destruct;	// IMP=0x000000010008a6b8

@end

