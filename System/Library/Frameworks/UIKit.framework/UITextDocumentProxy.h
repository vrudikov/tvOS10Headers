/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:02:36 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, UITextInputMode;


@protocol UITextDocumentProxy <UIKeyInput>
@property (nonatomic,readonly) NSString * documentContextBeforeInput; 
@property (nonatomic,readonly) NSString * documentContextAfterInput; 
@property (nonatomic,readonly) UITextInputMode * documentInputMode; 
@required
-(UITextInputMode *)documentInputMode;
-(void)adjustTextPositionByCharacterOffset:(long long)arg1;
-(NSString *)documentContextBeforeInput;
-(NSString *)documentContextAfterInput;

@end

