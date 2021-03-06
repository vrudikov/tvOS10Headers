/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:53 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SiriCoreConnectionType : NSObject {

	long long _technology;

}
-(id)description;
-(id)initWithTechnology:(long long)arg1 ;
-(BOOL)isWWAN;
-(long long)technology;
-(BOOL)isEdge;
-(BOOL)canUseWiFiDirectly;
-(long long)diagnosticConnectionType;
-(unsigned long long)aggregatorConnectionType;
@end

