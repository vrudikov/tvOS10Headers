/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:02:35 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewAnimationState.h>

@interface UIViewSpringAnimationState : UIViewAnimationState {

	double _mass;
	double _stiffness;
	double _damping;
	double _velocity;

}
+(id)defaultSpringAnimationForKey:(id)arg1 mass:(double)arg2 stiffness:(double)arg3 damping:(double)arg4 velocity:(double)arg5 ;
+(void)computeDerivedSpringParameters:(double)arg1 zeta:(double)arg2 mass:(double)arg3 velocity:(double)arg4 epsilon:(double)arg5 stiffness:(double*)arg6 damping:(double*)arg7 ;
-(id)_defaultAnimationForKey:(id)arg1 ;
-(id)animationForLayer:(id)arg1 forKey:(id)arg2 forView:(id)arg3 ;
-(void)setupWithDuration:(double)arg1 delay:(double)arg2 view:(id)arg3 options:(unsigned long long)arg4 factory:(id)arg5 parentState:(id)arg6 start:(/*^block*/id)arg7 completion:(/*^block*/id)arg8 ;
-(void)generateSpringPropertiesForDuration:(double)arg1 damping:(double)arg2 velocity:(double)arg3 ;
@end
