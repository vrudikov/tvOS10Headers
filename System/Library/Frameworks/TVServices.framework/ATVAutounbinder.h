/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:53 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/TVServices.framework/TVServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMapTable;

@interface ATVAutounbinder : NSObject {

	NSMapTable* _bindingsByObject;
	BOOL _assertOnRetainEnabled;

}
-(void)dealloc;
-(id)init;
-(id)retain;
-(void)_assertIllegalRetain;
-(void)addBinding:(id)arg1 fromObject:(id)arg2 ;
-(void)removeBinding:(id)arg1 fromObject:(id)arg2 ;
-(void)_notifyBindingAdaptors;
-(void)_enableAssertOnRetain;
@end
