//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, TVSDataClientResultsController, TVSDataQuery;

@protocol TVSDataClientResultsControllerDelegate <NSObject>

@optional
- (_Bool)controller:(TVSDataClientResultsController *)arg1 shouldHandleUpdate:(NSDictionary *)arg2;
- (void)controller:(TVSDataClientResultsController *)arg1 didFailQuery:(TVSDataQuery *)arg2;
- (void)controller:(TVSDataClientResultsController *)arg1 didChangeResultsForQuery:(TVSDataQuery *)arg2;
- (void)controller:(TVSDataClientResultsController *)arg1 willChangeResultsForQuery:(TVSDataQuery *)arg2;
@end

