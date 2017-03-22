/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:11 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSManagedObjectContext, NSPersistentContainer;

@interface VSPersistentContainer : NSObject {

	long long _modelVersion;
	NSManagedObjectContext* _viewContext;
	NSPersistentContainer* _persistentContainer;

}

@property (nonatomic,retain) NSManagedObjectContext * viewContext;                     //@synthesize viewContext=_viewContext - In the implementation block
@property (nonatomic,retain) NSPersistentContainer * persistentContainer;              //@synthesize persistentContainer=_persistentContainer - In the implementation block
@property (nonatomic,readonly) long long modelVersion;                                 //@synthesize modelVersion=_modelVersion - In the implementation block
+(id)defaultDirectoryURL;
-(NSManagedObjectContext *)viewContext;
-(id)init;
-(void)performBlock:(/*^block*/id)arg1 ;
-(long long)modelVersion;
-(id)initWithModelVersion:(long long)arg1 ;
-(id)insertDeveloperIdentityProviderInContext:(id)arg1 ;
-(id)developerIdentityProviderFetchRequest;
-(void)setViewContext:(NSManagedObjectContext *)arg1 ;
-(NSPersistentContainer *)persistentContainer;
-(void)setPersistentContainer:(NSPersistentContainer *)arg1 ;
@end
