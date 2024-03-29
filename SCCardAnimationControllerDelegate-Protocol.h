//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SCCardAnimationController;

@protocol SCCardAnimationControllerDelegate <NSObject>
- (void)cardAnimationController:(SCCardAnimationController *)arg1 didUpdateContentViewDismissPercentage:(double)arg2;
- (void)cardAnimationController:(SCCardAnimationController *)arg1 startContentViewDismissAnimationWithDuration:(double)arg2;
- (void)cardAnimationController:(SCCardAnimationController *)arg1 startContentViewPresentAnimationWithDuration:(double)arg2;

@optional
- (void)cardAnimationControllerPullGestureDidChange:(SCCardAnimationController *)arg1;
- (void)cardAnimationControllerPullGestureDidEnd:(SCCardAnimationController *)arg1;
- (_Bool)cardAnimationControllerPullGestureShouldStart:(SCCardAnimationController *)arg1;
@end

