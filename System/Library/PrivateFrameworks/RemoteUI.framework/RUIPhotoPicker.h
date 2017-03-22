/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:12 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UINavigationControllerDelegate.h>
#import <UIKit/UIImagePickerControllerDelegate.h>

@class UIImagePickerController, UIImage, NSString;

@interface RUIPhotoPicker : NSObject <UINavigationControllerDelegate, UIImagePickerControllerDelegate> {

	UIImagePickerController* _imagePickerController;
	UIImage* _pickedImage;
	/*^block*/id _pickerCompletion;

}

@property (nonatomic,retain) UIImage * pickedImage;                 //@synthesize pickedImage=_pickedImage - In the implementation block
@property (nonatomic,copy) id pickerCompletion;                     //@synthesize pickerCompletion=_pickerCompletion - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)imagePickerControllerDidCancel:(id)arg1 ;
-(void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2 ;
-(void)setPickerCompletion:(id)arg1 ;
-(void)setPickedImage:(UIImage *)arg1 ;
-(void)_dismissWithImage:(id)arg1 ;
-(void)pickImageWithParentController:(id)arg1 completion:(/*^block*/id)arg2 ;
-(UIImage *)pickedImage;
-(id)pickerCompletion;
@end
