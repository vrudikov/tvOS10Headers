/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:54 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/TVServices.framework/TVServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVServices/TVServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSNumber, NSSet, NSString, TVSBookmark, NSDate;

@interface TVSStoreLookupItem : NSObject <NSCopying, NSSecureCoding> {

	NSNumber* _ITunesStoreIdentifier;
	NSSet* _childrenIDs;
	NSSet* _childLookupItems;
	unsigned long long _itemKind;
	NSString* _seasonID;
	TVSBookmark* _bookmark;
	NSDate* _releaseDate;
	double _duration;

}

@property (nonatomic,copy) NSNumber * ITunesStoreIdentifier;              //@synthesize ITunesStoreIdentifier=_ITunesStoreIdentifier - In the implementation block
@property (nonatomic,copy) NSSet * childrenIDs;                           //@synthesize childrenIDs=_childrenIDs - In the implementation block
@property (nonatomic,copy) NSSet * childLookupItems;                      //@synthesize childLookupItems=_childLookupItems - In the implementation block
@property (assign,nonatomic) unsigned long long itemKind;                 //@synthesize itemKind=_itemKind - In the implementation block
@property (nonatomic,copy) NSString * seasonID;                           //@synthesize seasonID=_seasonID - In the implementation block
@property (nonatomic,copy) TVSBookmark * bookmark;                        //@synthesize bookmark=_bookmark - In the implementation block
@property (nonatomic,copy) NSDate * releaseDate;                          //@synthesize releaseDate=_releaseDate - In the implementation block
@property (assign,nonatomic) double duration;                             //@synthesize duration=_duration - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)description;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)itemKind;
-(NSDate *)releaseDate;
-(NSNumber *)ITunesStoreIdentifier;
-(void)setReleaseDate:(NSDate *)arg1 ;
-(void)setITunesStoreIdentifier:(NSNumber *)arg1 ;
-(NSSet *)childrenIDs;
-(void)setChildrenIDs:(NSSet *)arg1 ;
-(NSSet *)childLookupItems;
-(void)setChildLookupItems:(NSSet *)arg1 ;
-(void)setItemKind:(unsigned long long)arg1 ;
-(NSString *)seasonID;
-(void)setSeasonID:(NSString *)arg1 ;
-(TVSBookmark *)bookmark;
-(void)setBookmark:(TVSBookmark *)arg1 ;
@end
