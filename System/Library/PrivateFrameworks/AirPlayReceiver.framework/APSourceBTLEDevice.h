/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:08:09 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/AirPlayReceiver.framework/AirPlayReceiver
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface APSourceBTLEDevice : NSObject {

	int _lastRSSI;
	unsigned long long _lastUpdateTicks;

}

@property (assign,nonatomic) int lastRSSI;                                    //@synthesize lastRSSI=_lastRSSI - In the implementation block
@property (assign,nonatomic) unsigned long long lastUpdateTicks;              //@synthesize lastUpdateTicks=_lastUpdateTicks - In the implementation block
-(int)lastRSSI;
-(void)setLastRSSI:(int)arg1 ;
-(unsigned long long)lastUpdateTicks;
-(void)setLastUpdateTicks:(unsigned long long)arg1 ;
@end
