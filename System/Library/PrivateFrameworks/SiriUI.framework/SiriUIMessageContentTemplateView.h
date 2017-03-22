/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:21 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriUI/SiriUI-Structs.h>
#import <SiriUI/SiriUIBaseTemplateView.h>

@interface SiriUIMessageContentTemplateView : SiriUIBaseTemplateView

@property (assign,nonatomic,__weak) id<SiriUIMessageContentTemplateModel> dataSource; 
-(void)reloadData;
-(void)layoutSubviews;
-(void)setSemanticContentAttribute:(long long)arg1 ;
-(id)initWithDataSource:(id)arg1 ;
-(CGSize)_textBalloonViewBoundingSize;
-(double)desiredHeight;
@end
