/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:34 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIAlertAction.h>

@interface BEAlertAction : UIAlertAction {

	long long _tag;
	/*^block*/id _actionHandler;

}

@property (assign,nonatomic) long long tag;               //@synthesize tag=_tag - In the implementation block
@property (nonatomic,copy) id actionHandler;              //@synthesize actionHandler=_actionHandler - In the implementation block
-(long long)tag;
-(void)setTag:(long long)arg1 ;
-(id)initWithTitle:(id)arg1 style:(long long)arg2 tag:(long long)arg3 action:(/*^block*/id)arg4 ;
-(void)doActionHandler;
-(void)setActionHandler:(id)arg1 ;
-(id)actionHandler;
@end

