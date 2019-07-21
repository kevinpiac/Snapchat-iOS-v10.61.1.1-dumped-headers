//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"

@class NSString, UIPanGestureRecognizer, UIPercentDrivenInteractiveTransition;

@interface SCRightSwipeableViewController : UIViewController <UIGestureRecognizerDelegate, UINavigationControllerDelegate>
{
    UIPercentDrivenInteractiveTransition *_interactivePopTransition;
    UIPanGestureRecognizer *__rightSwipeRecognizer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIPanGestureRecognizer *_rightSwipeRecognizer; // @synthesize _rightSwipeRecognizer=__rightSwipeRecognizer;
- (void)dealloc;
- (void)handlePopRecognizer:(id)arg1;
- (_Bool)inValidView:(id)arg1;
@property(retain, nonatomic) UIPercentDrivenInteractiveTransition *interactivePopTransition; // @synthesize interactivePopTransition=_interactivePopTransition;
- (void)loadView;
- (id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (id)navigationController:(id)arg1 interactionControllerForAnimationController:(id)arg2;
- (_Bool)rightSwipeDisabled;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

