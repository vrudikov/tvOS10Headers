/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:14 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVLegacyContentKit/ATVLegacyContentKit-Structs.h>
#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/TVTableViewDelegate.h>

@class TVOptionDialogListDataSource, NSArray, UIView, NSString, UILabel, TVTableView;

@interface TVOptionDialogViewController : UIViewController <TVTableViewDelegate> {

	TVOptionDialogListDataSource* _listDataSource;
	NSArray* _menuItems;
	UIView* _headerView;
	NSString* _descriptionText;
	UILabel* _descriptionLabel;
	TVTableView* _listView;

}

@property (nonatomic,retain) UILabel * descriptionLabel;              //@synthesize descriptionLabel=_descriptionLabel - In the implementation block
@property (nonatomic,retain) TVTableView * listView;                  //@synthesize listView=_listView - In the implementation block
@property (nonatomic,retain) NSArray * menuItems;                     //@synthesize menuItems=_menuItems - In the implementation block
@property (nonatomic,retain) UIView * headerView;                     //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,copy) NSString * descriptionText;                //@synthesize descriptionText=_descriptionText - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)loadView;
-(id)preferredFocusedItem;
-(void)viewDidLayoutSubviews;
-(UIView *)headerView;
-(void)setHeaderView:(UIView *)arg1 ;
-(void)setMenuItems:(NSArray *)arg1 ;
-(NSArray *)menuItems;
-(NSString *)descriptionText;
-(void)setDescriptionText:(NSString *)arg1 ;
-(void)setListDataSource:(id)arg1 ;
-(id)listDataSource;
-(CGSize)_headerViewMargins;
-(double)_listWidth;
-(void)setListView:(TVTableView *)arg1 ;
-(TVTableView *)listView;
-(UILabel *)descriptionLabel;
-(void)setDescriptionLabel:(UILabel *)arg1 ;
-(id)_createDataSource;
@end
