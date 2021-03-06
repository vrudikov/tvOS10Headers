/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:04:44 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AddressBookUI/AddressBookUI-Structs.h>
#import <AddressBookUI/ABPickerViewController.h>

@class NSArray, NSString, ABPropertyGroup, ABItemLabelPicker;

@interface ABLabelPickerViewController : ABPickerViewController {

	NSArray* _additionalLabels;
	NSString* _selectedLabel;
	void* _addressBook;
	ABPropertyGroup* _propertyGroup;
	long long _itemIndex;
	ABItemLabelPicker* _labelPicker;
	BOOL _didCreateNewLabel;

}

@property (nonatomic,retain) NSString * selectedLabel;              //@synthesize selectedLabel=_selectedLabel - In the implementation block
@property (assign,nonatomic) BOOL didCreateNewLabel;                //@synthesize didCreateNewLabel=_didCreateNewLabel - In the implementation block
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)_allowsAutorotation;
-(void)_getRotationContentSettings:(SCD_Struct_AB0*)arg1 ;
-(void)setStyleProvider:(id)arg1 ;
-(double)ab_heightToFitForViewInPopoverView;
-(NSString *)selectedLabel;
-(void)setSelectedLabel:(NSString *)arg1 ;
-(void)itemLabelPicker:(id)arg1 endedWithSelectionConfirmed:(BOOL)arg2 animate:(BOOL)arg3 ;
-(void)setDidCreateNewLabel:(BOOL)arg1 ;
-(BOOL)itemLabelPickerShouldDismissKeyboard:(id)arg1 ;
-(void)itemLabelPickerDidChangeSelection:(id)arg1 ;
-(void)itemLabelPicker:(id)arg1 deletedCustomLabel:(id)arg2 ;
-(void)itemLabelPickerDeletedLastCustomLabel:(id)arg1 ;
-(BOOL)didCreateNewLabel;
-(CGSize)fullScreenContentSize;
-(id)labelPicker;
-(id)initWithAddressBook:(void*)arg1 propertyGroup:(id)arg2 itemIndex:(long long)arg3 additionalLabels:(id)arg4 ;
@end

