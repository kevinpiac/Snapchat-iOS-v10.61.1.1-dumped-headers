//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCFeature.h"

#import "SCCameraGestureResponder-Protocol.h"
#import "SCCameraToolbarItemProvider-Protocol.h"
#import "SCCaptureWorkflowTransitionAnimatableFeature-Protocol.h"
#import "SCFeatureNightMode-Protocol.h"
#import "SCManagedCapturerListener-Protocol.h"

@class NSString, SCCameraToolbarItem, SCDisposableObserverLifecycle, SCFeatureReference, SCLogger, SCManagedCapturerState, UIView;
@protocol SCCapturer, SCFeatureCameraToolbar, SCFeatureContainerView, SCPreviewPresenter, SCProcessingModule;

@interface SCFeatureNightModeImpl : SCFeature <SCManagedCapturerListener, SCFeatureNightMode, SCCameraGestureResponder, SCCameraToolbarItemProvider, SCCaptureWorkflowTransitionAnimatableFeature>
{
    _Bool _canEnable;
    _Bool _didUserToggleWithinCaptureSession;
    id <SCPreviewPresenter> _previewPresenter;
    id <SCCapturer> _capturer;
    SCManagedCapturerState *_managedCapturerState;
    UIView<SCFeatureContainerView> *_containerView;
    id <SCFeatureCameraToolbar> _cameraToolbar;
    SCCameraToolbarItem *_toolbarItem;
    SCLogger *_logger;
    SCFeatureReference *_cameraUserActionLogger;
    SCDisposableObserverLifecycle *_appLifecycle;
    SCDisposableObserverLifecycle *_vcLifecycle;
    unsigned long long _nightModeButtonTapCount;
    id <SCProcessingModule> _nightModeModule;
}

- (void).cxx_destruct;
- (void)_appDidEnterBackground;
- (id)_createToolbarItemWithToolbar:(id)arg1;
- (void)_didEndRecording;
- (void)_didStartRecording:(id)arg1;
- (_Bool)_hasNightModeConditions:(id)arg1;
- (void)_hideWithDelayIfNeeded;
- (_Bool)_isNightModeHidden;
- (void)_nightModeButtonTapped;
- (void)_reset;
- (void)_setNightModeActive:(_Bool)arg1;
- (_Bool)_shouldShowNightModeButton:(id)arg1;
- (void)_updateNightModeButtonWithState:(id)arg1;
- (void)_viewDidAppear;
@property(retain, nonatomic) SCDisposableObserverLifecycle *appLifecycle; // @synthesize appLifecycle=_appLifecycle;
@property(nonatomic) __weak id <SCFeatureCameraToolbar> cameraToolbar; // @synthesize cameraToolbar=_cameraToolbar;
@property(retain, nonatomic) SCFeatureReference *cameraUserActionLogger; // @synthesize cameraUserActionLogger=_cameraUserActionLogger;
@property(nonatomic) _Bool canEnable; // @synthesize canEnable=_canEnable;
@property(retain, nonatomic) id <SCCapturer> capturer; // @synthesize capturer=_capturer;
- (void)configureWithCameraToolbar:(id)arg1;
- (void)configureWithView:(id)arg1;
@property(nonatomic) __weak UIView<SCFeatureContainerView> *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) _Bool didUserToggleWithinCaptureSession; // @synthesize didUserToggleWithinCaptureSession=_didUserToggleWithinCaptureSession;
- (void)forwardCameraOverlayTapGesture:(id)arg1;
- (id)initWithCapturer:(id)arg1 logger:(id)arg2 applicationLifecycleEvents:(id)arg3 viewControllerLifecycleEvents:(id)arg4 cameraUserActionLogger:(id)arg5;
@property(retain, nonatomic) SCLogger *logger; // @synthesize logger=_logger;
- (void)managedCapturer:(id)arg1 didBeginVideoRecording:(id)arg2 session:(CDStruct_4565c1ff)arg3;
- (void)managedCapturer:(id)arg1 didCancelRecording:(id)arg2 session:(CDStruct_4565c1ff)arg3;
- (void)managedCapturer:(id)arg1 didCapturePhoto:(id)arg2;
- (void)managedCapturer:(id)arg1 didChangeARSessionActive:(id)arg2;
- (void)managedCapturer:(id)arg1 didChangeCaptureDevicePosition:(id)arg2;
- (void)managedCapturer:(id)arg1 didChangeLowLightCondition:(id)arg2;
- (void)managedCapturer:(id)arg1 didChangeNightModeActive:(id)arg2;
- (void)managedCapturer:(id)arg1 didChangePortraitModeActive:(id)arg2;
- (void)managedCapturer:(id)arg1 didChangeState:(id)arg2;
- (void)managedCapturer:(id)arg1 didFailRecording:(id)arg2 session:(CDStruct_4565c1ff)arg3 error:(id)arg4;
- (void)managedCapturer:(id)arg1 didFinishRecording:(id)arg2 session:(CDStruct_4565c1ff)arg3 recordedVideo:(id)arg4;
- (void)managedCapturer:(id)arg1 willCapturePhoto:(id)arg2 sampleMetadata:(id)arg3;
@property(retain, nonatomic) SCManagedCapturerState *managedCapturerState; // @synthesize managedCapturerState=_managedCapturerState;
@property(nonatomic) unsigned long long nightModeButtonTapCount; // @synthesize nightModeButtonTapCount=_nightModeButtonTapCount;
@property(retain, nonatomic) id <SCProcessingModule> nightModeModule; // @synthesize nightModeModule=_nightModeModule;
@property(nonatomic) __weak id <SCPreviewPresenter> previewPresenter; // @synthesize previewPresenter=_previewPresenter;
- (void)resetMetrics;
@property(retain, nonatomic) SCCameraToolbarItem *toolbarItem; // @synthesize toolbarItem=_toolbarItem;
@property(retain, nonatomic) SCDisposableObserverLifecycle *vcLifecycle; // @synthesize vcLifecycle=_vcLifecycle;
- (void)startAnimation:(CDUnknownBlockType)arg1;
- (id)usageMetrics;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

