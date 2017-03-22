/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:06:29 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PLPhotoEditExportProperties : NSObject {

	long long _baseEXIFOrientation;
	double _baseDuration;
	unsigned long long _imageWidth;
	unsigned long long _imageHeight;

}

@property (nonatomic,readonly) long long baseEXIFOrientation;               //@synthesize baseEXIFOrientation=_baseEXIFOrientation - In the implementation block
@property (nonatomic,readonly) double baseDuration;                         //@synthesize baseDuration=_baseDuration - In the implementation block
@property (nonatomic,readonly) unsigned long long imageWidth;               //@synthesize imageWidth=_imageWidth - In the implementation block
@property (nonatomic,readonly) unsigned long long imageHeight;              //@synthesize imageHeight=_imageHeight - In the implementation block
+(id)exportPropertiesWithImageWidth:(unsigned long long)arg1 imageHeight:(unsigned long long)arg2 exifOrientation:(long long)arg3 duration:(double)arg4 ;
+(id)exportPropertiesWithImageWidth:(unsigned long long)arg1 imageHeight:(unsigned long long)arg2 exifOrientation:(long long)arg3 ;
-(unsigned long long)imageWidth;
-(unsigned long long)imageHeight;
-(long long)baseEXIFOrientation;
-(double)baseDuration;
@end
