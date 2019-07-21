//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UIViewControllerAnimatedTransitioning-Protocol.h"
#import "UIViewControllerTransitioningDelegate-Protocol.h"

@class NSString, UIPanGestureRecognizer, UIViewController;
@protocol SCMapModalInteractionControllerDelegate;

@interface SCMapModalInteractionController : NSObject <UIViewControllerAnimatedTransitioning, UIViewControllerTransitioningDelegate>
{
    _Bool _interactiveDismissalInProgress;
    _Bool _dismissing;
    UIPanGestureRecognizer *_panGestureRecognizer;
    long long _interactionType;
    id <SCMapModalInteractionControllerDelegate> _delegate;
    UIViewController *_viewController;
}

- (void).cxx_destruct;
- (void)_beginInteractiveDismissal;
- (void)_endInteractiveDismissalWithVelocity:(double)arg1 gesturePercentToTravel:(double)arg2 complete:(_Bool)arg3;
- (void)_onPan:(id)arg1;
- (void)_updateInteractiveDismissal:(double)arg1;
- (void)animateTransition:(id)arg1;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
@property(nonatomic) __weak id <SCMapModalInteractionControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool dismissing; // @synthesize dismissing=_dismissing;
- (id)initWithViewController:(id)arg1 gestureRecognizerDelegate:(id)arg2 interactionType:(long long)arg3;
@property(readonly, nonatomic) long long interactionType; // @synthesize interactionType=_interactionType;
@property(nonatomic) _Bool interactiveDismissalInProgress; // @synthesize interactiveDismissalInProgress=_interactiveDismissalInProgress;
@property(retain, nonatomic) UIPanGestureRecognizer *panGestureRecognizer; // @synthesize panGestureRecognizer=_panGestureRecognizer;
@property(nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;
- (double)transitionDuration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
