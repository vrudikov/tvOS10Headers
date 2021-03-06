/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:04:46 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AddressBookUI/AddressBookUI-Structs.h>
#import <AddressBookUI/ABPasteboardControl.h>

@protocol ABStyleProvider, ABPersonImageDataDelegate;
@class UIImageView, ABClippingImageView, UIImage, ABUIPerson;

@interface ABPersonImageView : ABPasteboardControl {

	UIImageView* _personImageView;
	UIImageView* _editingImageView;
	ABClippingImageView* _emptyImageView;
	ABClippingImageView* _pasteboardMaskImageView;
	UIImage* _personImage;
	BOOL _isEditing;
	BOOL _showLabel;
	BOOL _needsReflow;
	BOOL _needsReload;
	BOOL _allowsEditing;
	BOOL _multiplePhotoBackdropEnabled;
	ABUIPerson* _displayedPerson;
	id<ABStyleProvider> _styleProvider;
	id<ABPersonImageDataDelegate> _imageDataDelegate;

}

@property (nonatomic,retain) ABUIPerson * displayedPerson;                                 //@synthesize displayedPerson=_displayedPerson - In the implementation block
@property (nonatomic,retain) id<ABStyleProvider> styleProvider;                            //@synthesize styleProvider=_styleProvider - In the implementation block
@property (assign,nonatomic) BOOL allowsEditing;                                           //@synthesize allowsEditing=_allowsEditing - In the implementation block
@property (assign,nonatomic) BOOL multiplePhotoBackdropEnabled;                            //@synthesize multiplePhotoBackdropEnabled=_multiplePhotoBackdropEnabled - In the implementation block
@property (assign,nonatomic) id<ABPersonImageDataDelegate> imageDataDelegate;              //@synthesize imageDataDelegate=_imageDataDelegate - In the implementation block
@property (nonatomic,readonly) UIImage * maskImage; 
@property (nonatomic,readonly) UIImage * backgroundImage; 
@property (nonatomic,readonly) UIImage * overlayImage; 
@property (nonatomic,readonly) UIImage * attributionImage; 
+(id)newImageWithName:(id)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)reload;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(UIImage *)backgroundImage;
-(void)copy:(id)arg1 ;
-(void)paste:(id)arg1 ;
-(BOOL)allowsEditing;
-(void)setAllowsEditing:(BOOL)arg1 ;
-(UIImage *)attributionImage;
-(void)setNeedsReload;
-(id<ABStyleProvider>)styleProvider;
-(void)setStyleProvider:(id<ABStyleProvider>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 styleProvider:(id)arg2 ;
-(ABUIPerson *)displayedPerson;
-(id)personImageView;
-(void)setImageDataDelegate:(id<ABPersonImageDataDelegate>)arg1 ;
-(id<ABPersonImageDataDelegate>)imageDataDelegate;
-(void)setIsEditing:(BOOL)arg1 animate:(BOOL)arg2 ;
-(BOOL)abShouldShowMenu;
-(void)abMenuControllerWillShow:(id)arg1 ;
-(void)abMenuControllerWillHide;
-(UIImage *)maskImage;
-(void)_drawEditLabelInFrame:(CGRect)arg1 ;
-(id)editingImageView;
-(id)framedPhoto;
-(id)emptyImageView;
-(void)reloadIfNeeded;
-(void)reflowIfNeeded;
-(id)copyDefaultImageForPerson:(id)arg1 ;
-(void)setNeedsReflow;
-(id)pasteboardMaskImageView;
-(id)_supportedPasteboardImageTypesIncludingCustomTypes:(BOOL)arg1 ;
-(id)_newDictionaryWithImageData;
-(void)setMultiplePhotoBackdropEnabled:(BOOL)arg1 ;
-(BOOL)multiplePhotoBackdropEnabled;
-(void)reflow;
-(void)setDisplayedPerson:(ABUIPerson *)arg1 ;
-(UIImage *)overlayImage;
@end

