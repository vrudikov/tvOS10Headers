/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:04:50 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/iTunesStore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSNumber, NSMutableDictionary, NSArray;

@interface ISPersonalizeOffersRequest : NSObject <NSCopying> {

	NSNumber* _accountIdentifier;
	NSMutableDictionary* _itemIDsByType;

}

@property (nonatomic,retain) NSNumber * accountIdentifier;              //@synthesize accountIdentifier=_accountIdentifier - In the implementation block
@property (nonatomic,readonly) NSArray * allItemTypes; 
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithItems:(id)arg1 ;
-(NSArray *)allItemTypes;
-(id)itemIdentifiersForItemType:(id)arg1 ;
-(void)addItemIdentifier:(id)arg1 forItemType:(id)arg2 ;
-(NSNumber *)accountIdentifier;
-(void)setAccountIdentifier:(NSNumber *)arg1 ;
@end
