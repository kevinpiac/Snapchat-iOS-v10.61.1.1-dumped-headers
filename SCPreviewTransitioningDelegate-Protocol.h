//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "UIViewControllerTransitioningDelegate-Protocol.h"

@class SCCameraViewController, SCFeature, UIView;
@protocol SCCameraTimer, SCFeatureCameraLiveDisplay, UIViewControllerAnimatedTransitioning, UIViewControllerInteractiveTransitioning;

@protocol SCPreviewTransitioningDelegate <UIViewControllerTransitioningDelegate>
@property(readonly, nonatomic) UIView<SCCameraTimer> *cameraTimer;
@property(nonatomic) __weak SCCameraViewController *cameraViewController;
@property(nonatomic) unsigned long long capturedMediaType;
@property(nonatomic) __weak id <UIViewControllerAnimatedTransitioning> customAnimatedTransitioningAnimator;
@property(nonatomic) __weak id <UIViewControllerInteractiveTransitioning> customInteractiveTransitioningAnimator;
@property(nonatomic) _Bool isAsync;
@property(nonatomic) _Bool isZeroAnimationDuration;
@property(nonatomic) __weak SCFeature<SCFeatureCameraLiveDisplay> *liveDisplayFeature;
- (void)resetCameraPreview;
@property(nonatomic) _Bool useLightPreviewTransitionBehavior;
- (void)startCamera;
@end

