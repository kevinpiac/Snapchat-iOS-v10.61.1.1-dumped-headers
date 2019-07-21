//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCFeature.h"

#import "SCCameraGestureResponder-Protocol.h"
#import "SCFeatureLensExplorerSwipeUpDelegate-Protocol.h"
#import "SCFeatureLensFeed-Protocol.h"
#import "SCImpalaBusinessProfileManagerListener-Protocol.h"
#import "SCLensExplorerButtonDelegate-Protocol.h"
#import "SCLensExplorerNavigationProviderProtocol-Protocol.h"
#import "SCLensExplorerRouterDelegate-Protocol.h"
#import "SCLensExplorerUnlockFlowDelegate-Protocol.h"
#import "SCTraceEnabled-Protocol.h"

@class NSString, NSUUID, SCARBarItem, SCDisposableObserver, SCDisposableObserverLifecycle, SCFeatureReference, SCLazy, SCLensExplorerButtonController, SCReplyParameters, SCUserSession, UIView;
@protocol SCFeatureCameraBottomUIArbitrator, SCFeatureLensExplorerSwipeUpDelegate, SCFeatureLensFeedDelegate, SCLensExplorerBlacklistProtocol, SCLensExplorerLensUnlockerProtocol, SCLensExplorerStudySettingsProviderProtocol, SCLensUserProvider;

@interface SCFeatureLensFeedImpl : SCFeature <SCTraceEnabled, SCLensExplorerRouterDelegate, SCLensExplorerNavigationProviderProtocol, SCImpalaBusinessProfileManagerListener, SCLensExplorerButtonDelegate, SCLensExplorerUnlockFlowDelegate, SCFeatureLensFeed, SCCameraGestureResponder, SCFeatureLensExplorerSwipeUpDelegate>
{
    UIView *_parentView;
    SCLazy *_lensExplorer;
    SCLensExplorerButtonController *_lensExplorerButtonController;
    SCLazy *_dependencyProvider;
    SCDisposableObserverLifecycle *_appLifecycle;
    SCDisposableObserver *_lensCarouselObserver;
    SCFeatureReference *_verticalToolbarRef;
    SCFeatureReference *_lensCarousel;
    _Bool _lensCarouselOpen;
    _Bool _displayingInARBar;
    SCLazy *_lensCreatorsBlacklist;
    id <SCLensUserProvider> _lensUserProvider;
    SCReplyParameters *_replyParameters;
    id <SCFeatureLensFeedDelegate> delegate;
    long long _cameraViewType;
    NSUUID *_uuid;
    id <SCFeatureCameraBottomUIArbitrator> _cameraBottomUIArbitrator;
    SCUserSession *_userSession;
}

- (void).cxx_destruct;
- (void)_appDidEnterBackground;
- (_Bool)_isCurrentCameraTypeSupported;
- (id)_prepareCreatorsBlacklist;
- (id)_prepareDependencyProvider;
- (void)_requestCameraBottomUIVisible:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_requestLensChallengesScheduleIfNeeded;
- (void)_updateFeatureState;
- (void)activate;
- (_Bool)activateFromPoint:(struct CGPoint)arg1 gestureRecognizer:(id)arg2 arBar:(id)arg3;
@property(readonly, nonatomic) SCARBarItem *arBarItem;
@property(nonatomic) __weak id <SCFeatureCameraBottomUIArbitrator> cameraBottomUIArbitrator; // @synthesize cameraBottomUIArbitrator=_cameraBottomUIArbitrator;
@property(nonatomic) long long cameraViewType; // @synthesize cameraViewType=_cameraViewType;
- (void)cancelPrepareForActivationFromARBar:(id)arg1;
- (void)configureWithView:(id)arg1;
- (void)deactivateFromARBar:(id)arg1;
@property(nonatomic) __weak id <SCFeatureLensFeedDelegate> delegate; // @synthesize delegate;
- (void)didPressLensExplorerButton:(id)arg1;
- (void)didUpdateSubscribedForBusinessProfileId:(id)arg1 hostAccountUserId:(id)arg2 subscribed:(_Bool)arg3;
- (void)dismissIfNeeded;
- (void)hideOriginalUIForDisplayInARBar:(id)arg1;
- (id)initWithUserSession:(id)arg1 verticalToolbar:(id)arg2 lensCarousel:(id)arg3 applicationLifecycleEvents:(id)arg4;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) _Bool isPresenting;
@property(readonly, nonatomic) _Bool isPresentingLensChallenges;
@property(readonly, nonatomic) id <SCLensExplorerBlacklistProtocol> lensCreatorsBlacklist;
- (void)lensExplorerLensUnlocker:(id)arg1 didRequestToUpdateSelectLensAfterUnlock:(id)arg2;
- (void)lensExplorerLensUnlocker:(id)arg1 didUseLens:(id)arg2;
- (void)lensExplorerRouter:(id)arg1 didRequestToUpdateSelectLensAfterUnlock:(id)arg2;
- (void)lensExplorerRouterBeginDismissingLensExplorer:(id)arg1;
- (void)lensExplorerRouterDidDismissLensExplorer:(id)arg1;
- (void)lensExplorerRouterDidPresentLensExplorer:(id)arg1;
- (void)lensExplorerRouterDidRequestToPresentLensExplorer:(id)arg1 entryPoint:(long long)arg2;
- (id)lensExplorerRouterReplyParametersForCameraPresenter:(id)arg1;
@property(readonly, nonatomic) id <SCFeatureLensExplorerSwipeUpDelegate> lensExplorerSwipeUpDelegate;
- (void)lensExplorerSwipeUpFeature:(id)arg1 didReceivePanWithState:(long long)arg2 offset:(double)arg3 velocity:(double)arg4;
@property(readonly, nonatomic) id <SCLensExplorerLensUnlockerProtocol> lensUnlocker;
- (id)navigationDelegate;
- (void)prepareForActivationFromPoint:(struct CGPoint)arg1 gestureRecognizer:(id)arg2 arBar:(id)arg3;
- (void)presentChallengesWithChallengeId:(id)arg1 fromViewController:(id)arg2;
- (void)presentLensFeedFromViewController:(id)arg1;
- (void)presentLensFeedFromViewController:(id)arg1 entryPoint:(long long)arg2;
- (void)restoreFromARBar:(id)arg1;
- (void)setCameraBottomUIVisible:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setReplyParameters:(id)arg1;
- (_Bool)shouldBlockTouchAtPoint:(struct CGPoint)arg1;
- (void)showCreatorPageForLensItemCreator:(id)arg1 fromViewController:(id)arg2 sourcePageType:(long long)arg3;
@property(readonly, nonatomic) id <SCLensExplorerStudySettingsProviderProtocol> studySettingsProvider;
@property(readonly, nonatomic) __weak SCUserSession *userSession; // @synthesize userSession=_userSession;
@property(readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

