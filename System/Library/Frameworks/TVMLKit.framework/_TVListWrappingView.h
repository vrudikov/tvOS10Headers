/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:36 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <UIKit/UIView.h>

@class UIView, UICollectionView;

@interface _TVListWrappingView : UIView {

	BOOL _computationValid;
	UIEdgeInsets _cachedHeaderMargin;
	CGSize _cachedHeaderSize;
	BOOL _floatingHeader;
	BOOL _headerCanBecomeFocused;
	BOOL _headerFocused;
	UIView* _headerView;
	UICollectionView* _listView;
	UIEdgeInsets _listContentInset;

}

@property (assign,getter=isHeaderFocused,nonatomic) BOOL headerFocused;              //@synthesize headerFocused=_headerFocused - In the implementation block
@property (nonatomic,retain) UIView * headerView;                                    //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,retain) UICollectionView * listView;                            //@synthesize listView=_listView - In the implementation block
@property (assign,nonatomic) BOOL floatingHeader;                                    //@synthesize floatingHeader=_floatingHeader - In the implementation block
@property (assign,nonatomic) UIEdgeInsets listContentInset;                          //@synthesize listContentInset=_listContentInset - In the implementation block
@property (assign,nonatomic) BOOL headerCanBecomeFocused;                            //@synthesize headerCanBecomeFocused=_headerCanBecomeFocused - In the implementation block
+(double)_heightThatFitsList:(id)arg1 contentInset:(UIEdgeInsets)arg2 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)preferredFocusEnvironments;
-(void)didUpdateFocusFromView:(id)arg1 ;
-(UIView *)headerView;
-(void)setHeaderView:(UIView *)arg1 ;
-(void)setListView:(UICollectionView *)arg1 ;
-(UICollectionView *)listView;
-(UIEdgeInsets)_listContentInsetForSize:(CGSize)arg1 ;
-(BOOL)headerCanBecomeFocused;
-(void)setHeaderFocused:(BOOL)arg1 ;
-(BOOL)isHeaderFocused;
-(void)setListContentInset:(UIEdgeInsets)arg1 ;
-(void)adjustScrollForContentOffset:(CGPoint)arg1 ;
-(BOOL)floatingHeader;
-(void)setFloatingHeader:(BOOL)arg1 ;
-(UIEdgeInsets)listContentInset;
-(void)setHeaderCanBecomeFocused:(BOOL)arg1 ;
@end
