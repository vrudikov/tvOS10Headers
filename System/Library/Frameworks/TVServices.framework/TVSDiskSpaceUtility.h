/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:53 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/TVServices.framework/TVServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface TVSDiskSpaceUtility : NSObject
+(void)setMode:(long long)arg1 ;
+(unsigned long long)mediaCapacity;
+(id)_volumeSizeStringForSize:(unsigned long long)arg1 ;
+(unsigned long long)mediaFreeSpace;
+(id)mediaCapacityString;
+(id)mediaFreeSpaceString;
+(unsigned long long)totalApplicationUsage;
@end
