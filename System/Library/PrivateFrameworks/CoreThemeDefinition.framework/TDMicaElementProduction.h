/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:08:17 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreThemeDefinition/TDElementProduction.h>
#import <libobjc.A.dylib/TDElementAttributes.h>

@class TDMicaAsset;

@interface TDMicaElementProduction : TDElementProduction <TDElementAttributes>

@property (nonatomic,retain) TDMicaAsset * asset; 
-(id)relativePath;
-(void)dealloc;
-(void)copyAttributesInto:(id)arg1 ;
-(id)copyDataFromAttributes;
-(void)setAttributesFromCopyData:(id)arg1 ;
-(id)baseKeySpec;
-(id)dataFromAttributes;
-(void)setAttributesFromData:(id)arg1 ;
-(id)associatedFileURLWithDocument:(id)arg1 ;
-(BOOL)generateRenditionsWithEntityName:(id)arg1 document:(id)arg2 errorDescription:(id*)arg3 ;
-(void)deleteRenditionsInDocument:(id)arg1 shouldDeleteAssetFiles:(BOOL)arg2 ;
@end
