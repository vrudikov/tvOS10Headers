//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, PBSBulletin;

@protocol PBSBulletinServiceInterface <NSObject>
- (void)dismissBulletin:(PBSBulletin *)arg1;
- (PBSBulletin *)updateBulletin:(PBSBulletin *)arg1 withMessage:(NSDictionary *)arg2 withCompletion:(void (^)(_Bool, NSError *))arg3;
- (void)presentBulletin:(PBSBulletin *)arg1 withCompletion:(void (^)(_Bool, NSError *))arg2;
- (void)setDelegate:(id <PBSBulletinServiceDelegate>)arg1;
@end

