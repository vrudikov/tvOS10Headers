/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:00 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFAudio/AVAudioUnitTimeEffect.h>

@interface AVAudioUnitTimePitch : AVAudioUnitTimeEffect

@property (assign,nonatomic) float rate; 
@property (assign,nonatomic) float pitch; 
@property (assign,nonatomic) float overlap; 
-(id)init;
-(void)setPitch:(float)arg1 ;
-(float)pitch;
-(float)rate;
-(void)setRate:(float)arg1 ;
-(void)setOverlap:(float)arg1 ;
-(float)overlap;
@end
