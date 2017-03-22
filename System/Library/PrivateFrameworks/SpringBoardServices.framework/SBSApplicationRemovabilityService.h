/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:01:24 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardServices/SBSAbstractApplicationService.h>

@interface SBSApplicationRemovabilityService : SBSAbstractApplicationService
-(void)fetchRemovabilityForBundleIdentifier:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)setRemovalAllowed:(BOOL)arg1 forBundleIdentifier:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)setRemovalAllowed:(BOOL)arg1 forBundleIdentifier:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
@end
