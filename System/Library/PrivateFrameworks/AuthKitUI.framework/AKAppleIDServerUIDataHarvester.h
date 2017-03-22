/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:16 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/AuthKitUI.framework/AuthKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSDictionary;

@interface AKAppleIDServerUIDataHarvester : NSObject {

	NSMutableDictionary* _harvestedData;

}

@property (nonatomic,readonly) NSDictionary * harvestedData;              //@synthesize harvestedData=_harvestedData - In the implementation block
-(id)init;
-(id)_valueForTextFieldWithID:(id)arg1 inObjectModel:(id)arg2 ;
-(void)_harvestIDMSRecoveryInfoFromObjectModel:(id)arg1 ;
-(void)_harvestIDMSRecoveryHeadersInfo:(id)arg1 ;
-(void)harvestDataFromServerUIObjectModel:(id)arg1 ;
-(void)harvestDataFromServerHTTPResponse:(id)arg1 ;
-(NSDictionary *)harvestedData;
@end
