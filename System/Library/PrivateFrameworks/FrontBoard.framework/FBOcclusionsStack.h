/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:06:13 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSCountedSet, NSMutableDictionary, NSMutableArray, NSMutableSet;

@interface FBOcclusionsStack : NSObject {

	NSCountedSet* _levels;
	NSMutableDictionary* _levelToCompositeOcclusions;
	NSMutableDictionary* _keyToEntry;
	NSMutableArray* _orderedEntries;
	NSMutableSet* _dirtyKeys;

}
-(void)dealloc;
-(id)init;
-(id)description;
-(BOOL)isEmpty;
-(void)removeKey:(id)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)_adjustEntry:(id)arg1 forLevel:(double)arg2 occlusions:(id)arg3 ;
-(void)setKey:(id)arg1 toLevel:(double)arg2 withOcclusions:(id)arg3 ;
-(void)enumerateKeysByLevelWithBlock:(/*^block*/id)arg1 ;
-(id)dirtyKeys;
-(id)occlusionsAppliedToKey:(id)arg1 ;
-(BOOL)isDirty;
@end
