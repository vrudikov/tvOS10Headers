/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:02:31 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PKPrinter;

@interface UIPrintInfoRequest : NSObject {

	PKPrinter* _printer;
	int _requestState;
	/*^block*/id _completionHandler;

}

@property (assign,nonatomic) int requestState;                //@synthesize requestState=_requestState - In the implementation block
@property (nonatomic,copy) id completionHandler;              //@synthesize completionHandler=_completionHandler - In the implementation block
+(id)requestInfoForPrinter:(id)arg1 ;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(void)requestPrintInfo;
-(int)requestState;
-(void)setRequestState:(int)arg1 ;
@end
