//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMapTable, UIView, UIViewController;
@protocol UIViewControllerContextTransitioning;

@interface SCPassthroughViewsCoordinator : NSObject
{
    NSArray *_passthroughViews;
    NSMapTable *_passthroughSuperviewMap;
    id <UIViewControllerContextTransitioning> _transitionContext;
    UIView *_containerView;
    UIViewController *_toViewController;
}

- (void).cxx_destruct;
- (_Bool)_transitionWasCancelled;
- (void)_transplantPassthroughView:(id)arg1 fromView:(id)arg2 toView:(id)arg3;
- (id)animateTransition:(_Bool)arg1 containerView:(id)arg2 toViewController:(id)arg3 fromViewController:(id)arg4;
- (id)animateTransition:(id)arg1 presenting:(_Bool)arg2;
- (id)initWithPassthroughViews:(id)arg1;
- (void)resetTransplantedViews;

@end

