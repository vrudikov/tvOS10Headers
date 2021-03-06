/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:30 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSDictionary;


@protocol MiroBlueprintTitleStyleProtocol <NSObject>
@property (nonatomic,readonly) NSString * effectID; 
@property (nonatomic,readonly) NSString * fontName; 
@property (nonatomic,readonly) NSDictionary * parametersDictionary; 
@property (nonatomic,readonly) BOOL titleRequestsColorAnalysis; 
@required
-(NSString *)fontName;
-(NSString *)effectID;
-(NSDictionary *)parametersDictionary;
-(BOOL)titleRequestsColorAnalysis;

@end

