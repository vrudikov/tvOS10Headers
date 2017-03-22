/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:40 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotoVision.framework/PhotoVision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PVSceneTaxonomy, NSString, NSMutableSet, NSSet;

@interface PVSceneTaxonomyNode : NSObject {

	BOOL _indexed;
	unsigned _sceneClassId;
	PVSceneTaxonomy* _taxonomy;
	NSString* _name;
	double _threshold;
	NSMutableSet* _parentNodes;
	NSMutableSet* _childNodes;

}

@property (retain) NSMutableSet * parentNodes;                   //@synthesize parentNodes=_parentNodes - In the implementation block
@property (retain) NSMutableSet * childNodes;                    //@synthesize childNodes=_childNodes - In the implementation block
@property (readonly) PVSceneTaxonomy * taxonomy;                 //@synthesize taxonomy=_taxonomy - In the implementation block
@property (readonly) unsigned sceneClassId;                      //@synthesize sceneClassId=_sceneClassId - In the implementation block
@property (copy,readonly) NSString * name;                       //@synthesize name=_name - In the implementation block
@property (getter=isIndexed,readonly) BOOL indexed;              //@synthesize indexed=_indexed - In the implementation block
@property (readonly) double threshold;                           //@synthesize threshold=_threshold - In the implementation block
@property (copy,readonly) NSSet * parents; 
@property (copy,readonly) NSSet * children; 
@property (getter=isRoot,readonly) BOOL root; 
+(id)localizedStringForKey:(id)arg1 localizationBundle:(id)arg2 tableName:(id)arg3 ;
-(BOOL)isIndexed;
-(BOOL)isRoot;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)name;
-(NSMutableSet *)childNodes;
-(id)localizedLabel;
-(NSSet *)children;
-(void)setChildNodes:(NSMutableSet *)arg1 ;
-(double)threshold;
-(void)addChildNode:(id)arg1 ;
-(PVSceneTaxonomy *)taxonomy;
-(NSMutableSet *)parentNodes;
-(id)initWithSceneClassId:(unsigned)arg1 name:(id)arg2 indexed:(BOOL)arg3 threshold:(double)arg4 taxonomy:(id)arg5 ;
-(void)setParentNodes:(NSMutableSet *)arg1 ;
-(unsigned)sceneClassId;
-(NSSet *)parents;
-(void)traverse:(long long)arg1 visitor:(/*^block*/id)arg2 ;
-(BOOL)isEqualToNode:(id)arg1 ;
-(id)localizedSynonyms;
@end
