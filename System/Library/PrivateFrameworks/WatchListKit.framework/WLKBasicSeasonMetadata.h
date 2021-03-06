/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:10:00 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WatchListKit/WLKBasicContentMetadata.h>

@class NSNumber, WLKShowContentRating, NSString;

@interface WLKBasicSeasonMetadata : WLKBasicContentMetadata {

	NSNumber* _seasonNumber;
	WLKShowContentRating* _contentRating;
	NSString* _canonicalShowID;

}

@property (nonatomic,readonly) NSNumber * seasonNumber;                           //@synthesize seasonNumber=_seasonNumber - In the implementation block
@property (nonatomic,readonly) WLKShowContentRating * contentRating;              //@synthesize contentRating=_contentRating - In the implementation block
@property (nonatomic,copy,readonly) NSString * canonicalShowID;                   //@synthesize canonicalShowID=_canonicalShowID - In the implementation block
+(id)seasonsWithDictionaries:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(WLKShowContentRating *)contentRating;
-(NSNumber *)seasonNumber;
-(NSString *)canonicalShowID;
@end

