/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:29 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, MiroMemory, MiroMovieDisplayContainerViewController, UIImageView, NSMutableArray, NSArray, UIImage;

@interface MiroMemoryEditorPosterController : NSObject {

	NSObject*<OS_dispatch_queue> _serialTaskQueue;
	MiroMemory* _memory;
	MiroMovieDisplayContainerViewController* _movieDisplayController;
	UIImageView* _playerPoster;
	NSMutableArray* _stylePosters;
	NSArray* _titleStyles;
	UIImage* _posterBackgroundImage;

}

@property (nonatomic,retain) UIImage * posterBackgroundImage;                                                      //@synthesize posterBackgroundImage=_posterBackgroundImage - In the implementation block
@property (nonatomic,retain) NSArray * titleStyles;                                                                //@synthesize titleStyles=_titleStyles - In the implementation block
@property (nonatomic,retain) NSMutableArray * stylePosters;                                                        //@synthesize stylePosters=_stylePosters - In the implementation block
@property (nonatomic,retain) UIImageView * playerPoster;                                                           //@synthesize playerPoster=_playerPoster - In the implementation block
@property (nonatomic,retain) MiroMemory * memory;                                                                  //@synthesize memory=_memory - In the implementation block
@property (assign,nonatomic,__weak) MiroMovieDisplayContainerViewController * movieDisplayController;              //@synthesize movieDisplayController=_movieDisplayController - In the implementation block
-(MiroMemory *)memory;
-(void)setMemory:(MiroMemory *)arg1 ;
-(id)initWithMemory:(id)arg1 ;
-(NSArray *)titleStyles;
-(NSMutableArray *)stylePosters;
-(void)regeneratePlayerPoster;
-(MiroMovieDisplayContainerViewController *)movieDisplayController;
-(void)setMovieDisplayController:(MiroMovieDisplayContainerViewController *)arg1 ;
-(UIImageView *)playerPoster;
-(void)regenerateAllPosters;
-(void)_regeneratePlayerPosterWithCompletionHandler:(/*^block*/id)arg1 ;
-(UIImage *)posterBackgroundImage;
-(void)setPosterBackgroundImage:(UIImage *)arg1 ;
-(void)setPlayerPoster:(UIImageView *)arg1 ;
-(void)setStylePosters:(NSMutableArray *)arg1 ;
-(void)setTitleStyles:(NSArray *)arg1 ;
@end
