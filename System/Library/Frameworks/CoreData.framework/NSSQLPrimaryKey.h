/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:01:28 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSSQLColumn.h>

@class NSString;

@interface NSSQLPrimaryKey : NSSQLColumn {

	NSString* _name;

}
-(id)initWithEntity:(id)arg1 propertyDescription:(id)arg2 ;
-(void)copyValuesForReadOnlyFetch:(id)arg1 ;
-(void)_setName:(id)arg1 ;
-(id)sqlTypeString;
-(void)dealloc;
-(id)name;
@end

