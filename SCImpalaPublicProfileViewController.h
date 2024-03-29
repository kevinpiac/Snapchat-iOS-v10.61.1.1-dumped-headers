//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCImpalaFullScreenCardBaseViewController.h"

#import "SCImpalaShowProfilePresenterDelegate-Protocol.h"
#import "SCImpalaViewControllerAsyncPreparing-Protocol.h"
#import "SCShakeToReportDelegate-Protocol.h"

@class NSString, SCImpalaPublicProfileContext, SCImpalaPublicProfileLoggingInfo, SCImpalaPublicProfileView, SCImpalaShowProfilePresenter, SCImpalaStoryPlayer, SCUserSession;
@protocol NavigationDelegate;

@interface SCImpalaPublicProfileViewController : SCImpalaFullScreenCardBaseViewController <SCShakeToReportDelegate, SCImpalaShowProfilePresenterDelegate, SCImpalaViewControllerAsyncPreparing>
{
    SCImpalaPublicProfileLoggingInfo *_loggingInfo;
    SCImpalaPublicProfileView *_profileView;
    SCImpalaPublicProfileContext *_context;
    SCImpalaStoryPlayer *_storyPlayer;
    _Bool _previewMode;
    SCImpalaShowProfilePresenter *_presenter;
    CDUnknownBlockType _onDismissBlock;
    NSString *_businessProfileId;
    SCUserSession *_userSession;
    id <NavigationDelegate> _navigationDelegate;
}

- (void).cxx_destruct;
- (void)_loadProfileViewIfNeeded;
@property(readonly, copy, nonatomic) NSString *businessProfileId; // @synthesize businessProfileId=_businessProfileId;
- (id)defaultProjectNameV2;
- (id)initWithBusinessProfileId:(id)arg1 userSession:(id)arg2 navigationDelegate:(id)arg3 loggingInfo:(id)arg4 previewMode:(_Bool)arg5;
@property(readonly, nonatomic) __weak id <NavigationDelegate> navigationDelegate; // @synthesize navigationDelegate=_navigationDelegate;
- (long long)preferredStatusBarStyle;
- (_Bool)prefersStatusBarHidden;
- (void)prepareWithCompletion:(CDUnknownBlockType)arg1;
- (void)presentOverViewController:(id)arg1 performHapticFeedback:(_Bool)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4 dismissBlock:(CDUnknownBlockType)arg5;
- (_Bool)shouldBeginInteractiveDismissal;
- (_Bool)shouldDismissViewControllerWhenEnterBackground;
- (void)showProfilePresenterDidFinishDismissing:(id)arg1;
- (void)showProfilePresenterDidStartPresenting:(id)arg1;
@property(readonly, nonatomic) __weak SCUserSession *userSession; // @synthesize userSession=_userSession;
- (void)viewControllerDismissSelf;
- (_Bool)viewControllerPrefersSelfDismiss;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

