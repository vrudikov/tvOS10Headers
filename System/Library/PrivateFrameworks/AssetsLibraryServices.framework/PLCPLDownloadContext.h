/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:06:01 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSError;

@interface PLCPLDownloadContext : NSObject {

	BOOL _completed;
	NSString* _taskIdentifier;
	NSString* _resourceTypeDescription;
	double _progress;
	NSError* _error;
	double _updateLastQueuedTime;

}

@property (retain) NSString * taskIdentifier;                       //@synthesize taskIdentifier=_taskIdentifier - In the implementation block
@property (retain) NSString * resourceTypeDescription;              //@synthesize resourceTypeDescription=_resourceTypeDescription - In the implementation block
@property (assign) double progress;                                 //@synthesize progress=_progress - In the implementation block
@property (assign) BOOL completed;                                  //@synthesize completed=_completed - In the implementation block
@property (retain) NSError * error;                                 //@synthesize error=_error - In the implementation block
@property (assign) double updateLastQueuedTime;                     //@synthesize updateLastQueuedTime=_updateLastQueuedTime - In the implementation block
-(void)setTaskIdentifier:(NSString *)arg1 ;
-(void)dealloc;
-(id)description;
-(void)setCompleted:(BOOL)arg1 ;
-(void)setProgress:(double)arg1 ;
-(double)progress;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(BOOL)completed;
-(void)setResourceTypeDescription:(NSString *)arg1 ;
-(double)updateLastQueuedTime;
-(void)setUpdateLastQueuedTime:(double)arg1 ;
-(NSString *)taskIdentifier;
-(void)updateFromDownloadStatusUserInfo:(id)arg1 ;
-(NSString *)resourceTypeDescription;
@end

