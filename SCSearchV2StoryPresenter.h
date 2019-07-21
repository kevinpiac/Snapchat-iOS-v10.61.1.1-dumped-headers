//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCOperaPresenterDelegate-Protocol.h"
#import "SCSearchV2StoryPresenting-Protocol.h"

@class NSString, SCContextOperaPlaylistPlugin, SCOperaInlinePrefetcherPlugin, SCOperaPlaylistPlugin, SCOperaPresenter, SCUserSession, UIViewController;
@protocol NavigationDelegate, SCStoriesMediaCoordinating, SCStoriesPlaybackDataProviding;

@interface SCSearchV2StoryPresenter : NSObject <SCOperaPresenterDelegate, SCSearchV2StoryPresenting>
{
    SCUserSession *_userSession;
    id <NavigationDelegate> _navigationDelegate;
    id <SCStoriesPlaybackDataProviding> _storiesPlaybackDataProviding;
    id <SCStoriesMediaCoordinating> _storiesMediaCoordinator;
    SCOperaPresenter *_operaPresenter;
    SCOperaPlaylistPlugin *_playlistPlugin;
    SCOperaInlinePrefetcherPlugin *_inlinePrefetchPlugin;
    SCContextOperaPlaylistPlugin *_contextPlugin;
    UIViewController *_presentingViewController;
    _Bool _isPresenting;
}

- (void).cxx_destruct;
- (id)_newFriendStoriesPlugin;
- (id)_newOperaPluginsWithPlaylistPlugin:(id)arg1;
- (id)_newPlaylistStoriesPlugin;
- (void)_presentOperaWithDataModels:(id)arg1 playlistPlugin:(id)arg2 fromBaseView:(id)arg3 onViewController:(id)arg4;
- (void)_presentOperaWithPlaylistFetcher:(id)arg1 fromBaseView:(id)arg2 onViewController:(id)arg3;
- (id)initWithUserSession:(id)arg1 storiesPlaybackDataProvider:(id)arg2 storiesMediaCoordinator:(id)arg3 navigationDelegate:(id)arg4;
- (_Bool)isPresenting;
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
- (void)presentStoriesForGroupId:(id)arg1 fromBaseView:(id)arg2 onViewController:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
