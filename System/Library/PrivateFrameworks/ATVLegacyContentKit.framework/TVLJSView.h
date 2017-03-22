/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:13 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ATVLegacyContentKit/ATVLegacyContentKit-Structs.h>
@class UIView;

@interface TVLJSView : NSObject {

	UIView* _underlyingUIView;

}

@property (nonatomic,retain,readonly) UIView * underlyingUIView;              //@synthesize underlyingUIView=_underlyingUIView - In the implementation block
+(void)addConstructorToObject:(OpaqueJSValueRef)arg1 inContext:(OpaqueJSContextRef)arg2 ;
+(id)viewFromValue:(OpaqueJSValueRef)arg1 inContext:(OpaqueJSContextRef)arg2 exception:(const OpaqueJSValue*)arg3 ;
+(OpaqueJSValueRef)constructObjectWithClassName:(id)arg1 withATVJSViewClass:(Class)arg2 inContext:(OpaqueJSContextRef)arg3 ;
-(void)dealloc;
-(id)makeUnderlyingUIView;
-(UIView *)underlyingUIView;
@end
