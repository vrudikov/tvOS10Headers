/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:00 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKPlaceSectionRowView.h>

@class MKExpandingLabel, NSString, NSArray;

@interface MKPlaceTextBlockCell : MKPlaceSectionRowView {

	BOOL _constraintsAdded;
	MKExpandingLabel* _textBlock;
	NSString* _textBlockText;
	NSArray* _marginConstraints;

}

@property (nonatomic,retain) MKExpandingLabel * textBlock;                                   //@synthesize textBlock=_textBlock - In the implementation block
@property (nonatomic,retain) NSArray * marginConstraints;                                    //@synthesize marginConstraints=_marginConstraints - In the implementation block
@property (assign,nonatomic) BOOL constraintsAdded;                                          //@synthesize constraintsAdded=_constraintsAdded - In the implementation block
@property (nonatomic,copy) NSString * textBlockText;                                         //@synthesize textBlockText=_textBlockText - In the implementation block
@property (assign,getter=isTextBlockExpanded,nonatomic) BOOL textBlockExpanded; 
@property (nonatomic,copy) id textBlockResizedBlock; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutMarginsDidChange;
-(void)updateConstraints;
-(NSString *)textBlockText;
-(MKExpandingLabel *)textBlock;
-(void)setTextBlock:(MKExpandingLabel *)arg1 ;
-(void)_contentSizeDidChange;
-(NSArray *)marginConstraints;
-(void)setMarginConstraints:(NSArray *)arg1 ;
-(void)_refreshLayoutMargins;
-(void)setTextBlockText:(NSString *)arg1 ;
-(void)setTextBlockResizedBlock:(id)arg1 ;
-(BOOL)isTextBlockExpanded;
-(void)setTextBlockExpanded:(BOOL)arg1 ;
-(id)textBlockResizedBlock;
-(BOOL)constraintsAdded;
-(void)setConstraintsAdded:(BOOL)arg1 ;
@end
