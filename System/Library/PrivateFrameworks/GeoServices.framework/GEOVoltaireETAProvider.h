/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:20 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOETAProvider.h>
#import <libobjc.A.dylib/GEOPBSessionRequesterDelegate.h>

@class GEORequester, NSString;

@interface GEOVoltaireETAProvider : GEOETAProvider <GEOPBSessionRequesterDelegate> {

	GEORequester* _requester;
	/*^block*/id _errorHandler;
	/*^block*/id _finishedHandler;
	/*^block*/id _willSendRequestHandler;
	/*^block*/id _simpleETARequestFinishedHandler;
	BOOL _cancelled;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)startRequest:(id)arg1 finished:(/*^block*/id)arg2 error:(/*^block*/id)arg3 ;
-(void)cancelRequest;
-(void)requesterDidFinish:(id)arg1 ;
-(void)requesterDidCancel:(id)arg1 ;
-(void)requester:(id)arg1 didFailWithError:(id)arg2 ;
-(void)requesterWillSendRequestForEstablishedConnection:(id)arg1 callback:(/*^block*/id)arg2 ;
-(void)startRequest:(id)arg1 connectionProperties:(const SCD_Struct_GE103*)arg2 willSendRequest:(/*^block*/id)arg3 finished:(/*^block*/id)arg4 error:(/*^block*/id)arg5 ;
-(void)updateRequest:(id)arg1 finished:(/*^block*/id)arg2 error:(/*^block*/id)arg3 ;
-(void)startSimpleETARequest:(id)arg1 finished:(/*^block*/id)arg2 error:(/*^block*/id)arg3 ;
@end

