/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:02:14 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@class NSMutableDictionary, NSMutableSet;

@interface UIAvoidanceCoordinator : NSObject {

	NSMutableDictionary* _blockades;
	NSMutableSet* _clients;
	int _recurseCount;
	CGRect _avoidanceFrame;

}

@property (assign,nonatomic) CGRect avoidanceFrame;              //@synthesize avoidanceFrame=_avoidanceFrame - In the implementation block
-(void)dealloc;
-(id)init;
-(CGRect)avoidanceFrame;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)releaseAll:(id)arg1 withType:(unsigned long long)arg2 ;
-(id)findClientsForBlockade:(id)arg1 ;
-(void)updateClients:(id)arg1 ;
-(id)findNamesForBlockade:(id)arg1 ;
-(id)findBlockadesForName:(id)arg1 ;
-(void)setGroupOfBlockades:(id)arg1 forBlockadeIdentifier:(id)arg2 ;
-(void)addAvoidanceObject:(id)arg1 ;
-(void)removeAvoidanceObject:(id)arg1 ;
-(void)setAvoidanceFrame:(CGRect)arg1 ;
@end
