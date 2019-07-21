//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCDiscoverFeedDebugViewControllerDelegate-Protocol.h"
#import "SCImpalaPublicProfileActionHandling-Protocol.h"
#import "SCImpalaPublicProfileDebugActionHandling-Protocol.h"
#import "SCReportPageViewControllerDelegate-Protocol.h"

@class IMPBusinessProfile, NSString, SCImpalaPublicProfileSendToDelegate, SCSendToTransitionProvider, SCUserSession, UIViewController;
@protocol NavigationDelegate;

@interface SCImpalaPublicProfileActionHandler : NSObject <SCReportPageViewControllerDelegate, SCDiscoverFeedDebugViewControllerDelegate, SCImpalaPublicProfileActionHandling, SCImpalaPublicProfileDebugActionHandling>
{
    SCImpalaPublicProfileSendToDelegate *_sendToDelegate;
    id <NavigationDelegate> _navigationDelegate;
    SCSendToTransitionProvider *_sendToTransitionProvider;
    IMPBusinessProfile *_reportingBusinessProfile;
    SCUserSession *_userSession;
    UIViewController *_viewController;
}

- (void).cxx_destruct;
- (void)_presentHideAlertAfterReportForBusinessProfile:(id)arg1;
- (void)discoverFeedDebugViewControllerNeedsToDismiss:(id)arg1 animated:(_Bool)arg2;
- (void)hideProfileWithEncodedBusinessProfile:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (id)initWithUserSession:(id)arg1 viewController:(id)arg2 navigationDelegate:(id)arg3;
- (void)reportPageViewControllerDidCancelAtLevel:(unsigned long long)arg1 additionalData:(id)arg2;
- (void)reportPageViewControllerDidSubmitReport:(id)arg1 reasonId:(id)arg2 additionalData:(id)arg3;
- (void)reportProfileWithEncodedBusinessProfile:(id)arg1;
- (void)reportTileWithEncodedBusinessProfile:(id)arg1;
- (void)sendProfileWithEncodedBusinessProfile:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)showDebugWithEncodedBusinessProfile:(id)arg1;
- (void)showInsightsWithEncodedBusinessProfile:(id)arg1;
- (void)showSignalsWithEncodedBusinessProfile:(id)arg1;
- (id)toJavaScript;
@property(readonly, nonatomic) __weak SCUserSession *userSession; // @synthesize userSession=_userSession;
@property(readonly, nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
