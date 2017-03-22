/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:54 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/TVServices.framework/TVServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface TVSPlaybackReportingEvent : NSObject {

	NSString* _name;
	double _timestamp;
	id _value;
	long long _type;
	double _duration;
	long long _durationMS;
	TVSPlaybackReportingEvent* _startEvent;

}

@property (nonatomic,copy) NSString * name;                                              //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) double timestamp;                                           //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,retain) id value;                                                   //@synthesize value=_value - In the implementation block
@property (assign,nonatomic) long long type;                                             //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) double duration;                                            //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) long long durationMS;                                       //@synthesize durationMS=_durationMS - In the implementation block
@property (assign,nonatomic,__weak) TVSPlaybackReportingEvent * startEvent;              //@synthesize startEvent=_startEvent - In the implementation block
-(id)description;
-(double)timestamp;
-(double)duration;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)setDuration:(double)arg1 ;
-(void)setType:(long long)arg1 ;
-(void)setTimestamp:(double)arg1 ;
-(long long)type;
-(id)value;
-(void)setValue:(id)arg1 ;
-(TVSPlaybackReportingEvent *)startEvent;
-(long long)durationMS;
-(void)setDurationMS:(long long)arg1 ;
-(void)setStartEvent:(TVSPlaybackReportingEvent *)arg1 ;
@end
