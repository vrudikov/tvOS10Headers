/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:52 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchFoundation/SearchFoundation-Structs.h>
#import <SearchFoundation/SFFeedback.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray;

@interface SFRankingFeedback : SFFeedback <NSCopying> {

	double _blendingDuration;
	NSArray* _sections;

}

@property (assign,nonatomic) double blendingDuration;              //@synthesize blendingDuration=_blendingDuration - In the implementation block
@property (nonatomic,copy) NSArray * sections;                     //@synthesize sections=_sections - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setSections:(NSArray *)arg1 ;
-(NSArray *)sections;
-(id)initWithSections:(id)arg1 blendingDuration:(double)arg2 ;
-(double)blendingDuration;
-(void)setBlendingDuration:(double)arg1 ;
@end
