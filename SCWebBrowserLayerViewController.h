//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCOperaLayerViewController.h"

#import "SCWebBrowserDelegate-Protocol.h"

@class NSDate, NSString, SCWebBrowserLayerView, UIViewController;
@protocol SCWebBrowser;

@interface SCWebBrowserLayerViewController : SCOperaLayerViewController <SCWebBrowserDelegate>
{
    SCWebBrowserLayerView *_layerView;
    UIViewController<SCWebBrowser> *_browserViewController;
    NSDate *_didStartLoadingTimestamp;
    NSDate *_didFinishLoadingTimestamp;
    NSDate *_didFullyAppearTimestamp;
    NSDate *_didFullyDisappearTimestamp;
    double _totalLoadTimeMillis;
    NSString *_errorReason;
    NSString *_errorMessage;
}

- (void).cxx_destruct;
- (_Bool)_allowPreloading;
- (void)_initBrowser;
- (void)_loadURL;
- (void)_removeBrowser;
- (_Bool)canHandleRoundCorner;
- (id)currentViewParameters;
- (void)loadView;
- (void)neighborViewDidFullyAppearWithCurrentViewRelativePosition:(unsigned long long)arg1;
- (long long)pageabilityForRelativePosition:(unsigned long long)arg1 gestureRecognizer:(id)arg2;
- (void)teardown;
- (void)updateViewWithPreviousLayer:(id)arg1 currentLayer:(id)arg2;
- (void)viewDidFullyAppear;
- (void)viewDidFullyDisappear;
- (void)viewDidPartiallyAppearWithCurrentViewRelativePosition:(unsigned long long)arg1;
- (void)webBrowser:(id)arg1 didCompleteInitialLoadWithSuccess:(_Bool)arg2;
- (void)webBrowserDidEndBrowserSession:(id)arg1;

@end

