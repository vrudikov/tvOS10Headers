/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:06:12 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/LSApplicationWorkspaceObserverProtocol.h>

@protocol OS_dispatch_queue, OS_dispatch_group;
@class LSApplicationWorkspace, NSObject, NSHashTable, NSMutableDictionary, NSMutableArray, NSString;

@interface FBApplicationLibrary : NSObject <LSApplicationWorkspaceObserverProtocol> {

	LSApplicationWorkspace* _applicationWorkspace;
	NSObject*<OS_dispatch_queue> _observerQueue;
	NSHashTable* _observerQueue_observers;
	NSObject*<OS_dispatch_queue> _workQueue;
	BOOL _workQueue_usingNetwork;
	NSMutableDictionary* _workQueue_installedApplicationsByBundleID;
	NSMutableDictionary* _workQueue_placeholdersByBundleID;
	unsigned long long _workQueue_synchronizationActionCount;
	NSMutableArray* _workQueue_pendingSynchronizationExecutionBlocks;
	NSObject*<OS_dispatch_queue> _callOutQueue;
	NSObject*<OS_dispatch_group> _preInstallGroup;
	Class _appInfoClass;
	BOOL _initializing;
	BOOL _usingNetwork;

}

@property (getter=isUsingNetwork,nonatomic,readonly) BOOL usingNetwork;              //@synthesize usingNetwork=_usingNetwork - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(void)setBundleExtendedInfoGenerationHandler:(/*^block*/id)arg1 ;
-(void)dealloc;
-(id)init;
-(NSString *)description;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(id)allInstalledApplications;
-(void)_load;
-(BOOL)isUsingNetwork;
-(id)installedApplicationWithBundleIdentifier:(id)arg1 ;
-(id)_initWithAppInfoClass:(Class)arg1 ;
-(void)uninstallApplication:(id)arg1 withOptions:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_workQueue_removeInstalledApplicationFromModelForBundleID:(id)arg1 forInstall:(BOOL)arg2 withReason:(id)arg3 ;
-(void)_sendToObservers:(id)arg1 didRemoveApplications:(id)arg2 ;
-(void)_workQueue_executeInstallSynchronizationBlocksIfAppropriate;
-(void)_dispatchToObservers:(id)arg1 synchronously:(BOOL)arg2 preBlock:(/*^block*/id)arg3 block:(/*^block*/id)arg4 ;
-(void)_anyQueue_generateExtendedInfoForBundleInfo:(id)arg1 ;
-(id)_workQueue_placeholdersForProxies:(id)arg1 updateExistingIfNecessary:(BOOL)arg2 createIfNecessary:(BOOL)arg3 createReason:(id)arg4 createdPlaceholders:(const id*)arg5 existingPlaceholders:(const id*)arg6 unmappedProxies:(const id*)arg7 ;
-(id)_workQueue_applicationsForProxies:(id)arg1 createIfNecessary:(BOOL)arg2 createReason:(id)arg3 createdPlaceholders:(const id*)arg4 existingApplications:(const id*)arg5 unmappedProxies:(const id*)arg6 ;
-(id)_workQueue_placeholderForProxy:(id)arg1 updateExistingIfNecessary:(BOOL)arg2 createIfNecessary:(BOOL)arg3 createReason:(id)arg4 wasCreated:(BOOL*)arg5 ;
-(id)_workQueue_applicationInfoForProxy:(id)arg1 createIfNecessary:(BOOL)arg2 createReason:(id)arg3 wasCreated:(BOOL*)arg4 ;
-(void)_workQueue_notePlaceholdersModifiedSignificantly:(id)arg1 ;
-(void)_sendToObservers:(id)arg1 didAddPlaceholders:(id)arg2 ;
-(void)_sendToObservers:(id)arg1 didDemoteApplications:(id)arg2 ;
-(void)_workQueue_incrementSynchronizationActionCount;
-(void)_workQueue_removePlaceholderFromModelForBundleID:(id)arg1 forInstall:(BOOL)arg2 withReason:(id)arg3 ;
-(BOOL)_workQueue_applicationHasBeenModified:(id)arg1 applicationProxy:(id)arg2 ;
-(void)_sendToObservers:(id)arg1 didAddApplications:(id)arg2 ;
-(void)_sendToObservers:(id)arg1 didReplaceApplications:(id)arg2 withApplications:(id)arg3 ;
-(void)_workQueue_decrementSynchronizationActionCount;
-(void)_sendToObservers:(id)arg1 didCancelPlaceholders:(id)arg2 ;
-(void)_sendToObservers:(id)arg1 networkUsageDidChange:(id)arg2 usingNetwork:(BOOL)arg3 ;
-(void)installedApplicationWithBundleIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)allPlaceholders;
-(id)placeholderWithBundleIdentifier:(id)arg1 ;
-(void)uninstallApplication:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)executeOrPendInstallSynchronizationBlock:(/*^block*/id)arg1 ;
-(void)applicationInstallsDidStart:(id)arg1 ;
-(void)applicationInstallsDidChange:(id)arg1 ;
-(void)applicationInstallsDidUpdateIcon:(id)arg1 ;
-(void)applicationsWillInstall:(id)arg1 ;
-(void)applicationsDidInstall:(id)arg1 ;
-(void)applicationsDidFailToInstall:(id)arg1 ;
-(void)applicationsWillUninstall:(id)arg1 ;
-(void)applicationsDidUninstall:(id)arg1 ;
-(void)applicationsDidFailToUninstall:(id)arg1 ;
-(void)applicationInstallsArePrioritized:(id)arg1 arePaused:(id)arg2 ;
-(void)applicationInstallsDidPause:(id)arg1 ;
-(void)applicationInstallsDidResume:(id)arg1 ;
-(void)applicationInstallsDidCancel:(id)arg1 ;
-(void)applicationInstallsDidPrioritize:(id)arg1 ;
-(void)networkUsageChanged:(BOOL)arg1 ;
-(id)_observers;
@end

