/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:01:44 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CoreImage-Structs.h>
#import <CoreImage/CICodeGenerator.h>

@class NSNumber;

@interface CICode128BarcodeGenerator : CICodeGenerator {

	NSNumber* inputQuietSpace;
	NSNumber* inputBarcodeHeight;

}

@property (nonatomic,copy) NSNumber * inputQuietSpace; 
@property (nonatomic,copy) NSNumber * inputBarcodeHeight; 
+(id)customAttributes;
-(CGImageRef)outputCGImage;
-(NSNumber *)inputQuietSpace;
-(void)setInputQuietSpace:(NSNumber *)arg1 ;
-(NSNumber *)inputBarcodeHeight;
-(void)setInputBarcodeHeight:(NSNumber *)arg1 ;
@end

