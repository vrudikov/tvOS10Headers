/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:08:17 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CoreThemeConstantEnumerator : NSObject {

	void* _globalListPointer;
	long long _listIndex;
	long long _indexOfLastEntry;
	BOOL _isPastLastEntry;

}
+(id)enumeratorForGlobalListAtAddress:(void*)arg1 ;
-(id)initWithGlobalListAtAddress:(void*)arg1 ;
-(id)nextConstantHelper;
-(void)_moveToIndexOfLastEntry;
-(id)currentConstantHelper;
-(long long)constantCount;
-(id)previousConstantHelper;
-(id)firstConstantHelper;
-(id)lastConstantHelper;
@end

