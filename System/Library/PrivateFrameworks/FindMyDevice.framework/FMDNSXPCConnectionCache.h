/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:38 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/FindMyDevice.framework/FindMyDevice
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSXPCConnection;

@interface FMDNSXPCConnectionCache : NSObject {

	NSObject*<OS_dispatch_queue> _modsSerialQueue;
	NSXPCConnection* _xpcHelperConnection;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> modsSerialQueue;              //@synthesize modsSerialQueue=_modsSerialQueue - In the implementation block
@property (nonatomic,retain) NSXPCConnection * xpcHelperConnection;                     //@synthesize xpcHelperConnection=_xpcHelperConnection - In the implementation block
+(id)sharedCache;
-(id)init;
-(id)connectionToXPCHelper;
-(NSObject*<OS_dispatch_queue>)modsSerialQueue;
-(NSXPCConnection *)xpcHelperConnection;
-(void)setXpcHelperConnection:(NSXPCConnection *)arg1 ;
-(void)setModsSerialQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

