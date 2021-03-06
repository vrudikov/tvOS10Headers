/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:50 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FxFilter <FxBaseEffect>
@optional
-(unsigned long long)numberOfFramesToScheduleAtRenderTime:(/*function pointer*/void**)arg1;
-(void)schedule:(unsigned long long)arg1 frames:(/*function pointer*/void**)arg2 forRenderAtTime:(/*function pointer*/void**)arg3;

@required
-(BOOL)frameCleanup;
-(BOOL)renderOutput:(id)arg1 withInput:(id)arg2 withInfo:(SCD_Struct_PA46*)arg3;
-(BOOL)getOutputWidth:(unsigned long long*)arg1 height:(unsigned long long*)arg2 withInput:(SCD_Struct_Fx42)arg3 withInfo:(SCD_Struct_PA46*)arg4;
-(BOOL)frameSetup:(SCD_Struct_PA46*)arg1 inputInfo:(SCD_Struct_Fx42)arg2 hardware:(BOOL*)arg3 software:(BOOL*)arg4;

@end

