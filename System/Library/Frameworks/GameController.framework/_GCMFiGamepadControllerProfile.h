/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:24 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameController/GameController-Structs.h>
#import <GameController/_GCGamepad.h>
#import <libobjc.A.dylib/_GCACHomeButtonDelegate.h>

@class _GCACHomeButton, GCMotion, NSString;

@interface _GCMFiGamepadControllerProfile : _GCGamepad <_GCACHomeButtonDelegate> {

	_GCACHomeButton* _acHome;
	GCMotion* _motion;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithCoder:(id)arg1 ;
-(id)name;
-(id)motion;
-(void)setPlayerIndex:(long long)arg1 ;
-(id)menuButton;
-(id)inputForElement:(IOHIDElementRef)arg1 ;
-(void)set_motion:(id)arg1 ;
-(void)toggleSuspendResume;
-(id)initWithController:(id)arg1 ;
@end

