/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:08 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class _INPBIntentResponse;


@protocol INIntentResponseExport <NSObject,JSExport>
@property (nonatomic,copy,readonly) _INPBIntentResponse * backingStore; 
@property (nonatomic,readonly) long long code; 
@required
-(id)init;
-(long long)code;
-(id)_payloadResponseMessageData;
-(void)_setPayloadResponseMessageData:(id)arg1;
-(_INPBIntentResponse *)backingStore;
-(long long)_intentHandlingStatus;

@end
