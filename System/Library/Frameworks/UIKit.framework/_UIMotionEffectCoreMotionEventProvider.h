/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:02:34 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/_UIMotionEffectEventProvider.h>

@class CMMotionManager, NSOperationQueue;

@interface _UIMotionEffectCoreMotionEventProvider : _UIMotionEffectEventProvider {

	CMMotionManager* _motionManager;
	NSOperationQueue* _motionEventQueue;

}
-(void)dealloc;
-(id)init;
-(BOOL)shouldLogEvents;
-(double)fastUpdateIntervalForLogs;
-(double)slowUpdateIntervalForLogs;
-(void)setSlowUpdatesEnabled:(BOOL)arg1 ;
-(void)startGeneratingEvents;
-(void)stopGeneratingEvents;
-(id)currentEvent;
@end

