/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:55 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/TVServices.framework/TVServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVServices/TVContentIdentifier.h>

@class Protocol, NSString;

@interface TVSourceContentIdentifier : TVContentIdentifier {

	Protocol* _sourcePublicProtocol;

}

@property (nonatomic,copy,readonly) NSString * sourceBundleIdentifier; 
@property (nonatomic,readonly) Protocol * sourcePublicProtocol;                     //@synthesize sourcePublicProtocol=_sourcePublicProtocol - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 container:(id)arg2 ;
-(Protocol *)sourcePublicProtocol;
-(NSString *)sourceBundleIdentifier;
-(id)initWithBundleIdentifier:(id)arg1 publicProtocol:(id)arg2 ;
@end

