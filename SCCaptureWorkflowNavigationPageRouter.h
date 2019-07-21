//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCCaptureWorkflowPageRouter-Protocol.h"

@class NSString, SCCameraViewController, SCCaptureWorkflowSwipeTransitionCoordinatorDelegate, SCSwipeTransitionCoordinator, UINavigationController;
@protocol SCCameraViewContaining;

@interface SCCaptureWorkflowNavigationPageRouter : NSObject <SCCaptureWorkflowPageRouter>
{
    id <SCCameraViewContaining> _cameraViewContainer;
    SCCameraViewController *_cameraViewController;
    UINavigationController *_navigationController;
    SCSwipeTransitionCoordinator *_cameraTransitionCoordinator;
    SCCaptureWorkflowSwipeTransitionCoordinatorDelegate *_coordinatorDelegate;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) SCCameraViewController *cameraViewController; // @synthesize cameraViewController=_cameraViewController;
- (void)dismissCameraWithCompletion:(CDUnknownBlockType)arg1;
- (void)dismissPreview:(id)arg1;
- (id)initWithCameraViewContainer:(id)arg1 featureProvider:(struct SCFeatureProvider *)arg2 lensDataProvider:(id)arg3;
- (_Bool)shouldDismissWorkflowOnBackground;
- (void)showCameraWithDelegate:(id)arg1 cameraViewConfigurationController:(id)arg2 completion:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
