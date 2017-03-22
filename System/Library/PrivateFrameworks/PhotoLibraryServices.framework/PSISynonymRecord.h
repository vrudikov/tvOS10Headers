/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:06:26 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface PSISynonymRecord : NSObject {

	short _category;
	NSString* _synonym;

}

@property (nonatomic,copy) NSString * synonym;              //@synthesize synonym=_synonym - In the implementation block
@property (assign,nonatomic) short category;                //@synthesize category=_category - In the implementation block
-(void)dealloc;
-(void)setCategory:(short)arg1 ;
-(short)category;
-(id)initWithSynonym:(id)arg1 category:(short)arg2 ;
-(NSString *)synonym;
-(void)setSynonym:(NSString *)arg1 ;
@end
