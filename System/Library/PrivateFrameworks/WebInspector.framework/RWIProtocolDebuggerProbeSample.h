/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:42 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@class RWIProtocolRuntimeRemoteObject;

@interface RWIProtocolDebuggerProbeSample : RWIProtocolJSONObject

@property (assign,nonatomic) int probeId; 
@property (assign,nonatomic) int sampleId; 
@property (assign,nonatomic) int batchId; 
@property (assign,nonatomic) double timestamp; 
@property (nonatomic,retain) RWIProtocolRuntimeRemoteObject * payload; 
-(double)timestamp;
-(RWIProtocolRuntimeRemoteObject *)payload;
-(void)setTimestamp:(double)arg1 ;
-(void)setPayload:(RWIProtocolRuntimeRemoteObject *)arg1 ;
-(void)setProbeId:(int)arg1 ;
-(void)setSampleId:(int)arg1 ;
-(void)setBatchId:(int)arg1 ;
-(id)initWithProbeId:(int)arg1 sampleId:(int)arg2 batchId:(int)arg3 timestamp:(double)arg4 payload:(id)arg5 ;
-(int)probeId;
-(int)sampleId;
-(int)batchId;
@end

