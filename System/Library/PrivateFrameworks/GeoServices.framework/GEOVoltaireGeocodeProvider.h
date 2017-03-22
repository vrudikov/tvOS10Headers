/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:16 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GEOGeocodeProvider.h>
#import <libobjc.A.dylib/GEOPBSessionRequesterDelegate.h>

@class GEORequester, NSString;

@interface GEOVoltaireGeocodeProvider : GEOGeocodeProvider <GEOPBSessionRequesterDelegate> {

	GEORequester* _requester;
	BOOL _cancelled;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)providerName;
+(id)batchReverseGeocoderURL;
-(void)cancel;
-(void)dealloc;
-(void)requesterDidFinish:(id)arg1 ;
-(void)requesterDidCancel:(id)arg1 ;
-(void)requester:(id)arg1 didFailWithError:(id)arg2 ;
-(void)batchReverseGeocode:(id)arg1 success:(/*^block*/id)arg2 error:(/*^block*/id)arg3 ;
-(id)newRequester:(id)arg1 ;
-(void)_batchRequesterDidFinish:(id)arg1 ;
@end
