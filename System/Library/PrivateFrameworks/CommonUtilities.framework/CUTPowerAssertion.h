/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:01:30 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/CommonUtilities.framework/CommonUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray;

@interface CUTPowerAssertion : NSObject {

	unsigned _assertion;
	NSString* _identifier;
	NSArray* _stack;

}
-(void)dealloc;
-(id)description;
-(id)initWithIdentifier:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 timeout:(double)arg2 ;
@end

