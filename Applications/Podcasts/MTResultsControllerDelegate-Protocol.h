//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MTResultsController, NSIndexPath;

@protocol MTResultsControllerDelegate <NSObject>
- (void)controller:(MTResultsController *)arg1 didChangeObject:(id)arg2 atIndexPath:(NSIndexPath *)arg3 forChangeType:(unsigned long long)arg4 newIndexPath:(NSIndexPath *)arg5;
- (void)controllerDidChangeContent:(MTResultsController *)arg1;
- (void)controllerWillChangeContent:(MTResultsController *)arg1;
@end

