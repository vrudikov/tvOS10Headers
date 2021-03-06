/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:20 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/CoreInterest.framework/CoreInterest
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface IFDataStoreQuery : NSObject {

	NSString* _query;
	/*^block*/id _preparation;
	/*^block*/id _step;
	/*^block*/id _error;

}

@property (nonatomic,copy) NSString * query;              //@synthesize query=_query - In the implementation block
@property (nonatomic,copy) id preparation;                //@synthesize preparation=_preparation - In the implementation block
@property (nonatomic,copy) id step;                       //@synthesize step=_step - In the implementation block
@property (nonatomic,copy) id error;                      //@synthesize error=_error - In the implementation block
+(id)query;
-(NSString *)query;
-(void)setQuery:(NSString *)arg1 ;
-(id)step;
-(void)setStep:(id)arg1 ;
-(id)error;
-(void)setError:(id)arg1 ;
-(void)setPreparation:(id)arg1 ;
-(id)preparation;
@end

