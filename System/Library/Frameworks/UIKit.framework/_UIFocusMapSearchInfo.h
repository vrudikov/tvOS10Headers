/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:02:37 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSArray;

@interface _UIFocusMapSearchInfo : NSObject {

	BOOL _didFindFocusBlockingBoundary;
	NSMutableArray* _mutableSnapshots;
	NSMutableArray* _mutableDestinationRegions;

}

@property (nonatomic,retain) NSMutableArray * mutableSnapshots;                       //@synthesize mutableSnapshots=_mutableSnapshots - In the implementation block
@property (nonatomic,retain) NSMutableArray * mutableDestinationRegions;              //@synthesize mutableDestinationRegions=_mutableDestinationRegions - In the implementation block
@property (assign,nonatomic) BOOL didFindFocusBlockingBoundary;                       //@synthesize didFindFocusBlockingBoundary=_didFindFocusBlockingBoundary - In the implementation block
@property (nonatomic,copy,readonly) NSArray * snapshots; 
@property (nonatomic,copy,readonly) NSArray * destinationRegions; 
-(id)init;
-(BOOL)didFindFocusBlockingBoundary;
-(NSArray *)destinationRegions;
-(void)addSnapshot:(id)arg1 ;
-(void)addDestinationRegion:(id)arg1 ;
-(void)setDidFindFocusBlockingBoundary:(BOOL)arg1 ;
-(NSMutableArray *)mutableSnapshots;
-(NSMutableArray *)mutableDestinationRegions;
-(NSArray *)snapshots;
-(void)setMutableSnapshots:(NSMutableArray *)arg1 ;
-(void)setMutableDestinationRegions:(NSMutableArray *)arg1 ;
@end

