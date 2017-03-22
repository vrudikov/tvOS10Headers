/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:08:07 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NEPrettyDescription.h>

@class NSString;

@interface NEPolicyRouteRule : NSObject <NEPrettyDescription> {

	long long _action;
	NSString* _interfaceName;
	long long _type;

}

@property (assign) long long action;                    //@synthesize action=_action - In the implementation block
@property (copy) NSString * interfaceName;              //@synthesize interfaceName=_interfaceName - In the implementation block
@property (assign) long long type;                      //@synthesize type=_type - In the implementation block
+(id)routeRuleWithAction:(long long)arg1 forInterfaceName:(id)arg2 ;
+(id)routeRuleWithAction:(long long)arg1 forType:(long long)arg2 ;
-(id)init;
-(id)description;
-(void)setType:(long long)arg1 ;
-(long long)type;
-(long long)action;
-(void)setAction:(long long)arg1 ;
-(BOOL)validate;
-(void)setInterfaceName:(NSString *)arg1 ;
-(NSString *)interfaceName;
-(id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2 ;
-(id)initInternal;
-(BOOL)addTLVsToMessage:(id)arg1 ;
-(id)actionString;
-(id)typeString;
-(unsigned char)actionValue;
-(unsigned char)typeValue;
@end
