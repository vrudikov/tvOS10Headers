/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:01:23 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoardServices/FBSWorkspaceEvent.h>

@class FBSUIApplicationLaunchResponse;

@interface FBSUIApplicationLaunchResponseEvent : FBSWorkspaceEvent {

	FBSUIApplicationLaunchResponse* _response;

}

@property (nonatomic,retain) FBSUIApplicationLaunchResponse * response;              //@synthesize response=_response - In the implementation block
-(void)dealloc;
-(FBSUIApplicationLaunchResponse *)response;
-(id)initWithXPCDictionary:(id)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(void)setResponse:(FBSUIApplicationLaunchResponse *)arg1 ;
@end

