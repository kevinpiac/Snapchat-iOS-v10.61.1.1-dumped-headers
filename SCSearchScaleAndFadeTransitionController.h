//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCSearchPercentDrivenInteractiveTransitioning-Protocol.h"
#import "UIViewControllerAnimatedTransitioning-Protocol.h"

@class NSString, SCSearchNavigationTransitionContext;

@interface SCSearchScaleAndFadeTransitionController : NSObject <UIViewControllerAnimatedTransitioning, SCSearchPercentDrivenInteractiveTransitioning>
{
    _Bool _isPresenting;
    SCSearchNavigationTransitionContext *_searchTransitionContext;
    long long _completionCurve;
    double _completionSpeed;
    double _scale;
    double _alpha;
}

- (void).cxx_destruct;
- (void)_handleAnimationCompletion:(_Bool)arg1;
- (void)_layoutWithPercentComplete:(double)arg1;
- (void)_prepareTransition;
@property(nonatomic) double alpha; // @synthesize alpha=_alpha;
- (void)animateTransition:(id)arg1;
- (void)cancelInteractiveTransition;
@property(readonly, nonatomic) long long completionCurve; // @synthesize completionCurve=_completionCurve;
@property(readonly, nonatomic) double completionSpeed; // @synthesize completionSpeed=_completionSpeed;
- (void)finishInteractiveTransition;
- (id)initWithPresenting:(_Bool)arg1;
@property(nonatomic) double scale; // @synthesize scale=_scale;
- (void)startInteractiveTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (void)updateInteractiveTransition:(double)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) _Bool wantsInteractiveStart;

@end
