/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:01:36 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ManagedConfiguration/MCProcessAssertion.h>

@interface MCPowerAssertion : MCProcessAssertion {

	BOOL _parked;

}

@property (getter=isParked,nonatomic,readonly) BOOL parked;              //@synthesize parked=_parked - In the implementation block
-(void)unpark;
-(void)park;
-(BOOL)isParked;
-(void)dealloc;
-(id)init;
@end

