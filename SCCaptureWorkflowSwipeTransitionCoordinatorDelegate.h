//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCSwipeTransitionCoordinatorDataSource-Protocol.h"
#import "SCSwipeTransitionCoordinatorDelegate-Protocol.h"

@class NSString, SCCameraViewController, SCSwipeTransitionCoordinator, UINavigationController;
@protocol SCCameraViewContaining;

@interface SCCaptureWorkflowSwipeTransitionCoordinatorDelegate : NSObject <SCSwipeTransitionCoordinatorDelegate, SCSwipeTransitionCoordinatorDataSource>
{
    id <SCCameraViewContaining> _cameraViewContainer;
    SCCameraViewController *_cameraViewController;
    UINavigationController *_navigationController;
    SCSwipeTransitionCoordinator *_cameraTransitionCoordinator;
}

- (void).cxx_destruct;
- (id)initWithCameraViewController:(id)arg1 navigationController:(id)arg2 cameraViewContainer:(id)arg3 cameraTransitionCoordinator:(id)arg4;
- (id)presentedViewControllerWithSwipeTransitionCoordinator:(id)arg1;
- (id)presentingViewControllerWithSwipeTransitionCoordinator:(id)arg1;
- (void)transitionCoordinator:(id)arg1 didBeginWithTransitionType:(unsigned long long)arg2 viewController:(id)arg3;
- (void)transitionCoordinator:(id)arg1 didFinishWithTransitionType:(unsigned long long)arg2 success:(_Bool)arg3 interactive:(_Bool)arg4 viewController:(id)arg5;
- (id)transitionCoordinator:(id)arg1 presentationControllerForPresentedViewController:(id)arg2 presentingViewController:(id)arg3;
- (_Bool)transitionCoordinator:(id)arg1 shouldBeginTransitionType:(unsigned long long)arg2 interactive:(_Bool)arg3 viewController:(id)arg4;
- (void)transitionCoordinator:(id)arg1 willBeginWithTransitionType:(unsigned long long)arg2 viewController:(id)arg3;
- (void)transitionCoordinator:(id)arg1 willFailWithTransitionType:(unsigned long long)arg2 viewController:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

