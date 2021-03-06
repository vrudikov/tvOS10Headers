/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:06:40 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/TVKit.framework/TVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SFAirDropActivityViewControllerDelegate <NSObject>
@optional
-(void)airDropActivityRequestingSharedItemsWithOptions:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)airDropActivityDoneButtonPressed;
-(void)airDropActivityDidFailToStartTransfer;

@required
-(void)airDropActivityDidSuccessfullyStartTransfer;
-(void)airDropActivityDidSuccessfullyCompleteTransfer;
-(void)airDropActivityRequestingSharedItemsWithCompletionHandler:(/*^block*/id)arg1;

@end

