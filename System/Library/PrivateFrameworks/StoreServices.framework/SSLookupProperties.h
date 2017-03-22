/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:01:51 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/StoreServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/SSXPCCoding.h>

@class CLLocation, NSMutableDictionary, NSNumber, NSString;

@interface SSLookupProperties : NSObject <NSCopying, SSXPCCoding> {

	CLLocation* _location;
	long long _localizationStyle;
	NSMutableDictionary* _requestParameters;
	NSNumber* _timeoutInterval;

}

@property (nonatomic,copy) NSString * keyProfile; 
@property (assign,nonatomic) long long localizationStyle;              //@synthesize localizationStyle=_localizationStyle - In the implementation block
@property (nonatomic,copy) CLLocation * location;                      //@synthesize location=_location - In the implementation block
@property (nonatomic,copy) NSNumber * timeoutInterval;                 //@synthesize timeoutInterval=_timeoutInterval - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)copyRequestParameters;
-(long long)localizationStyle;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CLLocation *)location;
-(void)setLocation:(CLLocation *)arg1 ;
-(void)setTimeoutInterval:(NSNumber *)arg1 ;
-(NSNumber *)timeoutInterval;
-(void)setValue:(id)arg1 forRequestParameter:(id)arg2 ;
-(void)setKeyProfile:(NSString *)arg1 ;
-(void)setLocalizationStyle:(long long)arg1 ;
-(id)valueForRequestParameter:(id)arg1 ;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)arg1 ;
-(NSString *)keyProfile;
@end
