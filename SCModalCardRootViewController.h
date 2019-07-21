//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SCCardAnimationControllerDelegate-Protocol.h"

@class NSString, SCCardAnimationController, SCModalCardRootView, SCModalCardRootViewModel, UIView;
@protocol SCModalCardAnimationDelegte, SCScrollContentViewController, SCScrollViewContentProtocol;

@interface SCModalCardRootViewController : UIViewController <SCCardAnimationControllerDelegate>
{
    id <SCModalCardAnimationDelegte> _animationDelegate;
    SCModalCardRootView *_containerView;
    UIView<SCScrollViewContentProtocol> *_contentView;
    SCCardAnimationController *_cardAnimationController;
    struct CGPoint _contentViewPreviousYOffset;
    SCModalCardRootViewModel *_rootViewModel;
    _Bool _didDismiss;
    UIViewController<SCScrollContentViewController> *_contentViewController;
}

- (void).cxx_destruct;
- (void)_didDimissWithCompletion:(CDUnknownBlockType)arg1;
- (void)cardAnimationController:(id)arg1 didUpdateContentViewDismissPercentage:(double)arg2;
- (void)cardAnimationController:(id)arg1 startContentViewDismissAnimationWithDuration:(double)arg2;
- (void)cardAnimationController:(id)arg1 startContentViewPresentAnimationWithDuration:(double)arg2;
- (void)cardAnimationControllerPullGestureDidChange:(id)arg1;
- (void)cardAnimationControllerPullGestureDidEnd:(id)arg1;
- (_Bool)cardAnimationControllerPullGestureShouldStart:(id)arg1;
@property(readonly, nonatomic) UIViewController<SCScrollContentViewController> *contentViewController; // @synthesize contentViewController=_contentViewController;
- (void)dealloc;
- (void)dismissViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithContentViewController:(id)arg1 animationDelegate:(id)arg2 rootViewModel:(id)arg3;
- (void)loadView;
- (long long)preferredStatusBarStyle;
- (_Bool)shouldDismissViewControllerLater;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
