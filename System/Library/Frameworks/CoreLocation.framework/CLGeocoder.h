/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:34 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CLGeocoderInternal;

@interface CLGeocoder : NSObject {

	CLGeocoderInternal* _internal;

}

@property (getter=isGeocoding,nonatomic,readonly) BOOL geocoding; 
-(void)dealloc;
-(id)init;
-(void)reverseGeocodeLocation:(id)arg1 heading:(double)arg2 localResultsOnly:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)reverseGeocodeLocation:(id)arg1 heading:(double)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)isGeocoding;
-(void)_notifyNoResult;
-(void)_ticket:(id)arg1 didReturnError:(id)arg2 partialResultForLocation:(id)arg3 ;
-(void)_ticket:(id)arg1 didReturnGeoMapItems:(id)arg2 ;
-(void)_ensureMainThreadExecutionContextForBlock:(/*^block*/id)arg1 ;
-(void)_ticket:(id)arg1 didReturnError:(id)arg2 ;
-(void)geocodeAddressString:(id)arg1 inRegion:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_notifyCancel;
-(void)_notifyResult:(id)arg1 error:(id)arg2 ;
-(void)reverseGeocodeLocation:(id)arg1 localResultsOnly:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_notifyPartialResult:(id)arg1 ;
-(void)geocodeAddressString:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)geocodeAddressDictionary:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_notifyError:(id)arg1 ;
-(void)_notifyResult:(id)arg1 ;
-(void)reverseGeocodeLocation:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)cancelGeocode;
@end

