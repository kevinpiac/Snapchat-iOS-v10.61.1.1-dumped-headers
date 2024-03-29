//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCOperaWebViewURLInterceptor-Protocol.h"

@class NSDictionary, NSString;
@protocol NavigationDelegate, SCOperaWebViewURLInterceptorDelegate;

@interface SCDeepLinkingUrlInterceptor : NSObject <SCOperaWebViewURLInterceptor>
{
    _Bool _isDeeplinkAlertShowing;
    NSDictionary *_deeplinkManagerConfig;
    id <SCOperaWebViewURLInterceptorDelegate> _interceptorDelegate;
    id <NavigationDelegate> _navigationDelegate;
}

- (void).cxx_destruct;
- (id)_schemeExceptionList;
- (id)_universalLinkExceptionList;
- (_Bool)hasUniversalLinkSchema:(id)arg1;
- (id)initWithNavigationDelegate:(id)arg1;
- (id)initWithNavigationDelegate:(id)arg1 deeplinkManagerConfig:(id)arg2;
- (_Bool)interceptURL:(id)arg1 isWebViewFullyAppeared:(_Bool)arg2 isWebViewLoadedSuccessfully:(_Bool)arg3 allowAlertView:(_Bool)arg4 allowUniversalDeepLink:(_Bool)arg5 bypassNavigationRestriction:(_Bool)arg6 additionalInfo:(id)arg7 completion:(CDUnknownBlockType)arg8;
@property(nonatomic) __weak id <SCOperaWebViewURLInterceptorDelegate> interceptorDelegate; // @synthesize interceptorDelegate=_interceptorDelegate;
- (_Bool)isExternalDeepLinkURL:(id)arg1;
@property(nonatomic) __weak id <NavigationDelegate> navigationDelegate; // @synthesize navigationDelegate=_navigationDelegate;
- (void)openUrl:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)shouldInterceptURL:(id)arg1;
- (void)showAlert:(id)arg1 withAlertViewCoordinator:(id)arg2 isWebViewLoadedSuccessfully:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

