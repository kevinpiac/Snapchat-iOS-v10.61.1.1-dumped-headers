//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCBaseLensesUIController.h"

#import "SCCameraLensesControllerProtocol-Protocol.h"
#import "SCLensEntryPointTrackableProtocol-Protocol.h"
#import "SCTraceEnabled-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSObject, NSString, SCArcadiaUIController, SCCameraLensesInteractor, SCCameraLensesSnappablesSelectionHandler, SCExperimentManager, SCGrowingButton, SCLensAnalyticsDataManger, SCLensCoreAnalyticsListener, SCLensEntryPointProvider, SCLensEntryPointTracker, SCLensInfoController, SCLensUnlockedFilterImageHelper, SCSnappablesPlayButton, SCUserSession, UIButton, UILongPressGestureRecognizer, UITapGestureRecognizer, UIView;
@protocol OS_dispatch_queue, SCCameraOverlayDelegate, SCFeatureSceneIntelligence, SCLensCameraScreenDataProviderProtocol, SCStudioLensLogger;

@interface SCCameraLensesUIController : SCBaseLensesUIController <SCTraceEnabled, UIGestureRecognizerDelegate, SCCameraLensesControllerProtocol, SCLensEntryPointTrackableProtocol>
{
    SCCameraLensesInteractor *_interactor;
    SCArcadiaUIController *_arcadiaUIController;
    SCLensCoreAnalyticsListener *_coreAnalyticsListener;
    SCLensEntryPointProvider *_lensEntryPointProvider;
    SCLensEntryPointTracker *_lensEntryPointTracker;
    SCLensUnlockedFilterImageHelper *_unlockedFilterImageHelper;
    id <SCStudioLensLogger> _studioLensLogger;
    SCCameraLensesSnappablesSelectionHandler *_snappableSelectionHandler;
    UITapGestureRecognizer *_snappablesPlayButtonTapGestureRecognizer;
    UILongPressGestureRecognizer *_snappablesPlayButtonLongPressGestureRecognizer;
    SCGrowingButton *_exitFullScreenButton;
    _Bool _allInterfaceElementsHidden;
    NSString *_loadingSnappableLensId;
    NSString *_scrolledFromSnappableLensId;
    UIView *_lensControlsContainer;
    SCUserSession *_userSession;
    _Bool _closeButtonSetHidden;
    id <SCFeatureSceneIntelligence> _sceneIntelligence;
    _Bool _isPlayingSnappable;
    SCExperimentManager *_experimentManager;
    id <SCCameraOverlayDelegate> _cameraViewDelegate;
    SCGrowingButton *_infoButton;
    SCLensAnalyticsDataManger *_lensAnalyticsDataManager;
    SCLensInfoController *_lensInfoController;
    NSObject<OS_dispatch_queue> *_lookseryProfilingEngineSerialQueue;
    UIButton *_ctaButton;
    SCGrowingButton *_lensesOpenCloseButton;
}

