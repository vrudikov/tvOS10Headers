/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:38 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/PlugInKit.framework/PlugInKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface PKSandboxExtension : NSObject {

	NSString* _token;
	long long _handle;

}

@property (retain) NSString * token;              //@synthesize token=_token - In the implementation block
@property (assign) long long handle;              //@synthesize handle=_handle - In the implementation block
-(void)dealloc;
-(NSString *)token;
-(void)setToken:(NSString *)arg1 ;
-(long long)handle;
-(id)initWithExtension:(id)arg1 ;
-(void)expel;
-(void)consume;
-(void)setHandle:(long long)arg1 ;
@end
