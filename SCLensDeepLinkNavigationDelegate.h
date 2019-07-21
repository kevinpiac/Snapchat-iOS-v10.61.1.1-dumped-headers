//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NavigationDelegate-Protocol.h"

@class NSString, SCFeatureProvider, UIViewController;
@protocol SCCameraResources;

@interface SCLensDeepLinkNavigationDelegate : NSObject <NavigationDelegate>
{
    UIViewController *_presentedViewController;
    SCFeatureProvider<SCCameraResources> *_featureProvider;
}

- (void).cxx_destruct;
- (void)_handleDeepLinkLensExplorer:(id)arg1;
- (void)_handleDeepLinkURL:(id)arg1 additionalInfo:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)canPerformNavigation;
- (id)initWithPresentedViewController:(id)arg1 cameraFeatureProvider:(id)arg2;
- (_Bool)isAtFarLeft;
- (void)presentFarLeftVCAnimated:(_Bool)arg1 deepLinkURL:(id)arg2 additionalInfo:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)presentLeftVCAnimated:(_Bool)arg1 deepLinkURL:(id)arg2 additionalInfo:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)presentMiddleVCAnimated:(_Bool)arg1 deepLinkURL:(id)arg2 additionalInfo:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)presentOnCurrentVCAnimated:(_Bool)arg1 deepLinkURL:(id)arg2 additionalInfo:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)presentRightVCAnimated:(_Bool)arg1 deepLinkURL:(id)arg2 additionalInfo:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)profileTransitionCoordinator;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

