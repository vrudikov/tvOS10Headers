/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:30 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SceneKit/SCNImageSource.h>

@class SKScene;

@interface SCNSpriteKitSource : SCNImageSource {

	SKScene* _scene;

}

@property (nonatomic,retain) SKScene * scene;              //@synthesize scene=_scene - In the implementation block
-(void)dealloc;
-(BOOL)isOpaque;
-(void)setScene:(SKScene *)arg1 ;
-(id)textureSource;
-(SKScene *)scene;
@end

