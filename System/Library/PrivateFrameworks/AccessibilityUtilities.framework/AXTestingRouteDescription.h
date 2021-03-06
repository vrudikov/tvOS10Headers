/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:06:17 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFAudio/AVAudioSessionRouteDescription.h>

@class NSArray;

@interface AXTestingRouteDescription : AVAudioSessionRouteDescription {

	NSArray* outputs;
	NSArray* inputs;

}

@property (retain) NSArray * inputs; 
@property (retain) NSArray * outputs; 
-(void)dealloc;
-(NSArray *)inputs;
-(void)setInputs:(NSArray *)arg1 ;
-(void)setOutputs:(NSArray *)arg1 ;
-(NSArray *)outputs;
@end

