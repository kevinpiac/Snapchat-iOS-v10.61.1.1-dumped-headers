//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, SCCameraOverlayView, SCCameraViewControllerLensesProperties, SCCameraVolumeButtonHandler, SCFeatureCoordinator, SCImageCaptureConfiguration, SCLazy, SCLensDataProviderProxy, SCLensesUIAppearanceConfiguration, SCLensesUIControllerState, SCManagedCapturerState, SCReplyParameters, SCVideoCaptureConfiguration, UIView;
@protocol SCLensCameraScreenDataProviderProtocol, SCPreviewPresenter;

@interface SCCameraViewControllerInternalState : NSObject
{
    _Bool _duringLongPress;
    _Bool _isCreateYourOwnODLFlowPresented;
    _Bool _isResigningActive;
    _Bool _shouldRestoreStartRecordingState;
    _Bool _hasActivatedFeatures;
    SCCameraOverlayView *_cameraOverlay;
    SCLazy *_searchEventAnnouncerCreator;
    UIView *_cameraView;
    UIView *_cameraViewHolder;
    UIView *_tabBarGradientView;
    UIView *_navBarGradientView;
    SCFeatureCoordinator *_featureCoordinator;
    SCCameraVolumeButtonHandler *_volumeButtonHandler;
    double _overlayItemsAlpha;
    double _overlayItemsYOffset;
    double _lastSuccessfulLensActivationTime;
    long long _cameraViewType;
    unsigned long long _recordingState;
    unsigned long long _appearanceState;
    NSString *_lockRingingToken;
    SCManagedCapturerState *_managedCapturerState;
    double _cameraStartTime;
    id <SCPreviewPresenter> _previewPresenter;
    SCReplyParameters *_replyParameters;
    SCLensesUIControllerState *_lensControllerStateToRestore;
    SCLensesUIAppearanceConfiguration *_lensControllerAppearanceConfigurationToRestore;
    SCCameraViewControllerLensesProperties *_lensProperties;
    SCLensDataProviderProxy *_lensDataProviderProxy;
    CDUnknownBlockType _resetLensStateBlock;
    id <SCLensCameraScreenDataProviderProtocol> _initialLensDataProvider;
    SCImageCaptureConfiguration *_imageCaptureConfiguration;
    SCVideoCaptureConfiguration *_videoCaptureConfiguration;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long appearanceState; // @synthesize appearanceState=_appearanceState;
@property(retain, nonatomic) SCCameraOverlayView *cameraOverlay; // @synthesize cameraOverlay=_cameraOverlay;
@property(nonatomic) double cameraStartTime; // @synthesize cameraStartTime=_cameraStartTime;
@property(retain, nonatomic) UIView *cameraView; // @synthesize cameraView=_cameraView;
@property(retain, nonatomic) UIView *cameraViewHolder; // @synthesize cameraViewHolder=_cameraViewHolder;
@property(nonatomic) long long cameraViewType; // @synthesize cameraViewType=_cameraViewType;
@property(nonatomic) _Bool duringLongPress; // @synthesize duringLongPress=_duringLongPress;
@property(retain, nonatomic) SCFeatureCoordinator *featureCoordinator; // @synthesize featureCoordinator=_featureCoordinator;
@property(nonatomic) _Bool hasActivatedFeatures; // @synthesize hasActivatedFeatures=_hasActivatedFeatures;
@property(retain, nonatomic) SCImageCaptureConfiguration *imageCaptureConfiguration; // @synthesize imageCaptureConfiguration=_imageCaptureConfiguration;
@property(retain, nonatomic) id <SCLensCameraScreenDataProviderProtocol> initialLensDataProvider; // @synthesize initialLensDataProvider=_initialLensDataProvider;
@property(nonatomic) _Bool isCreateYourOwnODLFlowPresented; // @synthesize isCreateYourOwnODLFlowPresented=_isCreateYourOwnODLFlowPresented;
@property(nonatomic) _Bool isResigningActive; // @synthesize isResigningActive=_isResigningActive;
@property(nonatomic) double lastSuccessfulLensActivationTime; // @synthesize lastSuccessfulLensActivationTime=_lastSuccessfulLensActivationTime;
@property(retain, nonatomic) SCLensesUIAppearanceConfiguration *lensControllerAppearanceConfigurationToRestore; // @synthesize lensControllerAppearanceConfigurationToRestore=_lensControllerAppearanceConfigurationToRestore;
@property(retain, nonatomic) SCLensesUIControllerState *lensControllerStateToRestore; // @synthesize lensControllerStateToRestore=_lensControllerStateToRestore;
@property(retain, nonatomic) SCLensDataProviderProxy *lensDataProviderProxy; // @synthesize lensDataProviderProxy=_lensDataProviderProxy;
@property(retain, nonatomic) SCCameraViewControllerLensesProperties *lensProperties; // @synthesize lensProperties=_lensProperties;
@property(retain, nonatomic) NSString *lockRingingToken; // @synthesize lockRingingToken=_lockRingingToken;
@property(retain, nonatomic) SCManagedCapturerState *managedCapturerState; // @synthesize managedCapturerState=_managedCapturerState;
@property(retain, nonatomic) UIView *navBarGradientView; // @synthesize navBarGradientView=_navBarGradientView;
@property(nonatomic) double overlayItemsAlpha; // @synthesize overlayItemsAlpha=_overlayItemsAlpha;
@property(nonatomic) double overlayItemsYOffset; // @synthesize overlayItemsYOffset=_overlayItemsYOffset;
@property(retain, nonatomic) id <SCPreviewPresenter> previewPresenter; // @synthesize previewPresenter=_previewPresenter;
@property(nonatomic) unsigned long long recordingState; // @synthesize recordingState=_recordingState;
@property(retain, nonatomic) SCReplyParameters *replyParameters; // @synthesize replyParameters=_replyParameters;
@property(copy, nonatomic) CDUnknownBlockType resetLensStateBlock; // @synthesize resetLensStateBlock=_resetLensStateBlock;
@property(retain, nonatomic) SCLazy *searchEventAnnouncerCreator; // @synthesize searchEventAnnouncerCreator=_searchEventAnnouncerCreator;
@property(nonatomic) _Bool shouldRestoreStartRecordingState; // @synthesize shouldRestoreStartRecordingState=_shouldRestoreStartRecordingState;
@property(retain, nonatomic) UIView *tabBarGradientView; // @synthesize tabBarGradientView=_tabBarGradientView;
@property(retain, nonatomic) SCVideoCaptureConfiguration *videoCaptureConfiguration; // @synthesize videoCaptureConfiguration=_videoCaptureConfiguration;
@property(retain, nonatomic) SCCameraVolumeButtonHandler *volumeButtonHandler; // @synthesize volumeButtonHandler=_volumeButtonHandler;

@end

