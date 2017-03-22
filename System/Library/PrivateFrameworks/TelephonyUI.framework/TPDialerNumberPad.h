/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:24 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TelephonyUI/TPNumberPad.h>
#import <libobjc.A.dylib/TPDialerKeypadProtocol.h>

@protocol TPDialerKeypadDelegate;
@class TPDialerSoundController, NSString;

@interface TPDialerNumberPad : TPNumberPad <TPDialerKeypadProtocol> {

	BOOL _playsSounds;
	id<TPDialerKeypadDelegate> _delegate;
	TPDialerSoundController* _soundController;

}

@property (retain) TPDialerSoundController * soundController;              //@synthesize soundController=_soundController - In the implementation block
@property (assign,nonatomic) BOOL playsSounds;                             //@synthesize playsSounds=_playsSounds - In the implementation block
@property (assign) id<TPDialerKeypadDelegate> delegate;                    //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)dialerNumberPadFullCharacters;
+(id)dialerNumberPadNumericCharacters;
-(void)setDelegate:(id<TPDialerKeypadDelegate>)arg1 ;
-(id<TPDialerKeypadDelegate>)delegate;
-(void)buttonTapped:(id)arg1 ;
-(void)setPlaysSounds:(BOOL)arg1 ;
-(void)highlightKeyAtIndex:(long long)arg1 ;
-(long long)indexForHighlightedKey;
-(TPDialerSoundController *)soundController;
-(void)setSoundController:(TPDialerSoundController *)arg1 ;
-(void)buttonLongPressed:(id)arg1 ;
-(BOOL)playsSounds;
-(void)buttonDown:(id)arg1 ;
-(void)buttonUp:(id)arg1 ;
@end
