/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:46 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface PHAJobWorkInfo : NSObject {

	int _workerFlags;
	NSString* _assetLocalIdentifier;

}

@property (nonatomic,copy,readonly) NSString * assetLocalIdentifier;              //@synthesize assetLocalIdentifier=_assetLocalIdentifier - In the implementation block
@property (assign,nonatomic) int workerFlags;                                     //@synthesize workerFlags=_workerFlags - In the implementation block
-(void)setWorkerFlags:(int)arg1 ;
-(int)workerFlags;
-(NSString *)assetLocalIdentifier;
-(id)initWithAssetLocalIdentifier:(id)arg1 workerFlags:(int)arg2 ;
@end

