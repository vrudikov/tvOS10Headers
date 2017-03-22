/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:04:03 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainObject.h>

@class NSString, NSURL, SAUIImageResource;

@interface SAAISongTag : SADomainObject

@property (nonatomic,copy) NSString * adamId; 
@property (nonatomic,copy) NSString * album; 
@property (nonatomic,copy) NSString * albumAdamId; 
@property (nonatomic,copy) NSString * artist; 
@property (nonatomic,copy) NSString * artistAdamId; 
@property (nonatomic,copy) NSString * contentRating; 
@property (nonatomic,copy) NSURL * iTunesUri; 
@property (nonatomic,retain) SAUIImageResource * previewImage; 
@property (nonatomic,copy) NSURL * radioStationUri; 
@property (nonatomic,copy) NSString * title; 
+(id)songTag;
+(id)songTagWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSString *)adamId;
-(void)setAdamId:(NSString *)arg1 ;
-(NSString *)albumAdamId;
-(void)setAlbumAdamId:(NSString *)arg1 ;
-(NSString *)artistAdamId;
-(void)setArtistAdamId:(NSString *)arg1 ;
-(NSString *)contentRating;
-(void)setContentRating:(NSString *)arg1 ;
-(NSURL *)iTunesUri;
-(void)setITunesUri:(NSURL *)arg1 ;
-(void)setPreviewImage:(SAUIImageResource *)arg1 ;
-(NSURL *)radioStationUri;
-(void)setRadioStationUri:(NSURL *)arg1 ;
-(NSString *)artist;
-(void)setArtist:(NSString *)arg1 ;
-(NSString *)album;
-(void)setAlbum:(NSString *)arg1 ;
-(SAUIImageResource *)previewImage;
@end
