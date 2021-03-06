/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:20 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/IMAVCore.framework/IMAVCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableArray, NSObject, NSArray, IMAVMicrophone;

@interface IMAVMicrophoneController : NSObject {

	id _internal;
	NSMutableArray* _microphones;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain,readonly) NSArray * microphones; 
@property (nonatomic,retain) IMAVMicrophone * currentMicrophone; 
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(NSArray *)microphones;
-(void)setCurrentMicrophone:(IMAVMicrophone *)arg1 ;
-(void)_rebuildMicrophoneList;
-(void)_loadSavedMicrophone;
-(IMAVMicrophone *)currentMicrophone;
@end

