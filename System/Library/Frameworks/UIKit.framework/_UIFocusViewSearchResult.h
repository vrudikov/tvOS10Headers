/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:02:04 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIFocusUpdateContext;

@interface _UIFocusViewSearchResult : NSObject {

	BOOL _hasSpeedBump;
	UIFocusUpdateContext* _focusCandidate;

}

@property (nonatomic,retain) UIFocusUpdateContext * focusCandidate;              //@synthesize focusCandidate=_focusCandidate - In the implementation block
@property (assign,nonatomic) BOOL hasSpeedBump;                                  //@synthesize hasSpeedBump=_hasSpeedBump - In the implementation block
-(UIFocusUpdateContext *)focusCandidate;
-(void)setFocusCandidate:(UIFocusUpdateContext *)arg1 ;
-(void)setHasSpeedBump:(BOOL)arg1 ;
-(BOOL)hasSpeedBump;
@end

