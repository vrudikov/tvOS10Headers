/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:42 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/Frameworks/MediaMiningKit.framework/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface CLSInformant : NSObject {

	NSString* _uuid;

}

@property (nonatomic,copy,readonly) NSString * uuid;              //@synthesize uuid=_uuid - In the implementation block
+(id)familyIdentifier;
+(id)identifier;
+(id)classIdentifier;
+(id)informantDependenciesIdentifiers;
+(id)supportedOutputClueKeys;
-(id)init;
-(NSString *)uuid;
-(id)uniqueIdentifier;
-(id)gatherCluesOperationForInvestigation:(id)arg1 ;
-(id)_gatherCluesForInvestigation:(id)arg1 ;
@end

