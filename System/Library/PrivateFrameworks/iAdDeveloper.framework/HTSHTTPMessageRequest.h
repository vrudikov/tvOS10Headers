/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:08:50 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/iAdDeveloper.framework/iAdDeveloper
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iAdDeveloper/iAdDeveloper-Structs.h>
#import <iAdDeveloper/HTSHTTPMessage.h>

@class NSString, NSURL;

@interface HTSHTTPMessageRequest : HTSHTTPMessage {

	NSString* _requestMethod;
	NSURL* _requestURL;

}

@property (nonatomic,copy) NSString * requestMethod;              //@synthesize requestMethod=_requestMethod - In the implementation block
@property (nonatomic,copy) NSURL * requestURL;                    //@synthesize requestURL=_requestURL - In the implementation block
-(id)responseWithStatus:(int)arg1 ;
-(void)setRequestURL:(NSURL *)arg1 ;
-(NSURL *)requestURL;
-(void)dealloc;
-(id)initWithRequest:(CFHTTPMessageRef)arg1 ;
-(CFHTTPMessageRef)copyMessage;
-(BOOL)responseCanUseGZip;
-(NSString *)requestMethod;
-(void)setRequestMethod:(NSString *)arg1 ;
@end

