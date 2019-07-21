//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCOperaPresenterDelegate-Protocol.h"

@class NSArray, NSString, SCDiscoverFeedMiniProfileHandler, SCImpalaWatchedStateUpdatePlugin, SCOperaPresenter, UIView;
@protocol SCImpalaStoryPlayerPresenterDelegate;

@interface SCImpalaStoryPlayerPresenter : NSObject <SCOperaPresenterDelegate>
{
    SCOperaPresenter *_operaPresenter;
    SCImpalaWatchedStateUpdatePlugin *_watchedStatePlugin;
    SCDiscoverFeedMiniProfileHandler *_miniProfileHandler;
    _Bool _didFinishPresenting;
    _Bool _isPresenting;
    NSArray *_baseViews;
    UIView *_desiredBaseView;
    UIView *_currentBaseView;
    CDUnknownBlockType _pendingCompletion;
    id <SCImpalaStoryPlayerPresenterDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)_completeWithErrorIfNeeded:(id)arg1;
- (void)_updateBaseView:(id)arg1;
@property(nonatomic) __weak id <SCImpalaStoryPlayerPresenterDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dismissWithAnimation:(_Bool)arg1;
@property(readonly, nonatomic, getter=isPresenting) _Bool presenting;
- (void)operaPresenter:(id)arg1 didBeginPlayingPlaylistGroupDataModel:(id)arg2;
- (void)operaPresenter:(id)arg1 didFinishViewingPlaylistGroupDataModel:(id)arg2 nextGroupDataModel:(id)arg3;
- (void)operaPresenterDidCancelDismissing:(id)arg1;
- (void)operaPresenterDidFailToPresent:(id)arg1;
- (void)operaPresenterDidFinishDismissing:(id)arg1;
- (void)operaPresenterDidFinishPresenting:(id)arg1 transitionAnimator:(id)arg2;
- (void)operaPresenterDidTearDown:(id)arg1;
- (void)operaPresenterWillBeginAnimatingToDismiss:(id)arg1;
- (void)operaPresenterWillBeginDismissing:(id)arg1 transitionAnimator:(id)arg2;
- (void)operaPresenterWillBeginPresenting:(id)arg1 transitionAnimator:(id)arg2;
- (void)presentWithPlaylistFetcher:(id)arg1 presentingViewController:(id)arg2 useCircleTransition:(_Bool)arg3 baseViews:(id)arg4 startingBaseViewIndex:(unsigned long long)arg5 userSession:(id)arg6 navigationDelegate:(id)arg7 contentViewSource:(long long)arg8 trackWatchedStates:(_Bool)arg9 viewingType:(long long)arg10 completion:(CDUnknownBlockType)arg11;
- (void)updateBaseViews:(id)arg1 startingBaseViewIndex:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

