//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WKNavigationDelegate-Protocol.h"

@class FBKVOController, NSMutableDictionary, NSString, NSURL, WKWebView;
@protocol SCSearchWebViewNavigationTrackerDelegate, SCSearchWebViewSafeBrowsingChecking;

@interface SCSearchWebViewNavigationTracker : NSObject <WKNavigationDelegate>
{
    WKWebView *_webView;
    id <SCSearchWebViewSafeBrowsingChecking> _safeBrowsingChecker;
    FBKVOController *_observeController;
    NSMutableDictionary *_mutableNavigationHistory;
    NSMutableDictionary *_mutablePendingActionHandler;
    _Bool _hasCommittedNavigation;
    _Bool _canGoBack;
    id <SCSearchWebViewNavigationTrackerDelegate> _delegate;
    NSURL *_externalLink;
}

- (void).cxx_destruct;
- (void)_checkSafeBrowsingForURL:(id)arg1 webView:(id)arg2 navigationAction:(id)arg3;
- (void)_handleCheckResultForURL:(id)arg1 webView:(id)arg2 navigationAction:(id)arg3 urlType:(long long)arg4;
- (void)_initWebViewKVO;
- (id)_navigationItemForURL:(id)arg1;
- (void)_updateHasCommittedNavigation:(_Bool)arg1;
- (void)_updateNavigationItem:(id)arg1;
- (void)_updateProgress;
- (void)back;
@property(readonly, nonatomic) _Bool canGoBack; // @synthesize canGoBack=_canGoBack;
@property(readonly, nonatomic) NSURL *currentUrl;
- (void)dealloc;
@property(nonatomic) __weak id <SCSearchWebViewNavigationTrackerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSURL *externalLink; // @synthesize externalLink=_externalLink;
@property(readonly, nonatomic) _Bool hasCommittedNavigation; // @synthesize hasCommittedNavigation=_hasCommittedNavigation;
- (id)initWithWebView:(id)arg1 safeBrowsingChecker:(id)arg2;
@property(readonly, nonatomic) WKWebView *webView; // @synthesize webView=_webView;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)webView:(id)arg1 didCommitNavigation:(id)arg2;
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didReceiveServerRedirectForProvisionalNavigation:(id)arg2;
- (void)webView:(id)arg1 didStartProvisionalNavigation:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

