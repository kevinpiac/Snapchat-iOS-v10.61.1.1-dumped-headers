//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UIViewControllerAnimatedTransitioning-Protocol.h"

@class NSString, UIView;

@interface NYTPhotoTransitionAnimator : NSObject <UIViewControllerAnimatedTransitioning>
{
    _Bool _dismissing;
    UIView *_startingView;
    UIView *_endingView;
    UIView *_startingViewForAnimation;
    UIView *_endingViewForAnimation;
    double _animationDurationWithZooming;
    double _animationDurationWithoutZooming;
    double _animationDurationFadeRatio;
    double _animationDurationEndingViewFadeInRatio;
    double _animationDurationStartingViewFadeOutRatio;
    double _zoomingAnimationSpringDamping;
}

+ (struct CGPoint)centerPointForView:(id)arg1 translatedToContainerView:(id)arg2;
+ (id)newAnimationViewFromView:(id)arg1;
- (void).cxx_destruct;
- (void)animateTransition:(id)arg1;
@property(nonatomic) double animationDurationEndingViewFadeInRatio; // @synthesize animationDurationEndingViewFadeInRatio=_animationDurationEndingViewFadeInRatio;
@property(nonatomic) double animationDurationFadeRatio; // @synthesize animationDurationFadeRatio=_animationDurationFadeRatio;
@property(nonatomic) double animationDurationStartingViewFadeOutRatio; // @synthesize animationDurationStartingViewFadeOutRatio=_animationDurationStartingViewFadeOutRatio;
@property(nonatomic) double animationDurationWithZooming; // @synthesize animationDurationWithZooming=_animationDurationWithZooming;
@property(nonatomic) double animationDurationWithoutZooming; // @synthesize animationDurationWithoutZooming=_animationDurationWithoutZooming;
- (void)completeTransitionWithTransitionContext:(id)arg1;
@property(retain, nonatomic) UIView *endingView; // @synthesize endingView=_endingView;
@property(retain, nonatomic) UIView *endingViewForAnimation; // @synthesize endingViewForAnimation=_endingViewForAnimation;
- (double)fadeDurationForTransitionContext:(id)arg1;
- (id)init;
@property(nonatomic, getter=isDismissing) _Bool dismissing; // @synthesize dismissing=_dismissing;
- (void)performFadeAnimationWithTransitionContext:(id)arg1;
- (void)performZoomingAnimationWithTransitionContext:(id)arg1;
@property(retain, nonatomic) UIView *startingView; // @synthesize startingView=_startingView;
@property(retain, nonatomic) UIView *startingViewForAnimation; // @synthesize startingViewForAnimation=_startingViewForAnimation;
@property(nonatomic) double zoomingAnimationSpringDamping; // @synthesize zoomingAnimationSpringDamping=_zoomingAnimationSpringDamping;
- (void)setupTransitionContainerHierarchyWithTransitionContext:(id)arg1;
@property(readonly, nonatomic) _Bool shouldPerformZoomingAnimation;
- (double)transitionDuration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

