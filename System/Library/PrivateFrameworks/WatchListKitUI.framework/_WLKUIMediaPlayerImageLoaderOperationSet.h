/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:10:01 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/WatchListKitUI.framework/WatchListKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MPArtworkDataSource;
@class MPArtworkCatalog;

@interface _WLKUIMediaPlayerImageLoaderOperationSet : NSObject {

	id<MPArtworkDataSource> _dataSource;
	MPArtworkCatalog* _artworkCatalog;

}

@property (nonatomic,retain) id<MPArtworkDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,retain) MPArtworkCatalog * artworkCatalog;               //@synthesize artworkCatalog=_artworkCatalog - In the implementation block
-(void)setDataSource:(id<MPArtworkDataSource>)arg1 ;
-(id<MPArtworkDataSource>)dataSource;
-(MPArtworkCatalog *)artworkCatalog;
-(void)setArtworkCatalog:(MPArtworkCatalog *)arg1 ;
@end
