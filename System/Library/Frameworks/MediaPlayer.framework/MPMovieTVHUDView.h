/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:24 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <UIKit/UIView.h>

@class UIImageView, MPAVController;

@interface MPMovieTVHUDView : UIView {

	long long _currentState;
	UIImageView* _playbackMode;
	MPAVController* _player;

}

@property (nonatomic,retain) MPAVController * player;              //@synthesize player=_player - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)animationDidStop:(id)arg1 ;
-(void)_playbackStateDidChangeNotification:(id)arg1 ;
-(void)_fadeOut;
-(void)_changeState;
-(void)setPlayer:(MPAVController *)arg1 ;
-(MPAVController *)player;
@end

