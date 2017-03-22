/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:02 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BBSectionIdentity.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class BBSectionInfo, NSString;

@interface BBParentSectionDataProviderFactory : NSObject <BBSectionIdentity, NSSecureCoding> {

	BBSectionInfo* _sectionInfo;
	NSString* _universalSectionIdentifier;

}

@property (nonatomic,copy) BBSectionInfo * sectionInfo;                        //@synthesize sectionInfo=_sectionInfo - In the implementation block
@property (nonatomic,copy) NSString * universalSectionIdentifier;              //@synthesize universalSectionIdentifier=_universalSectionIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)factoryFromSectionInfo:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BBSectionInfo *)sectionInfo;
-(void)setSectionInfo:(BBSectionInfo *)arg1 ;
-(void)setUniversalSectionIdentifier:(NSString *)arg1 ;
-(id)initWithSectionInfo:(id)arg1 ;
-(id)dataProviders;
-(id)sectionIdentifier;
-(NSString *)universalSectionIdentifier;
-(id)sectionDisplayName;
-(id)sectionIcon;
@end
