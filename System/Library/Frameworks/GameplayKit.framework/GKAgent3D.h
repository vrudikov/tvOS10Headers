/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:26 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameplayKit/GameplayKit-Structs.h>
#import <GameplayKit/GKAgent.h>

@interface GKAgent3D : GKAgent

@property (assign,nonatomic)  position; 
@property (nonatomic,readonly)  velocity; 
@property (assign,nonatomic) BOOL rightHanded; 
@property (assign,nonatomic) SCD_Struct_GK5 rotation; 
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(void)setPosition:;
-()position;
-()velocity;
-(void)setRotation:(SCD_Struct_GK5)arg1 ;
-(SCD_Struct_GK5)rotation;
-(void)updateWithDeltaTime:(double)arg1 ;
-(void)applySteeringForce:(double)arg1 ;
-(void)applyBrakingForce:(float)arg1 deltaTime:(double)arg2 ;
-(BOOL)rightHanded;
-(void)setRightHanded:(BOOL)arg1 ;
@end

