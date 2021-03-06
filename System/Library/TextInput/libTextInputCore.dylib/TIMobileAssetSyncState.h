/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:05 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/TextInput/libTextInputCore.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate, NSString;

@interface TIMobileAssetSyncState : NSObject {

	BOOL _loadedState;
	long long _status;
	NSDate* _date;
	NSString* _buildVersion;
	long long _attemptCount;

}

@property (assign,nonatomic) long long status;                    //@synthesize status=_status - In the implementation block
@property (nonatomic,copy) NSDate * date;                         //@synthesize date=_date - In the implementation block
@property (nonatomic,copy) NSString * buildVersion;               //@synthesize buildVersion=_buildVersion - In the implementation block
@property (assign,nonatomic) long long attemptCount;              //@synthesize attemptCount=_attemptCount - In the implementation block
+(id)buildVersionString;
-(void)setBuildVersion:(NSString *)arg1 ;
-(void)dealloc;
-(NSDate *)date;
-(NSString *)buildVersion;
-(void)setDate:(NSDate *)arg1 ;
-(long long)status;
-(void)setStatus:(long long)arg1 ;
-(void)updateState;
-(void)loadStateIfNecessary;
-(BOOL)shouldSyncToRemoteMetadata;
-(void)didSyncToRemoteMetadataWithError:(id)arg1 ;
-(id)initWithDate:(id)arg1 buildVersion:(id)arg2 status:(long long)arg3 attemptCount:(long long)arg4 ;
-(void)saveState;
-(long long)attemptCount;
-(void)setAttemptCount:(long long)arg1 ;
@end

