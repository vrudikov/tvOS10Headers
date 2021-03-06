/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:08:44 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/SiriTVUI.framework/SiriTVUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface SiriTVUIMonogrammer : NSObject {

	NSMutableDictionary* _monogramCache;

}
+(id)sharedInstance;
-(id)init;
-(void)clearCache;
-(id)monogramWithText:(id)arg1 diameter:(double)arg2 userInterfaceStyle:(long long)arg3 ;
-(id)monogramForMonogramNames:(id)arg1 diameter:(double)arg2 fontSize:(double)arg3 userInterfaceStyle:(long long)arg4 ;
-(id)_monogramLabelAttributesForFontSize:(double)arg1 userInterfaceStyle:(long long)arg2 ;
@end

