//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TVAirPlaySession.h"

@class NSDictionary, NSObject<TVAirPlaySessionDelegate>, NSString;

@interface TVAirPlayStreamingAudioSession : NSObject <TVAirPlaySession>
{
    _Bool _deactivated;	// 8 = 0x8
    unsigned int _sessionID;	// 12 = 0xc
    NSObject<TVAirPlaySessionDelegate> *_delegate;	// 16 = 0x10
    NSDictionary *_initialOptions;	// 24 = 0x18
}

@property(copy, nonatomic) NSDictionary *initialOptions; // @synthesize initialOptions=_initialOptions;
@property(readonly, nonatomic) unsigned int sessionID; // @synthesize sessionID=_sessionID;
@property(nonatomic) __weak NSObject<TVAirPlaySessionDelegate> *delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool deactivated; // @synthesize deactivated=_deactivated;
- (void).cxx_destruct;	// IMP=0x00000001000103b8
- (void)userStop;	// IMP=0x0000000100010334
- (_Bool)setProperty:(id)arg1 qualifier:(id)arg2 value:(id)arg3 error:(id *)arg4;	// IMP=0x00000001000101e4
- (_Bool)performAction:(id)arg1 withOptions:(id)arg2 outInfo:(id *)arg3 error:(id *)arg4;	// IMP=0x00000001000101dc
- (id)getProperty:(id)arg1 qualifier:(id)arg2 error:(id *)arg3;	// IMP=0x00000001000101d4
- (_Bool)stopWithOptions:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100010138
- (void)startWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010000ff54
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x000000010000fe34
- (id)init;	// IMP=0x000000010000f968
@property(readonly, nonatomic) long long sessionType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

