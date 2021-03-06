/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:06:18 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface AXCharacterSoundMap : NSObject {

	NSMutableDictionary* _phDictionaries;

}

@property (nonatomic,retain) NSMutableDictionary * phDictionaries;              //@synthesize phDictionaries=_phDictionaries - In the implementation block
-(void)dealloc;
-(id)init;
-(id)_linguisticStringForCharacter:(id)arg1 language:(id)arg2 linguisticType:(long long)arg3 andVoiceIdentifier:(id)arg4 ;
-(id)phonemeStringForCharacter:(id)arg1 forLanguage:(id)arg2 andVoiceIdentifier:(id)arg3 ;
-(id)phoneticStringForCharacter:(id)arg1 forLanguage:(id)arg2 andVoiceIdentifier:(id)arg3 ;
-(NSMutableDictionary *)phDictionaries;
-(void)setPhDictionaries:(NSMutableDictionary *)arg1 ;
@end

