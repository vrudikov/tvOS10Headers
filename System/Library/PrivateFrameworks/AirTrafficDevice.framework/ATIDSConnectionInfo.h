/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:08:09 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MSVXPCTransaction, IDSDevice, ATIDSSocket;

@interface ATIDSConnectionInfo : NSObject {

	MSVXPCTransaction* _xpcTransaction;
	unsigned _failureCount;
	IDSDevice* _device;
	long long _priority;
	double _wakeupTimestamp;
	unsigned long long _connectionState;
	ATIDSSocket* _socket;

}

@property (nonatomic,retain) IDSDevice * device;                              //@synthesize device=_device - In the implementation block
@property (assign,nonatomic) long long priority;                              //@synthesize priority=_priority - In the implementation block
@property (assign,nonatomic) double wakeupTimestamp;                          //@synthesize wakeupTimestamp=_wakeupTimestamp - In the implementation block
@property (assign,nonatomic) unsigned long long connectionState;              //@synthesize connectionState=_connectionState - In the implementation block
@property (assign,nonatomic) unsigned failureCount;                           //@synthesize failureCount=_failureCount - In the implementation block
@property (nonatomic,retain) ATIDSSocket * socket;                            //@synthesize socket=_socket - In the implementation block
-(void)dealloc;
-(id)init;
-(long long)priority;
-(void)setPriority:(long long)arg1 ;
-(unsigned long long)connectionState;
-(unsigned)failureCount;
-(void)setFailureCount:(unsigned)arg1 ;
-(void)setSocket:(ATIDSSocket *)arg1 ;
-(void)setConnectionState:(unsigned long long)arg1 ;
-(double)wakeupTimestamp;
-(void)setWakeupTimestamp:(double)arg1 ;
-(IDSDevice *)device;
-(ATIDSSocket *)socket;
-(void)setDevice:(IDSDevice *)arg1 ;
@end

