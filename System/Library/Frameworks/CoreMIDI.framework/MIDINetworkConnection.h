/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:24 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/CoreMIDI.framework/CoreMIDI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MIDINetworkHost;

@interface MIDINetworkConnection : NSObject {

	void* _imp;

}

@property (nonatomic,retain,readonly) MIDINetworkHost * host; 
+(id)connectionWithHost:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(MIDINetworkHost *)host;
@end

