//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol SCProfileTransitionCoordinator;

@protocol SCProfileTransitionCoordinatorDelegate <NSObject>
- (void)transitionCoordinator:(id <SCProfileTransitionCoordinator>)arg1 didBeginWithTransitionType:(unsigned long long)arg2;
- (void)transitionCoordinator:(id <SCProfileTransitionCoordinator>)arg1 didCancelWithTransitionType:(unsigned long long)arg2;
- (void)transitionCoordinator:(id <SCProfileTransitionCoordinator>)arg1 didFinishWithTransitionType:(unsigned long long)arg2;
- (void)transitionCoordinator:(id <SCProfileTransitionCoordinator>)arg1 didUpdatePercentVisible:(double)arg2;
- (_Bool)transitionCoordinator:(id <SCProfileTransitionCoordinator>)arg1 shouldPerformTransitionWithType:(unsigned long long)arg2 interactive:(_Bool)arg3;
@end

