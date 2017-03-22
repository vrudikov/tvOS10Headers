/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:35 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FlexSongProtocol
@required
-(long long)sampleRate;
-(id)uid;
-(id)artwork;
-(id)artistName;
-(id)songName;
-(id)assetWithID:(id)arg1;
-(BOOL)canPlay;
-(SCD_Struct_Mi1*)naturalDuration;
-(id)tagIDs;
-(id)audioEncoderPresetName;
-(void)updateAssets:(id)arg1;
-(id)renditionForDuration:(SCD_Struct_Mi1)arg1 withOptions:(id)arg2 usePreRenderedFades:(BOOL)arg3 testingContext:(id)arg4;

@end
