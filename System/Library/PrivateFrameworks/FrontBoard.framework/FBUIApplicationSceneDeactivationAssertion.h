/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:06:13 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class FBSDisplay, NSString;

@interface FBUIApplicationSceneDeactivationAssertion : NSObject <BSDescriptionProviding> {

	FBSDisplay* _display;
	double _sceneLevel;
	long long _reason;
	/*^block*/id _predicate;
	BOOL _acquired;

}

@property (nonatomic,retain,readonly) FBSDisplay * display;                  //@synthesize display=_display - In the implementation block
@property (nonatomic,readonly) double sceneLevel;                            //@synthesize sceneLevel=_sceneLevel - In the implementation block
@property (nonatomic,readonly) long long reason;                             //@synthesize reason=_reason - In the implementation block
@property (nonatomic,copy,readonly) id predicate;                            //@synthesize predicate=_predicate - In the implementation block
@property (getter=isAcquired,nonatomic,readonly) BOOL acquired;              //@synthesize acquired=_acquired - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(NSString *)description;
-(FBSDisplay *)display;
-(long long)reason;
-(id)predicate;
-(id)initWithReason:(long long)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(double)sceneLevel;
-(id)initWithReason:(long long)arg1 sceneLevel:(double)arg2 ;
-(id)_initWithReason:(long long)arg1 sceneLevel:(double)arg2 forDisplay:(id)arg3 ;
-(void)relinquish;
-(void)acquireWithTransitionContext:(id)arg1 ;
-(void)acquireWithPredicate:(/*^block*/id)arg1 transitionContext:(id)arg2 ;
-(void)acquireWithPredicate:(/*^block*/id)arg1 ;
-(BOOL)isAcquired;
-(void)acquire;
@end

