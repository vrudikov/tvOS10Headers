/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:05 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/TextInput/libTextInputCore.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class TIInputMode, NSDate, TILanguageModelAdaptationContext;

@interface TILanguageModelOfflineLearningHandle : NSObject {

	BOOL _valid;
	TIInputMode* _inputMode;
	NSDate* _lastAdaptationDate;
	TILanguageModelAdaptationContext* _currentAdaptationContext;

}

@property (nonatomic,readonly) TIInputMode * inputMode;                                              //@synthesize inputMode=_inputMode - In the implementation block
@property (nonatomic,copy) NSDate * lastAdaptationDate;                                              //@synthesize lastAdaptationDate=_lastAdaptationDate - In the implementation block
@property (nonatomic,copy) TILanguageModelAdaptationContext * currentAdaptationContext;              //@synthesize currentAdaptationContext=_currentAdaptationContext - In the implementation block
@property (assign,getter=isValid,nonatomic) BOOL valid;                                              //@synthesize valid=_valid - In the implementation block
+(id)handleForInputMode:(id)arg1 ;
+(id)handleForLanguageLikelihood;
-(void)dealloc;
-(BOOL)isValid;
-(TIInputMode *)inputMode;
-(void)load;
-(void)setValid:(BOOL)arg1 ;
-(void)didFinishLearning;
-(id)initWithInputMode:(id)arg1 ;
-(void)updateAdaptationContext:(id)arg1 ;
-(void)adaptToParagraph:(id)arg1 timeStamp:(double)arg2 adaptationType:(int)arg3 ;
-(TILanguageModelAdaptationContext *)currentAdaptationContext;
-(void)setLastAdaptationDate:(NSDate *)arg1 ;
-(NSDate *)lastAdaptationDate;
-(void)setCurrentAdaptationContext:(TILanguageModelAdaptationContext *)arg1 ;
@end
