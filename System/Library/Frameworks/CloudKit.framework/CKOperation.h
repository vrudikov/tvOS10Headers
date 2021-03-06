/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:04:51 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@protocol OS_os_transaction, OS_voucher, OS_os_activity, OS_dispatch_queue, OS_dispatch_source;
@class NSObject, CKContainer, NSString, CKPlaceholderOperation, NSError, CKTimeLogger, NSArray, NSDictionary, CKOperationMetrics, CKOperationInfo;

@interface CKOperation : NSOperation {

	NSObject*<OS_os_transaction> _isExecuting;
	NSObject*<OS_voucher> _clientVoucher;
	NSObject*<OS_os_activity> _osActivity;
	BOOL _allowsCellularAccess;
	BOOL _longLived;
	BOOL _isOutstandingOperation;
	BOOL _isFinished;
	BOOL _isDiscretionary;
	BOOL _preferAnonymousRequests;
	BOOL _allowsBackgroundNetworking;
	CKContainer* _container;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	NSString* _operationID;
	double _timeoutIntervalForRequest;
	double _timeoutIntervalForResource;
	/*^block*/id _longLivedOperationWasPersistedBlock;
	NSObject*<OS_dispatch_source> _timeoutSource;
	long long _usesBackgroundSessionOverride;
	CKPlaceholderOperation* _placeholderOperation;
	NSError* _error;
	NSString* _sectionID;
	NSString* _parentSectionID;
	id _context;
	CKTimeLogger* _timeLogger;
	NSArray* _requestUUIDs;
	NSDictionary* _additionalRequestHTTPHeaders;
	CKOperationMetrics* _metrics;
	NSDictionary* _w3cNavigationTimingByRequestUUID;
	NSDictionary* _responseHTTPHeadersByRequestUUID;
	NSString* _sourceApplicationBundleIdentifier;
	NSString* _sourceApplicationSecondaryIdentifier;
	NSString* _authPromptReason;
	NSString* _deviceIdentifier;
	NSDictionary* _MMCSRequestOptions;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_source> timeoutSource;                  //@synthesize timeoutSource=_timeoutSource - In the implementation block
@property (assign,nonatomic) long long usesBackgroundSessionOverride;                      //@synthesize usesBackgroundSessionOverride=_usesBackgroundSessionOverride - In the implementation block
@property (assign,nonatomic) BOOL isOutstandingOperation;                                  //@synthesize isOutstandingOperation=_isOutstandingOperation - In the implementation block
@property (nonatomic,retain) CKPlaceholderOperation * placeholderOperation;                //@synthesize placeholderOperation=_placeholderOperation - In the implementation block
@property (nonatomic,copy) NSString * operationID;                                         //@synthesize operationID=_operationID - In the implementation block
@property (assign,nonatomic) BOOL isExecuting; 
@property (assign,nonatomic) BOOL isFinished;                                              //@synthesize isFinished=_isFinished - In the implementation block
@property (nonatomic,retain) NSError * error;                                              //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> callbackQueue;                   //@synthesize callbackQueue=_callbackQueue - In the implementation block
@property (nonatomic,retain) NSString * sectionID;                                         //@synthesize sectionID=_sectionID - In the implementation block
@property (nonatomic,readonly) NSString * parentSectionID;                                 //@synthesize parentSectionID=_parentSectionID - In the implementation block
@property (nonatomic,readonly) id context;                                                 //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) CKTimeLogger * timeLogger;                                    //@synthesize timeLogger=_timeLogger - In the implementation block
@property (assign,nonatomic) BOOL isDiscretionary;                                         //@synthesize isDiscretionary=_isDiscretionary - In the implementation block
@property (nonatomic,retain) NSArray * requestUUIDs;                                       //@synthesize requestUUIDs=_requestUUIDs - In the implementation block
@property (nonatomic,retain) NSDictionary * additionalRequestHTTPHeaders;                  //@synthesize additionalRequestHTTPHeaders=_additionalRequestHTTPHeaders - In the implementation block
@property (nonatomic,readonly) CKOperationInfo * operationInfo; 
@property (nonatomic,retain) CKOperationMetrics * metrics;                                 //@synthesize metrics=_metrics - In the implementation block
@property (nonatomic,retain) NSDictionary * w3cNavigationTimingByRequestUUID;              //@synthesize w3cNavigationTimingByRequestUUID=_w3cNavigationTimingByRequestUUID - In the implementation block
@property (nonatomic,retain) NSDictionary * responseHTTPHeadersByRequestUUID;              //@synthesize responseHTTPHeadersByRequestUUID=_responseHTTPHeadersByRequestUUID - In the implementation block
@property (nonatomic,retain) NSString * sourceApplicationBundleIdentifier;                 //@synthesize sourceApplicationBundleIdentifier=_sourceApplicationBundleIdentifier - In the implementation block
@property (nonatomic,retain) NSString * sourceApplicationSecondaryIdentifier;              //@synthesize sourceApplicationSecondaryIdentifier=_sourceApplicationSecondaryIdentifier - In the implementation block
@property (nonatomic,retain) NSString * authPromptReason;                                  //@synthesize authPromptReason=_authPromptReason - In the implementation block
@property (assign,nonatomic) BOOL preferAnonymousRequests;                                 //@synthesize preferAnonymousRequests=_preferAnonymousRequests - In the implementation block
@property (assign,nonatomic) BOOL allowsBackgroundNetworking;                              //@synthesize allowsBackgroundNetworking=_allowsBackgroundNetworking - In the implementation block
@property (nonatomic,retain) NSString * deviceIdentifier;                                  //@synthesize deviceIdentifier=_deviceIdentifier - In the implementation block
@property (nonatomic,retain) NSDictionary * MMCSRequestOptions;                            //@synthesize MMCSRequestOptions=_MMCSRequestOptions - In the implementation block
@property (nonatomic,retain) CKContainer * container;                                      //@synthesize container=_container - In the implementation block
@property (assign,nonatomic) BOOL usesBackgroundSession; 
@property (assign,nonatomic) BOOL allowsCellularAccess;                                    //@synthesize allowsCellularAccess=_allowsCellularAccess - In the implementation block
@property (assign,getter=isLongLived,nonatomic) BOOL longLived;                            //@synthesize longLived=_longLived - In the implementation block
@property (assign,nonatomic) double timeoutIntervalForRequest;                             //@synthesize timeoutIntervalForRequest=_timeoutIntervalForRequest - In the implementation block
@property (assign,nonatomic) double timeoutIntervalForResource;                            //@synthesize timeoutIntervalForResource=_timeoutIntervalForResource - In the implementation block
@property (nonatomic,copy) id longLivedOperationWasPersistedBlock;                         //@synthesize longLivedOperationWasPersistedBlock=_longLivedOperationWasPersistedBlock - In the implementation block
-(double)timeoutIntervalForResource;
-(BOOL)isDiscretionary;
-(BOOL)allowsCellularAccess;
-(double)timeoutIntervalForRequest;
-(void)cancel;
-(void)dealloc;
-(id)init;
-(id)description;
-(id)context;
-(void)_start;
-(CKContainer *)container;
-(void)setContainer:(CKContainer *)arg1 ;
-(void)start;
-(NSString *)sectionID;
-(void)setSectionID:(NSString *)arg1 ;
-(void)main;
-(CKOperationMetrics *)metrics;
-(BOOL)isFinished;
-(BOOL)isExecuting;
-(void)setIsFinished:(BOOL)arg1 ;
-(void)setAllowsCellularAccess:(BOOL)arg1 ;
-(NSObject*<OS_dispatch_queue>)callbackQueue;
-(void)setCallbackQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(NSString *)deviceIdentifier;
-(void)setDeviceIdentifier:(NSString *)arg1 ;
-(id)CKPropertiesDescription;
-(void)fillOutOperationInfo:(id)arg1 ;
-(void)fillFromOperationInfo:(id)arg1 ;
-(BOOL)hasCKOperationCallbacksSet;
-(BOOL)CKOperationShouldRun:(id*)arg1 ;
-(CKOperationInfo *)operationInfo;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(id)activityCreate;
-(void)performCKOperation;
-(void)_handleProgressCallback:(id)arg1 ;
-(NSString *)sourceApplicationSecondaryIdentifier;
-(void)setSourceApplicationSecondaryIdentifier:(NSString *)arg1 ;
-(Class)operationClass;
-(void)_handleCompletionCallback:(id)arg1 ;
-(BOOL)isOutstandingOperation;
-(BOOL)isLongLived;
-(id)osActivity;
-(void)_handleCheckpointCallback:(id)arg1 ;
-(void)setPlaceholderOperation:(CKPlaceholderOperation *)arg1 ;
-(BOOL)usesBackgroundSession;
-(CKPlaceholderOperation *)placeholderOperation;
-(void)setOperationID:(NSString *)arg1 ;
-(NSString *)authPromptReason;
-(void)setAuthPromptReason:(NSString *)arg1 ;
-(BOOL)preferAnonymousRequests;
-(void)setPreferAnonymousRequests:(BOOL)arg1 ;
-(BOOL)allowsBackgroundNetworking;
-(void)setAllowsBackgroundNetworking:(BOOL)arg1 ;
-(NSDictionary *)additionalRequestHTTPHeaders;
-(void)setAdditionalRequestHTTPHeaders:(NSDictionary *)arg1 ;
-(void)setIsOutstandingOperation:(BOOL)arg1 ;
-(NSDictionary *)MMCSRequestOptions;
-(void)setMMCSRequestOptions:(NSDictionary *)arg1 ;
-(void)setLongLived:(BOOL)arg1 ;
-(NSString *)parentSectionID;
-(Class)operationInfoClass;
-(NSObject*<OS_dispatch_source>)timeoutSource;
-(void)setTimeoutSource:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)_uninstallTimeoutSource;
-(void)_installTimeoutSource;
-(NSArray *)requestUUIDs;
-(void)setRequestUUIDs:(NSArray *)arg1 ;
-(NSDictionary *)w3cNavigationTimingByRequestUUID;
-(void)setW3cNavigationTimingByRequestUUID:(NSDictionary *)arg1 ;
-(NSDictionary *)responseHTTPHeadersByRequestUUID;
-(void)setResponseHTTPHeadersByRequestUUID:(NSDictionary *)arg1 ;
-(long long)usesBackgroundSessionOverride;
-(void)setUsesBackgroundSessionOverride:(long long)arg1 ;
-(id)longLivedOperationWasPersistedBlock;
-(void)processOperationResult:(id)arg1 ;
-(void)_finishInternalOnCallbackQueueWithError:(id)arg1 ;
-(void)setUsesBackgroundSession:(BOOL)arg1 ;
-(void)setLongLivedOperationWasPersistedBlock:(id)arg1 ;
-(CKTimeLogger *)timeLogger;
-(void)setTimeLogger:(CKTimeLogger *)arg1 ;
-(void)setIsDiscretionary:(BOOL)arg1 ;
-(void)setIsExecuting:(BOOL)arg1 ;
-(NSString *)sourceApplicationBundleIdentifier;
-(void)setSourceApplicationBundleIdentifier:(NSString *)arg1 ;
-(void)setTimeoutIntervalForRequest:(double)arg1 ;
-(void)setTimeoutIntervalForResource:(double)arg1 ;
-(id)daemon;
-(void)finishWithError:(id)arg1 ;
-(BOOL)isConcurrent;
-(void)setMetrics:(CKOperationMetrics *)arg1 ;
-(NSString *)operationID;
@end

