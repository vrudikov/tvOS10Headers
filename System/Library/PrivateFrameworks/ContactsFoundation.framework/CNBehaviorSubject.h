/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:38 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsFoundation/CNObservable.h>
#import <libobjc.A.dylib/CNObserver.h>

@protocol CNSchedulerProvider, CNScheduler;
@class NSMutableArray, CNObservableEvent, CNObservableContractEnforcement, NSString;

@interface CNBehaviorSubject : CNObservable <CNObserver> {

	NSMutableArray* _observers;
	CNObservableEvent* _mostRecentEvent;
	id<CNSchedulerProvider> _schedulerProvider;
	id<CNScheduler> _resourceLock;
	CNObservableContractEnforcement* _enforcement;

}

@property (nonatomic,retain) NSMutableArray * observers;                                   //@synthesize observers=_observers - In the implementation block
@property (nonatomic,retain) CNObservableEvent * mostRecentEvent;                          //@synthesize mostRecentEvent=_mostRecentEvent - In the implementation block
@property (nonatomic,readonly) id<CNSchedulerProvider> schedulerProvider;                  //@synthesize schedulerProvider=_schedulerProvider - In the implementation block
@property (nonatomic,readonly) id<CNScheduler> resourceLock;                               //@synthesize resourceLock=_resourceLock - In the implementation block
@property (nonatomic,readonly) CNObservableContractEnforcement * enforcement;              //@synthesize enforcement=_enforcement - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setObservers:(NSMutableArray *)arg1 ;
-(NSMutableArray *)observers;
-(void)performWithResourceLock:(/*^block*/id)arg1 ;
-(CNObservableEvent *)mostRecentEvent;
-(id)resultWithResourceLock:(/*^block*/id)arg1 ;
-(CNObservableContractEnforcement *)enforcement;
-(void)setMostRecentEvent:(CNObservableEvent *)arg1 ;
-(id)initWithSeed:(id)arg1 schedulerProvider:(id)arg2 ;
-(id<CNSchedulerProvider>)schedulerProvider;
-(id<CNScheduler>)resourceLock;
-(void)observerDidFailWithError:(id)arg1 ;
-(void)observerDidComplete;
-(id)subscribe:(id)arg1 ;
-(void)observerDidReceiveResult:(id)arg1 ;
-(id)_addObserver:(id)arg1 ;
-(void)_removeObserver:(id)arg1 ;
@end

