//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol SCMapTransitionAnimator;

@protocol SCMapTransitionAnimatorDelegate <NSObject>

@optional
- (void)transitionAnimatorDidBegin:(id <SCMapTransitionAnimator>)arg1;
- (void)transitionAnimatorDidCancel:(id <SCMapTransitionAnimator>)arg1;
- (void)transitionAnimatorDidComplete:(id <SCMapTransitionAnimator>)arg1;
- (_Bool)transitionAnimatorShouldBeInteractive:(id <SCMapTransitionAnimator>)arg1;
- (_Bool)transitionAnimatorShouldShowTabView:(id <SCMapTransitionAnimator>)arg1;
@end
