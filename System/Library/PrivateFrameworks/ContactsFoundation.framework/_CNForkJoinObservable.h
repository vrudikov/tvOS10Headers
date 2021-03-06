/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:40 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsFoundation/CNObservable.h>

@protocol CNForkJoinResultReportingStrategy;
@class NSArray;

@interface _CNForkJoinObservable : CNObservable {

	NSArray* _observables;
	id<CNForkJoinResultReportingStrategy> _resultReportingStrategy;

}
+(id)progressiveForkJoin:(id)arg1 ;
+(id)forkJoin:(id)arg1 ;
-(id)initWithObservables:(id)arg1 reportingStrategy:(id)arg2 ;
-(id)subscribe:(id)arg1 ;
@end

