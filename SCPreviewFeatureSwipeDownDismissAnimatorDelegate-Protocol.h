//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol SCPreviewFeatureSwipeDownDismissAnimating;

@protocol SCPreviewFeatureSwipeDownDismissAnimatorDelegate <NSObject>
- (void)animatorDidCancelTransition:(id <SCPreviewFeatureSwipeDownDismissAnimating>)arg1;
- (void)animatorDismissPreviewWithSwipeDown:(id <SCPreviewFeatureSwipeDownDismissAnimating>)arg1;
- (void)animatorShouldStartInteractiveTransitionOnGestureBegan:(id <SCPreviewFeatureSwipeDownDismissAnimating>)arg1;
- (void)animatorWillFinishTransition:(id <SCPreviewFeatureSwipeDownDismissAnimating>)arg1;
- (void)animatorWillStartTransition:(id <SCPreviewFeatureSwipeDownDismissAnimating>)arg1;
@end

