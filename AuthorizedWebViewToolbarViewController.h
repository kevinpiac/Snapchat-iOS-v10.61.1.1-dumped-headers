//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCWebViewToolbarViewController.h"

@interface AuthorizedWebViewToolbarViewController : SCWebViewToolbarViewController
{
    unsigned long long _webViewType;
}

- (id)_createRequest:(id)arg1;
- (id)_generateParameters;
- (id)_urlRequestString;
- (void)configureWebView;
- (id)getPageViewName;
- (id)initForWebViewType:(unsigned long long)arg1;
- (void)rightButtonPressed;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewWillAppear:(_Bool)arg1;

@end
