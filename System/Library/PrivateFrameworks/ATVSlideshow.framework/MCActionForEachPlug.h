/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:06:37 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVSlideshow/MCAction.h>

@class MCAction, NSString;

@interface MCActionForEachPlug : MCAction {

	MCAction* _action;
	NSString* _prefix;

}

@property (copy) NSString * prefix;                //@synthesize prefix=_prefix - In the implementation block
@property (retain) MCAction * action;              //@synthesize action=_action - In the implementation block
+(id)forEachPlugActionForTargetPlugObjectID:(id)arg1 withAction:(id)arg2 andPrefix:(id)arg3 ;
-(id)description;
-(MCAction *)action;
-(void)setAction:(MCAction *)arg1 ;
-(NSString *)prefix;
-(void)setPrefix:(NSString *)arg1 ;
-(void)demolish;
-(id)imprint;
-(void)_copySelfToSnapshot:(id)arg1 ;
-(id)initWithImprint:(id)arg1 ;
@end

