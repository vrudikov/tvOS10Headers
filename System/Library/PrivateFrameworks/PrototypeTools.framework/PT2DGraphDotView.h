/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:11 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PrototypeTools/PrototypeTools-Structs.h>
#import <UIKit/UIView.h>

@class PT2DGraphView;

@interface PT2DGraphDotView : UIView {

	PT2DGraphView* _graph;
	CGPoint _graphPoint;

}

@property (assign,nonatomic,__weak) PT2DGraphView * graph;              //@synthesize graph=_graph - In the implementation block
@property (assign,nonatomic) CGPoint graphPoint;                        //@synthesize graphPoint=_graphPoint - In the implementation block
-(void)drawRect:(CGRect)arg1 ;
-(id)init;
-(PT2DGraphView *)graph;
-(void)setGraph:(PT2DGraphView *)arg1 ;
-(void)setGraphPoint:(CGPoint)arg1 ;
-(CGPoint)graphPoint;
@end
