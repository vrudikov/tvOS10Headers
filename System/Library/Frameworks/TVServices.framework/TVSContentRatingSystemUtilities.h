/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:58 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/TVServices.framework/TVServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface TVSContentRatingSystemUtilities : NSObject
+(unsigned long long)ratingSystemFromString:(id)arg1 ;
+(BOOL)_isRatingSystemForMovies:(unsigned long long)arg1 ;
+(BOOL)_isRatingSystemForTV:(unsigned long long)arg1 ;
+(BOOL)_isRatingSystemForMusic:(unsigned long long)arg1 ;
+(unsigned long long)ratingSystemKindForRatingSystem:(unsigned long long)arg1 ;
+(id)stringForRatingSystem:(unsigned long long)arg1 ;
+(id)_ratingSystemLookUpDictionary;
+(id)_ratingSystemStringLookUpDictionary;
@end

