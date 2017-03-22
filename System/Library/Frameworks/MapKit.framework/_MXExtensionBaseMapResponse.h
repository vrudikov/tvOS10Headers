/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:06:58 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/_MXExtensionObject.h>

@class NSSet;

@interface _MXExtensionBaseMapResponse : _MXExtensionObject {

	NSSet* _namedImages;
	NSSet* _features;

}

@property (nonatomic,copy) NSSet * namedImages;              //@synthesize namedImages=_namedImages - In the implementation block
@property (nonatomic,copy) NSSet * features;                 //@synthesize features=_features - In the implementation block
+(BOOL)supportsSecureCoding;
+(void)load;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSSet *)namedImages;
-(void)setNamedImages:(NSSet *)arg1 ;
-(NSSet *)features;
-(void)setFeatures:(NSSet *)arg1 ;
@end
