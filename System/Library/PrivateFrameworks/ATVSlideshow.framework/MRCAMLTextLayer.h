/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:06:39 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVSlideshow/MRCAMLLayer.h>

@class MRImage, MRTextRenderer;

@interface MRCAMLTextLayer : MRCAMLLayer {

	MRImage* textImage;
	MRTextRenderer* textRenderer;

}

@property (nonatomic,retain) MRImage * textImage; 
@property (nonatomic,retain) MRTextRenderer * textRenderer; 
-(void)dealloc;
-(MRTextRenderer *)textRenderer;
-(void)setTextRenderer:(MRTextRenderer *)arg1 ;
-(void)setTextImage:(MRImage *)arg1 ;
-(MRImage *)textImage;
@end
