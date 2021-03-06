/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:22 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriUI/SiriUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface SiriUIConfiguration : NSObject <NSCopying> {

	BOOL _isSystemHostedPresentation;
	int _flamesViewFidelity;

}

@property (nonatomic,readonly) int flamesViewFidelity;                       //@synthesize flamesViewFidelity=_flamesViewFidelity - In the implementation block
@property (nonatomic,readonly) BOOL isSystemHostedPresentation;              //@synthesize isSystemHostedPresentation=_isSystemHostedPresentation - In the implementation block
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)flamesViewFidelity;
-(id)initWithFlamesViewFidelity:(int)arg1 isSystemHostedPresentation:(BOOL)arg2 ;
-(BOOL)isSystemHostedPresentation;
@end