+ (id)lensPageViewName;
- (void).cxx_destruct;
- (void)_activateSnappablesPlayButtonWithGradientColors:(id)arg1;
- (void)_addExitFullScreenButton;
- (id)_ctaTitleForLens:(id)arg1;
- (void)_exitFullScreenButtonTapped:(id)arg1;
- (id)_fallbackCtaTitleForLens:(id)arg1;
- (void)_hideSnappablesPlayButton;
- (_Bool)_isCurrentLensLoadingInProgress;
- (_Bool)_isSnappablesPlayButtonVisible;
- (void)_lensCoreHandledAnExceptionNotificationReceived:(id)arg1;
- (_Bool)_pointInsideLensView:(struct CGPoint)arg1 cellFramesOnly:(_Bool)arg2;
- (void)_preloadLensInfoControllerForLensIfNeeded:(id)arg1;
- (void)_prepareLensControlsContainer;
- (void)_removeExitFullScreenButton;
- (void)_removeSnappablesPlayButton;
- (void)_removeSnappablesPlayButtonGestureRecognizersIfNeeded;
- (void)_setAllInterfaceElementsHidden:(_Bool)arg1;
- (void)_setSnapButtonHidden:(_Bool)arg1;
- (void)_setVolumeHandlingEnabled:(_Bool)arg1;
- (void)_showLoadingSnappablesPlayButtonWithGradientColors:(id)arg1;
- (void)_snappablesPlayButtonTapped:(id)arg1;
- (void)activateLens:(id)arg1 launchData:(id)arg2 setLensCompletion:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (id)activeLensIcon;
@property(readonly, nonatomic) _Bool allInterfaceElementsHidden; // @synthesize allInterfaceElementsHidden=_allInterfaceElementsHidden;
- (void)applyCollectionViewConstraints:(id)arg1;
- (_Bool)blockTouchesForCurrentLensWithNormalizedTouchPoints:(id)arg1 touchTypeMask:(unsigned long long)arg2;
@property(nonatomic) __weak id <SCCameraOverlayDelegate> cameraViewDelegate; // @synthesize cameraViewDelegate=_cameraViewDelegate;
- (void)cleanup;
@property(retain, nonatomic) UIButton *ctaButton; // @synthesize ctaButton=_ctaButton;
- (void)ctaButtonPressed;
- (void)dealloc;
- (void)didEnterPreview;
- (_Bool)disallowSnapRecording;
- (void)effectComponent:(id)arg1 didTurnOffEffectWithId:(id)arg2 features:(unsigned long long)arg3;
- (void)effectComponent:(id)arg1 didTurnOnEffectWithId:(id)arg2 features:(unsigned long long)arg3;
- (void)effectComponent:(id)arg1 effectId:(id)arg2 performInterfaceAction:(unsigned long long)arg3 interfaceElement:(unsigned long long)arg4 interfaceData:(id)arg5;
- (void)effectComponent:(id)arg1 willTurnOnEffectWithId:(id)arg2;
- (void)exitFullScreenMode;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)handleCloseLensesAction;
- (void)handleReloadLensDataProviderWithLensIdToRestore:(id)arg1;
- (void)hideLensesUI:(_Bool)arg1;
- (void)hideLensesUI:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
@property(retain, nonatomic) SCGrowingButton *infoButton; // @synthesize infoButton=_infoButton;
- (void)infoButtonPressed;
- (id)initWithCameraLensesInteractor:(id)arg1 parentViewContainer:(id)arg2 hidableViewContainer:(id)arg3 cameraViewDelegate:(id)arg4 lensProcessingCore:(id)arg5 sceneIntelligence:(id)arg6 snappableSelectionHandler:(id)arg7 userSession:(id)arg8 conversationMetadataProvider:(id)arg9 lensUserInterfaceDelegate:(id)arg10 lensCarousel:(id)arg11 lensEntryPointProvider:(id)arg12 lensUserProvider:(id)arg13 experimentManager:(id)arg14;
- (_Bool)isActiveCommunityLens;
- (_Bool)isPlayingSnappable;
@property(retain, nonatomic) SCLensAnalyticsDataManger *lensAnalyticsDataManager; // @synthesize lensAnalyticsDataManager=_lensAnalyticsDataManager;
- (id)lensAssetsUploadOperationFuture;
- (void)lensBitmojiAlertUIControllerDidAppear:(id)arg1;
- (void)lensBitmojiAlertUIControllerDidDisappear:(id)arg1;
- (void)lensCarouselPresenter:(id)arg1 didEndScrolling:(id)arg2 atLens:(id)arg3;
- (void)lensCarouselPresenter:(id)arg1 didScroll:(id)arg2 selectedCellDistance:(double)arg3 selectedLens:(id)arg4;
- (void)lensCarouselPresenter:(id)arg1 didSelectLens:(id)arg2 index:(unsigned long long)arg3 originalLensIndex:(unsigned long long)arg4 totalLensesCount:(unsigned long long)arg5;
- (unsigned long long)lensEntryPoint;
- (id)lensFpsLogger;
@property(retain, nonatomic) SCLensInfoController *lensInfoController; // @synthesize lensInfoController=_lensInfoController;
@property(retain, nonatomic) SCGrowingButton *lensesOpenCloseButton; // @synthesize lensesOpenCloseButton=_lensesOpenCloseButton;
- (void)lensesOpenCloseButtonPressed;
@property(retain) NSObject<OS_dispatch_queue> *lookseryProfilingEngineSerialQueue; // @synthesize lookseryProfilingEngineSerialQueue=_lookseryProfilingEngineSerialQueue;
- (id)pageViewName;
- (id)pendingDeeplinkBitmojiLensId;
- (_Bool)pointInsideLensCtaButton:(struct CGPoint)arg1;
- (_Bool)pointInsideLensInfoButton:(struct CGPoint)arg1;
- (_Bool)pointInsideLensLogoPickerUI:(struct CGPoint)arg1;
- (void)resetLensEntryPoint;
- (void)setCarouselHidden:(_Bool)arg1;
- (void)setCloseButtonHidden:(_Bool)arg1;
- (void)setLensCtaButtonHidden:(_Bool)arg1;
- (void)setLensInfoButtonHidden:(_Bool)arg1;
- (void)setLensesActive:(_Bool)arg1 appearanceConfiguration:(id)arg2 activationState:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)setLensesOpenCloseButtonVisible:(_Bool)arg1 animated:(_Bool)arg2;
@property(retain, nonatomic) SCSnappablesPlayButton *snappablesPlayButton;
- (void)setUIActivatedForLens:(id)arg1;
- (void)showLensesUI:(_Bool)arg1;
- (void)showLensesUI:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (id)state;
- (void)updateCtaButtonContentAndConstraints;
- (void)updateInfoButtonConstraints;
- (void)updateUIElementsVisibilityForLens:(id)arg1;
- (void)willExitFullscreen;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) id <SCLensCameraScreenDataProviderProtocol> lensDataProvider; // @dynamic lensDataProvider;
@property(nonatomic) __weak UIView *parentView; // @dynamic parentView;
@property(readonly) Class superclass;

@end

