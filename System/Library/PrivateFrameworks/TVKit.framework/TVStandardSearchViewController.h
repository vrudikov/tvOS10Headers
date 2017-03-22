/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:06:42 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/TVKit.framework/TVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@protocol UIFocusEnvironment, TVStandardSearchViewControllerDelegate;
@class NSString, UIView, _TVStandardSearchContentViewController, TVSystemInputViewController, NSArray, UIViewController, UITextField;

@interface TVStandardSearchViewController : UIViewController {

	NSString* _baseURLString;
	id<UIFocusEnvironment> _preferredFocusedEnvironment;
	UIView* _headerView;
	_TVStandardSearchContentViewController* _contentViewController;
	TVSystemInputViewController* _systemInputViewController;
	NSArray* _headerViewConstraints;
	NSArray* _inputViewConstraints;
	id<TVStandardSearchViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<TVStandardSearchViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIView * headerView;                                                     //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,retain) UIViewController * resultsViewController; 
@property (nonatomic,readonly) UITextField * textField; 
@property (nonatomic,copy,readonly) NSString * searchText; 
-(void)setDelegate:(id<TVStandardSearchViewControllerDelegate>)arg1 ;
-(id<TVStandardSearchViewControllerDelegate>)delegate;
-(BOOL)_enableAutomaticKeyboardPressDone;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(id)preferredFocusEnvironments;
-(void)didUpdateFocusFromView:(id)arg1 ;
-(void)viewDidLoad;
-(void)updateViewConstraints;
-(UIView *)headerView;
-(void)setHeaderView:(UIView *)arg1 ;
-(NSString *)searchText;
-(UITextField *)textField;
-(void)setResultsViewController:(UIViewController *)arg1 ;
-(void)_doneButtonPressed:(id)arg1 ;
-(UIViewController *)resultsViewController;
-(void)_textChanged;
@end
