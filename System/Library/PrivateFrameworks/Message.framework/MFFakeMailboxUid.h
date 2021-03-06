/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:11 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Message/MFMailboxUid.h>

@class NSString;

@interface MFFakeMailboxUid : MFMailboxUid {

	BOOL _fakeIsSpecialMailboxUid;
	NSString* _displayName;
	NSString* _fakeFullPath;
	NSString* _fakeURLString;

}

@property (nonatomic,copy) NSString * fakeFullPath;                     //@synthesize fakeFullPath=_fakeFullPath - In the implementation block
@property (nonatomic,copy) NSString * fakeURLString;                    //@synthesize fakeURLString=_fakeURLString - In the implementation block
@property (assign,nonatomic) BOOL fakeIsSpecialMailboxUid;              //@synthesize fakeIsSpecialMailboxUid=_fakeIsSpecialMailboxUid - In the implementation block
@property (nonatomic,retain) NSString * displayName;                    //@synthesize displayName=_displayName - In the implementation block
-(void)dealloc;
-(NSString *)displayName;
-(id)URLString;
-(BOOL)isSelectable;
-(void)setDisplayName:(NSString *)arg1 ;
-(BOOL)isSpecialMailboxUid;
-(id)initWithAccount:(id)arg1 URLString:(id)arg2 fullPath:(id)arg3 isSpecial:(BOOL)arg4 ;
-(void)setFakeURLString:(NSString *)arg1 ;
-(void)setFakeFullPath:(NSString *)arg1 ;
-(void)setFakeIsSpecialMailboxUid:(BOOL)arg1 ;
-(NSString *)fakeURLString;
-(NSString *)fakeFullPath;
-(BOOL)fakeIsSpecialMailboxUid;
-(id)initWithAccount:(id)arg1 URLString:(id)arg2 fullPath:(id)arg3 ;
-(id)fullPath;
-(id)store;
@end

