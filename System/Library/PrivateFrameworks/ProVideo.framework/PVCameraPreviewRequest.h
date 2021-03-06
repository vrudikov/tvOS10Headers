/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:49 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ProVideo/ProVideo-Structs.h>
@class PVEffect, NSDictionary, NSArray;

@interface PVCameraPreviewRequest : NSObject {

	BOOL _mirrored;
	opaqueCMSampleBufferRef _sampleBuffer;
	PVEffect* _effect;
	NSDictionary* _effectProperties;
	NSArray* _metadataObjects;
	SCD_Struct_PV14 _time;

}

@property (assign,nonatomic) opaqueCMSampleBufferRef sampleBuffer;              //@synthesize sampleBuffer=_sampleBuffer - In the implementation block
@property (assign,nonatomic) SCD_Struct_PV14 time;                              //@synthesize time=_time - In the implementation block
@property (assign,nonatomic) BOOL mirrored;                                     //@synthesize mirrored=_mirrored - In the implementation block
@property (nonatomic,retain) PVEffect * effect;                                 //@synthesize effect=_effect - In the implementation block
@property (nonatomic,copy) NSDictionary * effectProperties;                     //@synthesize effectProperties=_effectProperties - In the implementation block
@property (nonatomic,copy) NSArray * metadataObjects;                           //@synthesize metadataObjects=_metadataObjects - In the implementation block
-(oneway void)dealloc;
-(void)setEffect:(PVEffect *)arg1 ;
-(PVEffect *)effect;
-(SCD_Struct_PV14)time;
-(void)setTime:(SCD_Struct_PV14)arg1 ;
-(opaqueCMSampleBufferRef)sampleBuffer;
-(void)setMirrored:(BOOL)arg1 ;
-(void)setSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(BOOL)mirrored;
-(NSDictionary *)effectProperties;
-(void)setEffectProperties:(NSDictionary *)arg1 ;
-(NSArray *)metadataObjects;
-(void)setMetadataObjects:(NSArray *)arg1 ;
@end

