/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:10 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData, NSString;

@interface MFAttachmentRaw : NSObject {

	NSData* _data;
	NSString* _fileName;
	NSString* _mimeType;
	NSString* _contentID;

}

@property (nonatomic,retain) NSData * data;                    //@synthesize data=_data - In the implementation block
@property (nonatomic,retain) NSString * fileName;              //@synthesize fileName=_fileName - In the implementation block
@property (nonatomic,retain) NSString * mimeType;              //@synthesize mimeType=_mimeType - In the implementation block
@property (nonatomic,copy) NSString * contentID;               //@synthesize contentID=_contentID - In the implementation block
+(id)attachmentData:(id)arg1 fileName:(id)arg2 mimeType:(id)arg3 contentID:(id)arg4 ;
+(id)attachmentData:(id)arg1 fileName:(id)arg2 mimeType:(id)arg3 ;
-(void)dealloc;
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(NSString *)mimeType;
-(void)setContentID:(NSString *)arg1 ;
-(NSString *)contentID;
-(void)setMimeType:(NSString *)arg1 ;
-(NSString *)fileName;
-(void)setFileName:(NSString *)arg1 ;
@end
