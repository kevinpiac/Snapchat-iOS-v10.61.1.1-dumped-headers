//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCOperaLayerViewController.h"

#import "SCOperaEventListener-Protocol.h"
#import "SCSnappablesDismissalCoordinatorDelegate-Protocol.h"
#import "SCSnappablesInterstitialLayerViewDelegate-Protocol.h"
#import "SCSnappablesLayerPlayerControllerDelegate-Protocol.h"

@class NSString, SCLens, SCOperaSharedResourceManager, SCSnappablesAnalyticsController, SCSnappablesInterstitialLayerView, SCSnappablesLayerLensController, SCSnappablesLayerPlayerController, SCSnappablesPresenter, SCUserSession;

@interface SCSnappablesInterstitialLayerViewController : SCOperaLayerViewController <SCSnappablesInterstitialLayerViewDelegate, SCOperaEventListener, SCSnappablesDismissalCoordinatorDelegate, SCSnappablesLayerPlayerControllerDelegate>
{
    SCSnappablesLayerLensController *_lensController;
    SCSnappablesLayerPlayerController *_playerController;
    _Bool _startAutoplayOnLoad;
    _Bool _didLoadLens;
    _Bool _isSnapSent;
    SCLens *_resolvedLens;
    SCSnappablesInterstitialLayerView *_layerView;
    SCUserSession *_userSession;
    SCOperaSharedResourceManager *_resourceManager;
    SCSnappablesPresenter *_presenter;
    SCSnappablesAnalyticsController *_analyticsController;
}

- (void).cxx_destruct;
- (void)_hideChrome;
- (id)_layer;
- (id)_operaViewController;
- (void)_setContextMenuEnabled:(_Bool)arg1;
- (void)_showError;
- (void)_showOverlay;
- (void)didReceiveUpdateProperties:(id)arg1;
- (void)didRequestLayerViewDisplay:(id)arg1;
- (void)didTapReplyForLayerView:(id)arg1;
- (void)dismissalCoordinatorDidDismissAfterSending:(id)arg1;
- (void)dismissalCoordinatorDidDismissWithoutSending:(id)arg1;
- (void)dismissalCoordinatorWillDismissAfterSending:(id)arg1;
- (void)dismissalCoordinatorWillDismissWithoutSending:(id)arg1;
- (id)initWithConfiguration:(id)arg1 eventAnnouncer:(id)arg2 sharedResourceManager:(id)arg3 userSession:(id)arg4;
- (_Bool)isRecyclable;
- (void)loadView;
- (void)operaViewDidSendEvent:(id)arg1 context:(id)arg2 params:(id)arg3;
- (void)playerControllerFinishedDisplayingContent:(id)arg1;
- (void)setupView;
- (_Bool)shouldHandleEventsInLeftTapAreaForLayerView:(id)arg1;
- (void)updateViewWithPreviousLayer:(id)arg1 currentLayer:(id)arg2;
- (void)viewDidFullyAppear;
- (void)viewDidFullyDisappear;
- (void)viewWillFullyAppear;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
