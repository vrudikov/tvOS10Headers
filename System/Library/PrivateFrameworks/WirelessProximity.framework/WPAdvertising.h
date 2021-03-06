/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:06:52 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/WirelessProximity.framework/WirelessProximity
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WirelessProximity/WPClient.h>

@protocol WPAdvertisingDelegate;
@interface WPAdvertising : WPClient {

	id<WPAdvertisingDelegate> _delegate;

}

@property (nonatomic,retain) id<WPAdvertisingDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(unsigned char)puckStringToType:(id)arg1 ;
+(id)puckTypeToString:(unsigned char)arg1 ;
-(void)setDelegate:(id<WPAdvertisingDelegate>)arg1 ;
-(id<WPAdvertisingDelegate>)delegate;
-(void)invalidate;
-(id)clientAsString;
-(void)advertisingFailedToStart:(id)arg1 ofType:(unsigned char)arg2 ;
-(void)advertisingStartedOfType:(unsigned char)arg1 ;
-(void)advertisingStoppedOfType:(unsigned char)arg1 ;
-(void)advertisingPendingOfType:(unsigned char)arg1 ;
-(id)parseCompanyData:(id)arg1 ;
-(void)registerService:(id)arg1 ;
-(void)deregisterService:(id)arg1 ;
-(void)stateDidChange:(long long)arg1 ;
-(id)initWithDelegate:(id)arg1 queue:(id)arg2 ;
@end

