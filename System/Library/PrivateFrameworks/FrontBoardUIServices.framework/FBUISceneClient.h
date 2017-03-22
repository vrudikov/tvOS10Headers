/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:06:01 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardUIServices.framework/FrontBoardUIServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FBUISceneClient.h>

@protocol FBUISceneClient <FBUISceneClientProxy>
@required
-(void)registerWithDelegate:(id)arg1;
-(void)sceneHost:(id)arg1 registerWithInitialParameters:(id)arg2;

@end


@protocol FBUISceneHostProxy;
@class FBUISceneIdentity, NSString;

@interface FBUISceneClient : NSObject <FBUISceneClient> {

	FBUISceneIdentity* _identity;
	id<FBUISceneHostProxy> _hostProxy;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * sceneIdentifier; 
-(void)dealloc;
-(NSString *)description;
-(id)initWithIdentity:(id)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)didInvalidateSceneHost:(id)arg1 ;
-(void)sceneHost:(id)arg1 didUpdateSettings:(id)arg2 withDiff:(id)arg3 transitionContext:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)sceneHost:(id)arg1 destroySceneWithTransitionContext:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)sceneHost:(id)arg1 didReceiveActions:(id)arg2 ;
-(void)registerWithDelegate:(id)arg1 ;
-(void)sceneHost:(id)arg1 registerWithInitialParameters:(id)arg2 ;
-(NSString *)sceneIdentifier;
@end
