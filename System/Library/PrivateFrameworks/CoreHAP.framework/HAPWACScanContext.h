/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:43 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreHAP/CoreHAP-Structs.h>
@class HAPWACScanner;

@interface HAPWACScanContext : NSObject {

	HAPWACScanner* _originator;
	/*^block*/id _completion;
	CFRunLoopRef _runLoop;

}

@property (assign,nonatomic,__weak) HAPWACScanner * originator;              //@synthesize originator=_originator - In the implementation block
@property (nonatomic,copy) id completion;                                    //@synthesize completion=_completion - In the implementation block
@property (assign,nonatomic) CFRunLoopRef runLoop;                           //@synthesize runLoop=_runLoop - In the implementation block
-(CFRunLoopRef)runLoop;
-(void)dealloc;
-(id)completion;
-(void)setCompletion:(id)arg1 ;
-(HAPWACScanner *)originator;
-(void)setOriginator:(HAPWACScanner *)arg1 ;
-(void)setRunLoop:(CFRunLoopRef)arg1 ;
@end

