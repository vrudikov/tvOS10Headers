/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:49 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProVideo/ProVideo-Structs.h>
#import <ProVideo/PVInstructionGraphNode.h>

@class PVEffect;

@interface PVInstructionGraphEffectNode : PVInstructionGraphNode {

	map<unsigned int, PVInstructionGraphNode *, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, PVInstructionGraphNode *> > >* _inputMap;
	PVEffect* _effect;

}

@property (nonatomic,retain) PVEffect * effect;              //@synthesize effect=_effect - In the implementation block
+(id)newEffectNodeToTransitionFrom:(id)arg1 to:(id)arg2 effect:(id)arg3 ;
+(id)newEffectNodeToOverlayInputs:(id)arg1 inputIDs:(id)arg2 effect:(id)arg3 ;
+(id)newEffectNodeToFilterInput:(id)arg1 effect:(id)arg2 ;
+(id)newEffectNodeToAddTitle:(id)arg1 effect:(id)arg2 ;
-(void)setEffect:(PVEffect *)arg1 ;
-(PVEffect *)effect;
-(id)getAllSourceNodes;
-(id)requiredSourceTrackIDs;
-(void)setInputNode:(id)arg1 forInputID:(unsigned)arg2 ;
-(void)loadIGNode:(HGRef<PVRenderContext>*)arg1 ;
-(void)unloadIGNode;
-(HGRef<HGNode>*)hgNodeForTime:(SCD_Struct_PV0)arg1 trackInputs:(const PVInputHGNodeMap<int>Ref)arg2 renderer:(const HGRef<HGRenderer>Ref)arg3 renderContext:(HGRef<PVRenderContext>*)arg4 ;
-(PCRect<double>)inputSizeForPVEffect:(id)arg1 renderContext:(HGRef<PVRenderContext>*)arg2 ;
-(PCMatrix44Tmpl<double>)pixelTransformForPVEffect:(id)arg1 renderContext:(HGRef<PVRenderContext>*)arg2 ;
-(id)instructionGraphNodeDescription;
@end
