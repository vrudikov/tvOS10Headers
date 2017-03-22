/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:06:42 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/TVKit.framework/TVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVKit/TVPlaybackProgressAnimation.h>

@protocol TVConstantRatePlaybackProgressAnimationDelegate;
@interface TVConstantRatePlaybackProgressAnimation : TVPlaybackProgressAnimation {

	id<TVConstantRatePlaybackProgressAnimationDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<TVConstantRatePlaybackProgressAnimationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setDelegate:(id<TVConstantRatePlaybackProgressAnimationDelegate>)arg1 ;
-(id<TVConstantRatePlaybackProgressAnimationDelegate>)delegate;
-(BOOL)isFinished;
-(double)currentPlaybackTime;
@end
