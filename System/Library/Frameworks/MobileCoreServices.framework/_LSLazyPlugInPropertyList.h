/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:01:18 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileCoreServices/_LSLazyPropertyList.h>

@class _LSLazyPropertyList;

@interface _LSLazyPlugInPropertyList : _LSLazyPropertyList {

	_LSLazyPropertyList* _infoPlist;
	_LSLazyPropertyList* _sdkPlist;

}
+(BOOL)supportsSecureCoding;
-(id)initWithInfoPlist:(id)arg1 SDKPlist:(id)arg2 ;
-(id)_loadPropertyListPeeking:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
@end

