//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString, SCScheduledLensController;

@protocol SCScheduledLensControllerDelegate <NSObject>
- (void)scheduledLensController:(SCScheduledLensController *)arg1 didUpdateActiveData:(NSArray *)arg2 activeRearData:(NSArray *)arg3 preselectedLensId:(NSString *)arg4;
- (void)scheduledLensController:(SCScheduledLensController *)arg1 didUpdatePreCachedData:(NSArray *)arg2;
@end

