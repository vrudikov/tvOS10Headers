/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:04:30 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CPInterval : NSObject {

	double left;
	double right;

}
-(BOOL)contains:(id)arg1 ;
-(double)left;
-(double)right;
-(BOOL)intersects:(id)arg1 ;
-(id)initLeft:(double)arg1 right:(double)arg2 ;
-(void)add:(id)arg1 ;
@end
