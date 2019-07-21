//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCOperaLayerViewController.h"

#import "SCOperaLayerViewControllerShareableMediaSource-Protocol.h"
#import "SCOperaRemoteWebV3LayerViewDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class NSDate, NSNumber, NSString, SCOperaMultiWebViewWrapper, SCOperaRemoteWebV3LayerView, SCOperaWebViewWrapper;

@interface SCOperaRemoteWebV3LayerViewController : SCOperaLayerViewController <SCOperaRemoteWebV3LayerViewDelegate, UIScrollViewDelegate, SCOperaLayerViewControllerShareableMediaSource>
{
    SCOperaRemoteWebV3LayerView *_layerView;
    _Bool _urlStartLoading;
    SCOperaMultiWebViewWrapper *_multiWebViewWrapper;
    NSNumber *_currentInteractiveWebViewIndex;
    _Bool _scrollViewIsAtTopBoundary;
    NSDate *_didStartLoadingTimestamp;
    NSDate *_didFinishLoadingTimestamp;
    NSDate *_didFullyAppearTimestamp;
    NSDate *_didFullyDisappearTimestamp;
    SCOperaWebViewWrapper *_currentWebViewWrapper;
}

- (void).cxx_destruct;
- (void)_clearLayerViewRequest;
- (id)_configDict;
- (id)_generateWebViewWrapper;
- (void)_loadUrlRequest;
- (void)_loadUrlRequestForMultiWebViews;
- (void)_loadUrlRequestForNonMultiWebViews;
- (void)_reset;
- (void)_sendSubviewScrollViewIsAtTopBoundaryEvent:(_Bool)arg1;
- (void)_setupLayerViewWithWebViewWrapper:(id)arg1;
- (_Bool)canHandleRoundCorner;
- (id)currentViewParameters;
@property(retain, nonatomic) SCOperaWebViewWrapper *currentWebViewWrapper; // @synthesize currentWebViewWrapper=_currentWebViewWrapper;
- (void)didCloseLayerView:(id)arg1;
- (void)didFinalizePerformanceMetricsForWebViewWrapper:(id)arg1;
- (void)didFinishLoading:(id)arg1 webViewWrapper:(id)arg2;
@property(retain, nonatomic) NSDate *didFinishLoadingTimestamp; // @synthesize didFinishLoadingTimestamp=_didFinishLoadingTimestamp;
@property(retain, nonatomic) NSDate *didFullyAppearTimestamp; // @synthesize didFullyAppearTimestamp=_didFullyAppearTimestamp;
@property(retain, nonatomic) NSDate *didFullyDisappearTimestamp; // @synthesize didFullyDisappearTimestamp=_didFullyDisappearTimestamp;
- (void)didOpenActionMenuLayerView:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)didReceiveUpdateProperties:(id)arg1;
- (void)didShareURL:(id)arg1 layerView:(id)arg2;
@property(retain, nonatomic) NSDate *didStartLoadingTimestamp; // @synthesize didStartLoadingTimestamp=_didStartLoadingTimestamp;
- (void)didUpdateBottomPageViewProperties:(id)arg1;
- (id)initWithConfiguration:(id)arg1 eventAnnouncer:(id)arg2 sharedResourceManager:(id)arg3;
- (id)initialLoadURL;
- (void)loadView;
- (void)neighborViewDidFullyAppearWithCurrentViewRelativePosition:(unsigned long long)arg1;
- (long long)pageabilityForRelativePosition:(unsigned long long)arg1 gestureRecognizer:(id)arg2;
- (id)scrollView;
- (void)scrollViewDidScroll:(id)arg1;
- (id)shareableMedia;
- (void)teardown;
- (void)updateViewWithPreviousLayer:(id)arg1 currentLayer:(id)arg2;
- (void)viewDidFullyAppear;
- (void)viewDidFullyDisappear;
- (void)viewDidPartiallyAppearWithCurrentViewRelativePosition:(unsigned long long)arg1;
- (void)viewWillFullyAppear;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
