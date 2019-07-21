//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCFeature.h"

#import "SCCameraToolbarItemProvider-Protocol.h"
#import "SCFeaturePortraitMode-Protocol.h"
#import "SCManagedCapturerListener-Protocol.h"
#import "SCPortraitModeFilterListener-Protocol.h"

@class NSDictionary, NSString, SCCameraToolbarItem, SCCoreCameraDownloadableContentManager, SCDisposableObserverLifecycle, SCFeatureReference, SCManagedCapturerState, SCPortraitModeFaceBoundsView, SCPortraitModeHintPresenter, SCQueuePerformer, SCUserSession, UIImageView, UILabel, UIView;
@protocol SCCapturer, SCFeatureCameraToolbar, SCFeatureContainerView, SCProcessingModule;

@interface SCFeaturePortraitModeImpl : SCFeature <SCManagedCapturerListener, SCPortraitModeFilterListener, SCFeaturePortraitMode, SCCameraToolbarItemProvider>
{
    SCDisposableObserverLifecycle *_appLifecycle;
    unsigned long long _portraitModeButtonTapCount;
    _Bool _enabled;
    _Bool _shouldShowFaceBounds;
    float _lastHintPercentage;
    id <SCCapturer> _capturer;
    SCFeatureReference *_cameraUserActionLogger;
    SCManagedCapturerState *_managedCapturerState;
    SCUserSession *_userSession;
    NSDictionary *_faceBoundsByFaceID;
    SCQueuePerformer *_filePerformer;
    SCCoreCameraDownloadableContentManager *_downloadManager;
    id <SCProcessingModule> _portraitModule;
    double _faceArea;
    UIView<SCFeatureContainerView> *_containerView;
    SCDisposableObserverLifecycle *_vcLifecycle;
    SCPortraitModeHintPresenter *_portraitModeHintPresenter;
    SCPortraitModeFaceBoundsView *_faceBoundsView;
    UIImageView *_buttonIconView;
    UILabel *_hintLabel;
    double _updateHintTime;
    double _faceBoundsShowTime;
    double _faceBoundsMoveTime;
    long long _lastHintType;
    id <SCFeatureCameraToolbar> _cameraToolbar;
    SCCameraToolbarItem *_toolbarItem;
    struct CGRect _faceRect;
}

