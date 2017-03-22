/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:12 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, AVAudioRoute;

@interface AVSpeakerManager : NSObject {

	BOOL _fetchingRoutes;
	BOOL _alternateRoutesAvailable;
	NSArray* _speakerRoutes;
	AVAudioRoute* _defaultRoute;
	AVAudioRoute* _selectedRoute;

}

@property (nonatomic,copy) NSArray * speakerRoutes;                      //@synthesize speakerRoutes=_speakerRoutes - In the implementation block
@property (nonatomic,retain) AVAudioRoute * defaultRoute;                //@synthesize defaultRoute=_defaultRoute - In the implementation block
@property (nonatomic,retain) AVAudioRoute * selectedRoute;               //@synthesize selectedRoute=_selectedRoute - In the implementation block
@property (assign,nonatomic) BOOL alternateRoutesAvailable;              //@synthesize alternateRoutesAvailable=_alternateRoutesAvailable - In the implementation block
-(void)dealloc;
-(id)init;
-(void)_serverDied:(id)arg1 ;
-(void)_updateAudioRoutesFromRouteDescriptions:(id)arg1 ;
-(AVAudioRoute *)selectedRoute;
-(void)setAlternateRoutesAvailable:(BOOL)arg1 ;
-(AVAudioRoute *)defaultRoute;
-(BOOL)selectRoute:(id)arg1 withPassword:(id)arg2 ;
-(BOOL)alternateRoutesAvailable;
-(void)deregisterForNotifications;
-(void)fetchAvailableRoutes;
-(void)_pickableRoutesDidChange:(id)arg1 ;
-(NSArray *)speakerRoutes;
-(void)setSpeakerRoutes:(NSArray *)arg1 ;
-(void)setDefaultRoute:(AVAudioRoute *)arg1 ;
-(void)setSelectedRoute:(AVAudioRoute *)arg1 ;
-(void)registerForNotifications;
@end
