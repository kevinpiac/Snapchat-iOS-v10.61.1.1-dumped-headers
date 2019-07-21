//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "WKNavigationDelegate-Protocol.h"
#import "WKScriptMessageHandler-Protocol.h"
#import "WKUIDelegate-Protocol.h"

@class FBKVOController, NSString, NSURL, NSURLRequest, SCOperaRemoteWebJavascriptBridge, UIImage, UIViewController, WKWebView;
@protocol SCOperaWebViewDelegate, SCOperaWebViewPKPassProvider;

@interface SCOperaWebView : UIView <WKNavigationDelegate, WKScriptMessageHandler, WKUIDelegate>
{
    FBKVOController *_observeController;
    _Bool _allowAddToWallet;
    _Bool _allowPreload;
    _Bool _allowPreloadHeader;
    id <SCOperaWebViewPKPassProvider> _pkPassProvider;
    UIViewController *_addPassesUIViewController;
    NSURL *_lastURLOpened;
    id <SCOperaWebViewDelegate> _delegate;
    WKWebView *_wkWebView;
    SCOperaRemoteWebJavascriptBridge *_jsBridge;
    NSURLRequest *_wkRequest;
    UIImage *_favicon;
}

- (void).cxx_destruct;
- (id)URL;
- (void)_enableSwipeNavigationIfAllowed:(id)arg1;
- (void)_updateProgress;
@property(readonly, nonatomic) UIView *addPassesView;
- (void)addPassesViewControllerDidFinish:(id)arg1;
- (_Bool)canGoBack;
- (_Bool)canGoForward;
- (long long)convertFromWKNavigationType:(long long)arg1;
- (void)dealloc;
@property(nonatomic) __weak id <SCOperaWebViewDelegate> delegate; // @synthesize delegate=_delegate;
- (double)estimatedProgress;
- (void)evaluateJavaScript:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
@property(retain, nonatomic) UIImage *favicon; // @synthesize favicon=_favicon;
- (void)goBack;
- (void)goForward;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 configurationDict:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 configurationDict:(id)arg2 pkPassProvider:(id)arg3;
- (_Bool)isLoading;
@property(retain, nonatomic) SCOperaRemoteWebJavascriptBridge *jsBridge; // @synthesize jsBridge=_jsBridge;
- (void)loadHTMLString:(id)arg1 baseURL:(id)arg2;
- (void)loadRequest:(id)arg1;
- (id)pageTitle;
- (void)performPrerender;
- (void)reload;
- (id)request;
- (id)scrollView;
- (void)setFrame:(struct CGRect)arg1;
- (void)setNeedsLayout;
@property(retain, nonatomic) NSURLRequest *wkRequest; // @synthesize wkRequest=_wkRequest;
@property(retain, nonatomic) WKWebView *wkWebView; // @synthesize wkWebView=_wkWebView;
- (id)setupConfig:(id)arg1;
- (void)setupWebView:(id)arg1 configDict:(id)arg2;
- (void)stopLoading;
- (void)updatePromptForHeader:(double)arg1;
- (void)userContentController:(id)arg1 didReceiveScriptMessage:(id)arg2;
- (id)viewPrintFormatter;
- (id)webView:(id)arg1 createWebViewWithConfiguration:(id)arg2 forNavigationAction:(id)arg3 windowFeatures:(id)arg4;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)webView:(id)arg1 decidePolicyForNavigationResponse:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)webView:(id)arg1 didCommitNavigation:(id)arg2;
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (void)webView:(id)arg1 didReceiveServerRedirectForProvisionalNavigation:(id)arg2;
- (void)webView:(id)arg1 didStartProvisionalNavigation:(id)arg2;
- (void)webViewWebContentProcessDidTerminate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

