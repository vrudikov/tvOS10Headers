/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:26 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameplayKit/GKBehavior.h>

@class NSMutableArray;

@interface GKCompositeBehavior : GKBehavior {

	NSMutableArray* _subBehaviors;
	NSMutableArray* _subBehaviorWeights;

}

@property (readonly) long long behaviorCount; 
+(id)behaviorWithBehaviors:(id)arg1 ;
+(id)behaviorWithBehaviors:(id)arg1 andWeights:(id)arg2 ;
-(id)init;
-(id)objectAtIndexedSubscript:(unsigned long long)arg1 ;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(void)removeAllBehaviors;
-(void)removeBehavior:(id)arg1 ;
-(3)getTotalForce:(double)arg1 agent:(id)arg2 ;
-(long long)behaviorCount;
-(id)initWithBehaviors:(id)arg1 ;
-(id)initWithBehaviors:(id)arg1 andWeights:(id)arg2 ;
-(void)setWeight:(float)arg1 forBehavior:(id)arg2 ;
-(float)weightForBehavior:(id)arg1 ;
@end

