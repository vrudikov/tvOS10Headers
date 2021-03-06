/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:40 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVItem.h>

@class CoreDAVItemWithNoChildren, CalDAVCalendarServerUpdateItem, CalDAVCalendarServerCancelItem, CalDAVCalendarServerReplyItem;

@interface CalDAVCalendarServerActionItem : CoreDAVItem {

	CoreDAVItemWithNoChildren* _create;
	CalDAVCalendarServerUpdateItem* _update;
	CalDAVCalendarServerCancelItem* _cancel;
	CalDAVCalendarServerReplyItem* _reply;

}

@property (nonatomic,retain) CoreDAVItemWithNoChildren * create;                   //@synthesize create=_create - In the implementation block
@property (nonatomic,retain) CalDAVCalendarServerUpdateItem * update;              //@synthesize update=_update - In the implementation block
@property (nonatomic,retain) CalDAVCalendarServerCancelItem * cancel;              //@synthesize cancel=_cancel - In the implementation block
@property (nonatomic,retain) CalDAVCalendarServerReplyItem * reply;                //@synthesize reply=_reply - In the implementation block
-(CalDAVCalendarServerCancelItem *)cancel;
-(id)init;
-(CalDAVCalendarServerUpdateItem *)update;
-(CalDAVCalendarServerReplyItem *)reply;
-(CoreDAVItemWithNoChildren *)create;
-(void)setCancel:(CalDAVCalendarServerCancelItem *)arg1 ;
-(void)setReply:(CalDAVCalendarServerReplyItem *)arg1 ;
-(void)setUpdate:(CalDAVCalendarServerUpdateItem *)arg1 ;
-(id)copyParseRules;
-(void)setCreate:(CoreDAVItemWithNoChildren *)arg1 ;
@end

