//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "UIViewControllerTransitioningDelegate-Protocol.h"

@protocol SCMapTransitionAnimator <UIViewControllerTransitioningDelegate>
- (void)cancelInteractiveTransition;
- (void)finishInteractiveTransition;
- (_Bool)isPresenting;
- (void)updateInteractiveTransition:(double)arg1;
@end
