/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:43 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray;

@interface MRLanguageOption : NSObject <NSSecureCoding> {

	unsigned _languageOptionType;
	NSString* _languageTag;
	NSArray* _languageOptionCharacteristics;
	NSString* _displayName;
	NSString* _identifier;

}

@property (nonatomic,readonly) unsigned languageOptionType;                          //@synthesize languageOptionType=_languageOptionType - In the implementation block
@property (nonatomic,readonly) NSString * languageTag;                               //@synthesize languageTag=_languageTag - In the implementation block
@property (nonatomic,readonly) NSArray * languageOptionCharacteristics;              //@synthesize languageOptionCharacteristics=_languageOptionCharacteristics - In the implementation block
@property (nonatomic,readonly) NSString * displayName;                               //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,readonly) NSString * identifier;                                //@synthesize identifier=_identifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(NSString *)identifier;
-(NSString *)displayName;
-(id)initWithType:(unsigned)arg1 languageTag:(id)arg2 characteristics:(id)arg3 displayName:(id)arg4 identifier:(id)arg5 ;
-(unsigned)languageOptionType;
-(NSString *)languageTag;
-(NSArray *)languageOptionCharacteristics;
@end
