//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SCShakeToReportDelegate-Protocol.h"
#import "UIViewControllerAnimatedTransitioning-Protocol.h"
#import "UIViewControllerTransitioningDelegate-Protocol.h"

@class NSString, SCImpalaPublicProfileActionSheetContext, SCImpalaPublicProfileActionSheetView, SCImpalaPublicProfileLoggingInfo, SCImpalaStoryPlayer, SCUserSession;
@protocol NavigationDelegate;

@interface SCImpalaPublicProfileActionSheetViewController : UIViewController <SCShakeToReportDelegate, UIViewControllerTransitioningDelegate, UIViewControllerAnimatedTransitioning>
{
    SCImpalaPublicProfileLoggingInfo *_loggingInfo;
    SCImpalaPublicProfileActionSheetView *_profileView;
    SCImpalaPublicProfileActionSheetContext *_context;
    SCImpalaStoryPlayer *_storyPlayer;
    _Bool _previewMode;
    CDUnknownBlockType _onDismissBlock;
    NSString *_businessProfileId;
    SCUserSession *_userSession;
    id <NavigationDelegate> _navigationDelegate;
}

- (void).cxx_destruct;
- (void)animateTransition:(id)arg1;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
@property(readonly, copy, nonatomic) NSString *businessProfileId; // @synthesize businessProfileId=_businessProfileId;
- (id)defaultProjectNameV2;
- (id)initWithBusinessProfileId:(id)arg1 userSession:(id)arg2 navigationDelegate:(id)arg3 loggingInfo:(id)arg4 previewMode:(_Bool)arg5;
@property(readonly, nonatomic) __weak id <NavigationDelegate> navigationDelegate; // @synthesize navigationDelegate=_navigationDelegate;
- (void)presentOverViewController:(id)arg1 completion:(CDUnknownBlockType)arg2 dismissBlock:(CDUnknownBlockType)arg3;
- (_Bool)shouldDismissViewControllerWhenEnterBackground;
- (double)transitionDuration:(id)arg1;
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

