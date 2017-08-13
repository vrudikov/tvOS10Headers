//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSDate, NSString;

@protocol AEAnnotation <NSObject>
@property(readonly, nonatomic) int annotationStyle;
@property(readonly, retain, nonatomic) NSDate *annotationModificationDate;
@property(readonly, retain, nonatomic) NSDate *annotationCreationDate;
@property(readonly, retain, nonatomic) NSString *annotationUuid;
@property(readonly, retain, nonatomic) NSString *annotationSelectedText;
@property(readonly, retain, nonatomic) NSString *annotationRepresentativeText;
@property(readonly, retain, nonatomic) NSString *annotationNote;
@property(readonly, retain, nonatomic) NSString *annotationLocation;
@property(readonly, nonatomic) int annotationType;

@optional
@property(readonly, nonatomic) struct _NSRange annotationSelectedTextRange;
@property(readonly, retain, nonatomic) NSString *physicalPageNumber;
@property(readonly, retain, nonatomic) NSString *chapterTitle;
@property(readonly, nonatomic) _Bool annotationDeleted;
@property(readonly, retain, nonatomic) NSData *annotationUserData;
@property(readonly, nonatomic) _Bool annotationIsUnderline;
@end

