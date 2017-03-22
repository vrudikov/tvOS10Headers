/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:07 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class AVAudioMixInputParametersInternal, NSString;

@interface AVAudioMixInputParameters : NSObject <NSCopying, NSMutableCopying> {

	AVAudioMixInputParametersInternal* _inputParameters;

}

@property (nonatomic,readonly) int trackID; 
@property (nonatomic,copy,readonly) NSString * audioTimePitchAlgorithm; 
@property (nonatomic,retain,readonly) const opaqueMTAudioProcessingTapRef audioTapProcessor; 
-(void)finalize;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)_audioVolumeCurve;
-(const opaqueMTAudioProcessingTapRef)audioTapProcessor;
-(id)effectParameters;
-(id)_volumeCurveAsString;
-(void)_setScheduledAudioParameters:(id)arg1 ;
-(void)setAudioTapProcessor:(const opaqueMTAudioProcessingTapRef)arg1 ;
-(void)setEffectParameters:(id)arg1 ;
-(void)setVolume:(float)arg1 atTime:(SCD_Struct_AV2)arg2 ;
-(void)_setVolumeRampFromStartVolume:(float)arg1 toEndVolume:(float)arg2 timeRange:(SCD_Struct_AV3)arg3 ;
-(void)_setVolume:(float)arg1 atTime:(SCD_Struct_AV2)arg2 ;
-(int)trackID;
-(void)setAudioTimePitchAlgorithm:(NSString *)arg1 ;
-(NSString *)audioTimePitchAlgorithm;
-(BOOL)getVolumeRampForTime:(SCD_Struct_AV2)arg1 startVolume:(float*)arg2 endVolume:(float*)arg3 timeRange:(SCD_Struct_AV3*)arg4 ;
-(void)setVolumeRampFromStartVolume:(float)arg1 toEndVolume:(float)arg2 timeRange:(SCD_Struct_AV3)arg3 ;
-(void)setTrackID:(int)arg1 ;
@end
