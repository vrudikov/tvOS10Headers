/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:45 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UIBezierPath;


@protocol UIDynamicItem <NSObject>
@property (assign,nonatomic) CGPoint center; 
@property (nonatomic,readonly) CGRect bounds; 
@property (assign,nonatomic) CGAffineTransform transform; 
@property (nonatomic,readonly) unsigned long long collisionBoundsType; 
@property (nonatomic,readonly) UIBezierPath * collisionBoundingPath; 
@optional
-(unsigned long long)collisionBoundsType;
-(UIBezierPath *)collisionBoundingPath;

@required
-(CGRect)bounds;
-(CGPoint)center;
-(void)setTransform:(CGAffineTransform)arg1;
-(CGAffineTransform)transform;
-(void)setCenter:(CGPoint)arg1;

@end
