/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:01:12 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/NSLayoutRelationship.h>

@class NSLayoutPoint, NSString;

@interface NSLayoutPointRelationship : NSObject <NSLayoutRelationship> {

	NSLayoutPoint* _firstLayoutPoint;
	NSLayoutPoint* _secondLayoutPoint;

}

@property (copy,readonly) NSLayoutPoint * firstLayoutPoint;                //@synthesize firstLayoutPoint=_firstLayoutPoint - In the implementation block
@property (copy,readonly) NSLayoutPoint * secondLayoutPoint;               //@synthesize secondLayoutPoint=_secondLayoutPoint - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy,readonly) NSString * identifier; 
@property (copy,readonly) NSString * relationshipDescription; 
-(id)makeChildrenRelationships;
-(NSString *)relationshipDescription;
-(id)initWithFirstLayoutPoint:(id)arg1 secondLayoutPoint:(id)arg2 ;
-(NSLayoutPoint *)firstLayoutPoint;
-(NSLayoutPoint *)secondLayoutPoint;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSString *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

