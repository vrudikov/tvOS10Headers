/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:06:59 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKPlaceSectionRowView.h>

@class NSMutableArray, UILayoutGuide, NSArray;

@interface MKPlaceEncyclopedicRowView : MKPlaceSectionRowView {

	NSMutableArray* _labels;
	NSMutableArray* _values;
	UILayoutGuide* _insetMetricGuide;
	UILayoutGuide* _leftMetricGuide;
	UILayoutGuide* _rightMetricGuide;
	unsigned long long _columnCount;
	NSArray* _items;
	NSMutableArray* _labelConstraints;

}

@property (nonatomic,retain) NSMutableArray * labelConstraints;              //@synthesize labelConstraints=_labelConstraints - In the implementation block
@property (nonatomic,retain) NSArray * items;                                //@synthesize items=_items - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(NSArray *)items;
-(void)setItems:(NSArray *)arg1 ;
-(void)_contentSizeDidChange;
-(void)setColumnCount:(unsigned long long)arg1 ;
-(id)_keyLabelWithString:(id)arg1 ;
-(id)_valueLabelWithString:(id)arg1 ;
-(void)addConstraintsForKeyView:(id)arg1 andMatchingValueLabel:(id)arg2 ;
-(void)addWidthAndSideSpacingConstraintsForLabels;
-(void)refreshContent:(BOOL)arg1 ;
-(NSMutableArray *)labelConstraints;
-(void)setLabelConstraints:(NSMutableArray *)arg1 ;
@end
