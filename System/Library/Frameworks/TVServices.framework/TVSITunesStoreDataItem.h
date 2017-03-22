/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:58 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/TVServices.framework/TVServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVServices/TVSDataItem.h>

@class TVSBookmark, NSDictionary, TVSDataType, NSNumber, NSDate;

@interface TVSITunesStoreDataItem : TVSDataItem {

	unsigned long long _mochaResolutionIndex;
	unsigned long long _1080pResolutionIndex;
	unsigned long long _720pResolutionIndex;
	unsigned long long _480pResolutionIndex;
	TVSBookmark* _bookmark;
	BOOL _allowedToUseHLSURL;
	NSDictionary* _storeDict;
	TVSDataType* _mediaType;
	NSNumber* _storeItemID;
	NSDate* _expirationDate;

}

@property (nonatomic,retain) NSDictionary * storeDict;              //@synthesize storeDict=_storeDict - In the implementation block
@property (nonatomic,retain) TVSDataType * mediaType;               //@synthesize mediaType=_mediaType - In the implementation block
@property (nonatomic,copy) NSNumber * storeItemID;                  //@synthesize storeItemID=_storeItemID - In the implementation block
@property (nonatomic,retain) NSDate * expirationDate;               //@synthesize expirationDate=_expirationDate - In the implementation block
@property (assign,nonatomic) BOOL allowedToUseHLSURL;               //@synthesize allowedToUseHLSURL=_allowedToUseHLSURL - In the implementation block
@property (nonatomic,readonly) TVSBookmark * bookmark; 
+(id)storeFlavorKeyForATVDataProperty:(id)arg1 ;
+(id)storeKeyForATVDataProperty:(id)arg1 ;
-(void)dealloc;
-(unsigned long long)hash;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(NSDate *)expirationDate;
-(void)setValue:(id)arg1 forProperty:(id)arg2 ;
-(NSNumber *)storeItemID;
-(void)updateBookmark:(id)arg1 ;
-(id)concreteValueForProperty:(id)arg1 ;
-(TVSBookmark *)bookmark;
-(id)initWithDataClient:(id)arg1 storeDict:(id)arg2 ;
-(id)_dateFromString:(id)arg1 ;
-(void)_bookmarkServiceUpdatedNotification:(id)arg1 ;
-(void)setAllowedToUseHLSURL:(BOOL)arg1 ;
-(BOOL)_useHLSInsteadOfSpecificFlavor;
-(id)_flavoredDict;
-(unsigned long long)_bestResolutionIndex;
-(BOOL)allowedToUseHLSURL;
-(NSDictionary *)storeDict;
-(void)setStoreDict:(NSDictionary *)arg1 ;
-(void)setStoreItemID:(NSNumber *)arg1 ;
-(TVSDataType *)mediaType;
-(void)setMediaType:(TVSDataType *)arg1 ;
@end
