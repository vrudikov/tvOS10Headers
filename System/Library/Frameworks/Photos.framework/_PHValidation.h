/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:06:33 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSError;

@interface _PHValidation : NSObject {

	unsigned long long _requestedOptions;
	unsigned long long _validatedOptions;
	NSError* _error;

}
-(id)initWithOptions:(unsigned long long)arg1 ;
-(void)assert:(BOOL)arg1 format:(id)arg2 ;
-(void)validateOption:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)assert:(BOOL)arg1 error:(id)arg2 ;
-(BOOL)isValid:(id*)arg1 ;
@end

