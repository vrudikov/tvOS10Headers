/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:02:38 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <BaseBoard/BSAction.h>

@interface UISceneHitTestAction : BSAction

@property (nonatomic,readonly) CGPoint touchLocation; 
-(long long)UIActionType;
-(void)sendResponse:(id)arg1 ;
-(id)initWithTouchLocation:(CGPoint)arg1 responseHandler:(/*^block*/id)arg2 ;
-(CGPoint)touchLocation;
@end

