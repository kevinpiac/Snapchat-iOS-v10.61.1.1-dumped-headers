//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class SCMapGhostModeTimerController;

@protocol SCMapGhostModeTimerControllerDelegate
- (void)ghostModeTimerController:(SCMapGhostModeTimerController *)arg1 wantsToRefreshLocationSharingPreferencesWithCompletion:(void (^)(SCMTGetShareLocationPreferencesResponse *))arg2;
- (void)ghostModeTimerControllerWantsToExitGhostMode:(SCMapGhostModeTimerController *)arg1;
@end
