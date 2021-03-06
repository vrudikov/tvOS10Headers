/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:36 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/IKJSObject.h>
#import <TVMLKit/TVJSSKProductsResponse.h>
@class NSArray;


@protocol TVJSSKProductsResponse <JSExport>
@property (nonatomic,readonly) NSArray * products; 
@property (nonatomic,readonly) NSArray * invalidProductIdentifiers; 
@required
-(NSArray *)products;
-(NSArray *)invalidProductIdentifiers;

@end


@class NSArray, SKProductsResponse;

@interface TVJSSKProductsResponse : IKJSObject <TVJSSKProductsResponse> {

	SKProductsResponse* _skResponse;

}

@property (nonatomic,readonly) SKProductsResponse * wrappedResponse; 
@property (nonatomic,readonly) NSArray * products; 
@property (nonatomic,readonly) NSArray * invalidProductIdentifiers; 
-(NSArray *)products;
-(NSArray *)invalidProductIdentifiers;
-(id)initWithResponse:(id)arg1 appContext:(id)arg2 ;
-(SKProductsResponse *)wrappedResponse;
@end

