/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:47 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosPlayer/PhotosPlayer-Structs.h>
#import <Foundation/NSOperation.h>

@class AVAsset, AVVideoComposition;

@interface ISCrossfadeChefOperation : NSOperation {

	int _photoEXIFOrientation;
	float _minimumFrameInterval;
	AVAsset* _videoAsset;
	double _crossfadeDuration;
	double _sourceStartTime;
	id _stillPhoto;
	AVVideoComposition* _videoComposition;
	/*^block*/id _resultHandler;
	CGSize _targetSize;

}

@property (nonatomic,readonly) AVAsset * videoAsset;                                    //@synthesize videoAsset=_videoAsset - In the implementation block
@property (nonatomic,readonly) double crossfadeDuration;                                //@synthesize crossfadeDuration=_crossfadeDuration - In the implementation block
@property (nonatomic,readonly) double sourceStartTime;                                  //@synthesize sourceStartTime=_sourceStartTime - In the implementation block
@property (nonatomic,retain) id stillPhoto;                                             //@synthesize stillPhoto=_stillPhoto - In the implementation block
@property (nonatomic,readonly) int photoEXIFOrientation;                                //@synthesize photoEXIFOrientation=_photoEXIFOrientation - In the implementation block
@property (nonatomic,readonly) float minimumFrameInterval;                              //@synthesize minimumFrameInterval=_minimumFrameInterval - In the implementation block
@property (nonatomic,readonly) CGSize targetSize;                                       //@synthesize targetSize=_targetSize - In the implementation block
@property (nonatomic,copy,readonly) AVVideoComposition * videoComposition;              //@synthesize videoComposition=_videoComposition - In the implementation block
@property (nonatomic,copy,readonly) id resultHandler;                                   //@synthesize resultHandler=_resultHandler - In the implementation block
-(CGSize)targetSize;
-(id)resultHandler;
-(double)crossfadeDuration;
-(double)sourceStartTime;
-(AVVideoComposition *)videoComposition;
-(AVAsset *)videoAsset;
-(int)photoEXIFOrientation;
-(id)initWithVideoAsset:(id)arg1 sourceStartTime:(double)arg2 stillPhoto:(CGImageRef)arg3 photoEXIFOrientation:(int)arg4 crossfadeDuration:(double)arg5 minimumFrameInterval:(float)arg6 targetSize:(CGSize)arg7 videoComposition:(id)arg8 resultHandler:(/*^block*/id)arg9 ;
-(void)setStillPhoto:(id)arg1 ;
-(id)stillPhoto;
-(float)minimumFrameInterval;
@end

