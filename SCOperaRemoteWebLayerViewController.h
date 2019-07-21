//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCOperaWebLayerViewController.h"

#import "SCOperaLayerViewControllerMediaContainer-Protocol.h"
#import "SCOperaLayerViewControllerShareableMediaSource-Protocol.h"
#import "SCOperaRemoteWebLayerViewDelegate-Protocol.h"
#import "SCOperaWebViewWrapperDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class FBKVOController, NSDate, NSNumber, NSString, SCOperaMultiWebViewWrapper, SCOperaRemoteWebLayerView, SCOperaWebSubscribeView, SCOperaWebViewWrapper;

@interface SCOperaRemoteWebLayerViewController : SCOperaWebLayerViewController <SCOperaWebViewWrapperDelegate, SCOperaRemoteWebLayerViewDelegate, UIScrollViewDelegate, UIGestureRecognizerDelegate, SCOperaLayerViewControllerShareableMediaSource, SCOperaLayerViewControllerMediaContainer>
{
    SCOperaRemoteWebLayerView *_layerView;
    _Bool _urlLoaded;
    NSDate *_didBecomeVisibleTimestamp;
    NSDate *_didFinishLoadingTimestamp;
    _Bool _shouldReloadOnShow;
    _Bool _scrollViewIsAtTopBoundary;
    _Bool _isWebViewFullyAppeared;
    SCOperaWebSubscribeView *_subscribeView;
    NSString *_subscriptionIconKey;
    FBKVOController *_kvoController;
    SCOperaMultiWebViewWrapper *_multiWebViewWrapper;
    NSNumber *_currentInteractiveWebViewIndex;
    SCOperaWebViewWrapper *_currentWebViewWrapper;
}

- (void).cxx_destruct;
- (void)_closeWebview;
- (id)_configDict;
- (void)_didTapSubscriptionButton;
- (void)_hideSubscribeView;
- (void)_layoutSubscribeView;
- (void)_layoutSubscribeViewWithContentBounds:(struct CGRect)arg1;
- (void)_layoutSubscribeViewWithContentFrame:(struct CGRect)arg1;
- (void)_layoutSubscribeViewWithY:(double)arg1;
- (void)_layoutWebviewAttachments;
- (void)_loadUrlRequestForMultiWebViews;
- (void)_loadUrlRequestForNonMultiWebViews;
- (void)_reloadIfNecessary;
- (void)_setupLayerViewWithWebViewWrapper:(id)arg1;
- (void)_setupSubscribeView;
- (id)_userInfoProvider;
- (_Bool)canHandleRoundCorner;
- (void)clearLayerViewRequest;
- (id)currentViewParameters;
@property(retain, nonatomic) SCOperaWebViewWrapper *currentWebViewWrapper; // @synthesize currentWebViewWrapper=_currentWebViewWrapper;
- (void)dealloc;
- (void)didClickCancelInExternalOpenDialogForWebviewWrapper:(id)arg1;
- (void)didFinalizePerformanceMetricsForWebViewWrapper:(id)arg1;
- (void)didFinishLoadForWebviewWrapper:(id)arg1;
@property(retain, nonatomic) NSDate *didFinishLoadingTimestamp;
- (void)didReceiveMemoryWarning;
- (void)didReceiveResponseForWebviewWrapper:(id)arg1 response:(id)arg2;
- (void)didReceiveUpdateProperties:(id)arg1;
- (void)didResetWebviewForWebviewWrapper:(id)arg1;
- (void)didStartLoadForWebviewWrapper:(id)arg1;
- (void)didUpdateBottomPageViewProperties:(id)arg1;
- (void)dismissAddPassesViewForWebviewWrapper:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)initWithConfiguration:(id)arg1 eventAnnouncer:(id)arg2 sharedResourceManager:(id)arg3;
- (id)initWithConfiguration:(id)arg1 kvoController:(id)arg2 eventAnnouncer:(id)arg3 sharedResourceManager:(id)arg4;
- (_Bool)isOverlay;
- (_Bool)isShareable;
- (_Bool)isVisible;
- (void)loadUrlRequest;
- (void)loadView;
- (double)mediaHeightToWidthAspectRatio;
- (struct CGRect)mediaViewFrame;
- (void)neighborViewDidFullyAppearWithCurrentViewRelativePosition:(unsigned long long)arg1;
- (void)operaWebViewHeaderViewDidPressActionMenuButton;
- (long long)pageabilityForRelativePosition:(unsigned long long)arg1 gestureRecognizer:(id)arg2;
- (void)remoteWebLayerView:(id)arg1 didShareURL:(id)arg2;
- (void)remoteWebLayerViewDidPressExitButton:(id)arg1;
- (id)scrollView;
- (void)setAutoFillPromptVisibility:(_Bool)arg1 webviewWrapper:(id)arg2;
- (void)setUrlBarLoadingText:(id)arg1 webviewWrapper:(id)arg2;
- (id)shareableMedia;
- (void)showAddPassesViewForWebviewWrapper:(id)arg1;
- (void)showConnectionErrorForWebviewWrapper:(id)arg1;
- (void)showGeneralErrorForWebviewWrapper:(id)arg1;
- (void)showSafeBrowsingWarning:(id)arg1 urlType:(long long)arg2 webviewWrapper:(id)arg3;
- (void)teardown;
- (void)triggerContextMenuForWebviewWrapper:(id)arg1;
- (void)updateProgress:(float)arg1 webviewWrapper:(id)arg2;
- (void)updateUrl:(id)arg1 overrideWhitelisted:(_Bool)arg2 webviewWrapper:(id)arg3;
- (void)updateViewWithHorizontalPageOffset:(double)arg1 isCurrentPage:(_Bool)arg2;
- (void)updateViewWithPreviousLayer:(id)arg1 currentLayer:(id)arg2;
- (void)viewDidFullyAppear;
- (void)viewDidFullyDisappear;
- (void)viewDidLayoutSubviews;
- (void)viewDidPartiallyAppearWithCurrentViewRelativePosition:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

