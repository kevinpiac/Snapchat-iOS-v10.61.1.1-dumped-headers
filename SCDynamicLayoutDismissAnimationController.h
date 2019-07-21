//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIPercentDrivenInteractiveTransition.h>

#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UIViewControllerAnimatedTransitioning-Protocol.h"

@class NSString, UIPanGestureRecognizer;
@protocol SCDynamicLayoutDismissAnimationControllerDelegate;

@interface SCDynamicLayoutDismissAnimationController : UIPercentDrivenInteractiveTransition <UIGestureRecognizerDelegate, UIViewControllerAnimatedTransitioning>
{
    _Bool _isInteractive;
    id <SCDynamicLayoutDismissAnimationControllerDelegate> _delegate;
    UIPanGestureRecognizer *_panGestureRecognizer;
    unsigned long long _direction;
}

- (void).cxx_destruct;
- (void)_handleNavigationGesture:(id)arg1;
- (void)animateTransition:(id)arg1;
@property(nonatomic) __weak id <SCDynamicLayoutDismissAnimationControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) unsigned long long direction; // @synthesize direction=_direction;
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)initWithAnimationDirection:(unsigned long long)arg1;
@property(readonly, nonatomic) UIPanGestureRecognizer *panGestureRecognizer; // @synthesize panGestureRecognizer=_panGestureRecognizer;
- (double)transitionDuration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
