/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:39 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PASampling/PACountedFrame.h>

@class PASampleFrame;

@interface PACountedSampleFrame : PACountedFrame {

	PASampleFrame* _sampleFrame;

}

@property (readonly) PASampleFrame * sampleFrame;              //@synthesize sampleFrame=_sampleFrame - In the implementation block
-(id)debugDescription;
-(PASampleFrame *)sampleFrame;
-(id)initWithSampleFrame:(id)arg1 ;
@end

