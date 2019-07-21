//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCImpalaFullScreenCardBaseViewController.h"

#import "SCImpalaViewControllerAsyncPreparing-Protocol.h"
#import "SCShakeToReportDelegate-Protocol.h"

@class NSString, SCImpalaPublisherProfileV2Context, SCImpalaPublisherProfileV2View, SCImpalaStoryPlayer, SCUserSession;
@protocol NavigationDelegate;

@interface SCImpalaPublisherProfileV2ViewController : SCImpalaFullScreenCardBaseViewController <SCShakeToReportDelegate, SCImpalaViewControllerAsyncPreparing>
{
    long long _sourcePageType;
    long long _pageEntryType;
    SCImpalaPublisherProfileV2View *_profileView;
    SCImpalaPublisherProfileV2Context *_context;
    SCImpalaStoryPlayer *_storyPlayer;
    _Bool _autoSubscribe;
    NSString *_businessProfileId;
    NSString *_showId;
    SCUserSession *_userSession;
    id <NavigationDelegate> _navigationDelegate;
}

- (void).cxx_destruct;
- (void)_loadProfileViewIfNeeded;
@property(readonly, nonatomic) _Bool autoSubscribe; // @synthesize autoSubscribe=_autoSubscribe;
@property(readonly, copy, nonatomic) NSString *businessProfileId; // @synthesize businessProfileId=_businessProfileId;
- (id)defaultProjectNameV2;
- (id)initWithBusinessProfileId:(id)arg1 showId:(id)arg2 userSession:(id)arg3 navigationDelegate:(id)arg4 sourcePageType:(long long)arg5 pageEntryType:(long long)arg6 autoSubscribe:(_Bool)arg7;
@property(readonly, nonatomic) __weak id <NavigationDelegate> navigationDelegate; // @synthesize navigationDelegate=_navigationDelegate;
- (long long)preferredStatusBarStyle;
- (_Bool)prefersStatusBarHidden;
- (void)prepareWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)shouldBeginInteractiveDismissal;
- (_Bool)shouldDismissViewControllerWhenEnterBackground;
@property(readonly, copy, nonatomic) NSString *showId; // @synthesize showId=_showId;
@property(readonly, nonatomic) __weak SCUserSession *userSession; // @synthesize userSession=_userSession;
- (void)viewControllerDismissSelf;
- (_Bool)viewControllerPrefersSelfDismiss;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

