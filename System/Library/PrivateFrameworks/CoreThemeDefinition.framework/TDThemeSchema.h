/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:08:17 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreThemeDefinition/CoreThemeDefinition-Structs.h>
@class CoreThemeDocument;

@interface TDThemeSchema : NSObject {

	CoreThemeDocument* _doc;

}
+(BOOL)loadThemeConstantsForEntity:(id)arg1 inContext:(id)arg2 ;
-(void)dealloc;
-(id)initWithThemeDocument:(id)arg1 ;
-(void)loadZeroCodeArtworkInfo;
-(void)loadArtworkDraftTypes;
-(void)resetThemeConstants;
-(void)sanityCheckAndUpdateDocumentIfNecessary;
-(void)_sanityCheckSchemaPartDefinitionsForStandardElement:(const SCD_Struct_TD14*)arg1 withElement:(id)arg2 ;
-(void)_addSchemaPartDefinitionsForStandardElement:(const SCD_Struct_TD14*)arg1 withElement:(id)arg2 ;
-(BOOL)_renditionKey:(const renditionkeytoken*)arg1 isEqualToKeyIgnoringLook:(const renditionkeytoken*)arg2 ;
-(void)_sanityCheckObjectsWithEntityName:(id)arg1 globalDescriptor:(void*)arg2 matchIdentifierOnly:(BOOL)arg3 ;
-(void)_sanityCheckMetafontSizeSelectorsAndUpdateIfNecessary;
-(void)_sanityCheckSchemaCategoriesAndUpdateIfNecessary;
-(void)_sanityCheckSchemaDefinitionsAndUpdateIfNecessary;
-(void)_sanityCheckSchemaAssets;
-(void)_sanityCheckColorNamesAndUpdateIfNecessary;
-(void)_sanityCheckEffectRenditionsAndUpdateIfNecessary;
-(void)loadThemeSizes;
-(void)loadThemeValues;
-(void)loadThemeElements;
-(void)loadThemeParts;
-(void)loadThemeStates;
-(void)loadThemePresentationStates;
-(void)loadThemeDirections;
-(void)loadThemeDrawingLayers;
-(void)loadThemeIdioms;
-(void)loadThemeDisplayGamuts;
-(void)loadThemeDeploymentTargets;
-(void)loadThemeCompressionTypes;
-(void)loadTexturePixelFormats;
-(void)loadThemeTextureFaces;
-(void)loadThemeTextureInterpretations;
-(void)loadThemeGraphicsFeatureSetClasses;
-(void)loadThemeUISizeClasses;
-(void)loadIterationTypes;
-(void)loadThemeLooks;
-(void)loadRenditionTypes;
-(void)loadRenditionSubtypes;
-(void)loadColorStatuses;
-(void)loadMetafontSelectors;
-(void)loadMetafontSizes;
-(void)loadColorNames;
-(void)loadSchemaCategories;
-(void)loadSchemaDefinitions;
-(void)loadEffectConstants;
-(void)loadTemplateRenderingModeConstants;
-(void)loadBasicThemePart;
-(void)loadThemeDefaultLook;
-(void)loadDefaultFontCustomizations;
-(void)loadStandardEffectDefinitions;
@end