- (void).cxx_destruct;
- (void)_appDidEnterBackground;
- (double)_areaForRect:(struct CGRect)arg1;
- (void)_checkAndDownloadModelFileIfNecessary;
- (id)_createButtonIconView;
- (id)_createFaceBoundsView;
- (id)_createHintLabel;
- (id)_createToolbarItem;
- (void)_didEndRecording;
- (void)_didStartRecording;
- (float)_distanceBetween:(struct CGPoint)arg1 and:(struct CGPoint)arg2;
- (void)_downloadModel:(id)arg1;
- (_Bool)_faceBoundsIntervalExceedThreshold;
- (struct CGRect)_faceRectInCameraOverlay:(struct CGRect)arg1;
- (struct CGRect)_maxFaceRect:(id)arg1;
- (void)_setPortraitModeActive:(_Bool)arg1;
- (void)_toolbarButtonChangeSelected:(_Bool)arg1;
- (void)_updateFaceBounds:(id)arg1;
- (void)_updateHints:(float)arg1;
- (void)activate;
@property(retain, nonatomic) UIImageView *buttonIconView; // @synthesize buttonIconView=_buttonIconView;
@property(retain, nonatomic) id <SCFeatureCameraToolbar> cameraToolbar; // @synthesize cameraToolbar=_cameraToolbar;
@property(retain, nonatomic) SCFeatureReference *cameraUserActionLogger; // @synthesize cameraUserActionLogger=_cameraUserActionLogger;
@property(retain, nonatomic) id <SCCapturer> capturer; // @synthesize capturer=_capturer;
- (void)checkAndStartRendering;
- (void)checkAndStopRendering;
- (void)configureWithCameraToolbar:(id)arg1;
- (void)configureWithView:(id)arg1;
@property(nonatomic) __weak UIView<SCFeatureContainerView> *containerView; // @synthesize containerView=_containerView;
- (void)dealloc;
- (void)didToggleToDevicePosition;
@property(retain, nonatomic) SCCoreCameraDownloadableContentManager *downloadManager; // @synthesize downloadManager=_downloadManager;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
@property(nonatomic) double faceArea; // @synthesize faceArea=_faceArea;
@property(retain, nonatomic) NSDictionary *faceBoundsByFaceID; // @synthesize faceBoundsByFaceID=_faceBoundsByFaceID;
@property(nonatomic) double faceBoundsMoveTime; // @synthesize faceBoundsMoveTime=_faceBoundsMoveTime;
@property(nonatomic) double faceBoundsShowTime; // @synthesize faceBoundsShowTime=_faceBoundsShowTime;
@property(retain, nonatomic) SCPortraitModeFaceBoundsView *faceBoundsView; // @synthesize faceBoundsView=_faceBoundsView;
@property(nonatomic) struct CGRect faceRect; // @synthesize faceRect=_faceRect;
@property(retain, nonatomic) SCQueuePerformer *filePerformer; // @synthesize filePerformer=_filePerformer;
@property(retain, nonatomic) UILabel *hintLabel; // @synthesize hintLabel=_hintLabel;
- (id)initWithCapturer:(id)arg1 userSession:(id)arg2 applicationLifecycleEvents:(id)arg3 cameraUserActionLogger:(id)arg4;
@property(nonatomic) float lastHintPercentage; // @synthesize lastHintPercentage=_lastHintPercentage;
@property(nonatomic) long long lastHintType; // @synthesize lastHintType=_lastHintType;
- (void)managedCapturer:(id)arg1 didBeginVideoRecording:(id)arg2 session:(CDStruct_4565c1ff)arg3;
- (void)managedCapturer:(id)arg1 didCancelRecording:(id)arg2 session:(CDStruct_4565c1ff)arg3;
- (void)managedCapturer:(id)arg1 didCapturePhoto:(id)arg2;
- (void)managedCapturer:(id)arg1 didChangeLensesActive:(id)arg2;
- (void)managedCapturer:(id)arg1 didChangeNightModeActive:(id)arg2;
- (void)managedCapturer:(id)arg1 didChangePortraitModeActive:(id)arg2;
- (void)managedCapturer:(id)arg1 didChangeState:(id)arg2;
- (void)managedCapturer:(id)arg1 didDetectFaceBounds:(id)arg2;
- (void)managedCapturer:(id)arg1 didFailRecording:(id)arg2 session:(CDStruct_4565c1ff)arg3 error:(id)arg4;
- (void)managedCapturer:(id)arg1 didFinishRecording:(id)arg2 session:(CDStruct_4565c1ff)arg3 recordedVideo:(id)arg4;
- (void)managedCapturer:(id)arg1 willCapturePhoto:(id)arg2 sampleMetadata:(id)arg3;
@property(retain, nonatomic) SCManagedCapturerState *managedCapturerState; // @synthesize managedCapturerState=_managedCapturerState;
- (void)portraitModeFilter:(id)arg1 didUpdatePortraitPercentage:(float)arg2;
@property(retain, nonatomic) SCPortraitModeHintPresenter *portraitModeHintPresenter; // @synthesize portraitModeHintPresenter=_portraitModeHintPresenter;
@property(retain, nonatomic) id <SCProcessingModule> portraitModule; // @synthesize portraitModule=_portraitModule;
- (void)resetMetrics;
@property(nonatomic) _Bool shouldShowFaceBounds; // @synthesize shouldShowFaceBounds=_shouldShowFaceBounds;
@property(retain, nonatomic) SCCameraToolbarItem *toolbarItem; // @synthesize toolbarItem=_toolbarItem;
@property(nonatomic) double updateHintTime; // @synthesize updateHintTime=_updateHintTime;
@property(retain, nonatomic) SCDisposableObserverLifecycle *vcLifecycle; // @synthesize vcLifecycle=_vcLifecycle;
- (id)usageMetrics;
@property(readonly, nonatomic) SCUserSession *userSession; // @synthesize userSession=_userSession;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

