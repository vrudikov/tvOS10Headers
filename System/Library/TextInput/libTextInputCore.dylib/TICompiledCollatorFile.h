/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:04 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/TextInput/libTextInputCore.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <libTextInputCore.dylib/libTextInputCore.dylib-Structs.h>
@class NSString;

@interface TICompiledCollatorFile : NSObject {

	int m_descriptor;
	char* m_mappedFile;
	long long m_length;
	NSString* m_path;

}
+(UCollatorRef)createCollatorWithType:(int)arg1 ;
+(id)sharedCollatorFile;
-(void)dealloc;
-(id)initWithPath:(id)arg1 error:(unsigned*)arg2 ;
-(UCollatorRef)createCollatorWithType:(int)arg1 ;
@end

