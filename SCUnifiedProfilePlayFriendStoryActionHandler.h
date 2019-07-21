//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCActionHandling-Protocol.h"
#import "SCOperaPresenterDelegate-Protocol.h"

@class NSString, SCContextOperaPlaylistPlugin, SCLazy, SCOperaPlaylistFeaturePlugin, SCOperaPresenter, SCUnifiedProfileNonFriendFriendStoriesProvider, SCUserSession, UIViewController;
@protocol NavigationDelegate, SCReplyDelegate, SCStartChatDelegate, SCStoriesPlaybackDataProviding, SCUnifiedProfileDisplayContentOverProfileDelegate, SCUnifiedProfilePlayFriendStoryActionHandlerDelegate;

@interface SCUnifiedProfilePlayFriendStoryActionHandler : NSObject <SCOperaPresenterDelegate, SCActionHandling>
{
    SCUserSession *_userSession;
    id <SCStoriesPlaybackDataProviding> _storiesPlaybackDataProvider;
    SCLazy *_myStoriesDataAccess;
    id <SCStoriesPlaybackDataProviding> _legacyStoriesPlaybackDataProvider;
    SCLazy *_storiesMediaCoordinator;
    SCLazy *_myStoriesMediaCoordinator;
    id <SCReplyDelegate> _replyDelegate;
    id <SCStartChatDelegate> _startChatDelegate;
    id <NavigationDelegate> _navigationDelegate;
    id <SCUnifiedProfileDisplayContentOverProfileDelegate> _displayContentDelegate;
    SCUnifiedProfileNonFriendFriendStoriesProvider *_nonFriendFriendStoriesProvider;
    SCOperaPlaylistFeaturePlugin *_storiesPlugin;
    SCContextOperaPlaylistPlugin *_contextPlugin;
    SCOperaPresenter *_storiesOperaPresenter;
    NSString *_currentStorySectionIdentifier;
    _Bool _shouldUpdateDismissBaseView;
    id <SCUnifiedProfilePlayFriendStoryActionHandlerDelegate> _delegate;
    UIViewController *_presentingViewController;
}

- (void).cxx_destruct;
- (void)_cleanUpOperaPresenter;
- (void)_playMyStoryFromBaseView:(id)arg1 storyType:(long long)arg2 storyIdentifier:(id)arg3 startingStoryId:(id)arg4 shouldUpdateDismissBaseView:(_Bool)arg5 rectangularAnimation:(_Bool)arg6 showManagementOnOpen:(_Bool)arg7 isForSingleSnap:(_Bool)arg8;
- (void)_playStoryForFriendUsername:(id)arg1 mergedPlaybackSequence:(id)arg2 baseView:(id)arg3;
- (void)_playStoryForGroup:(id)arg1 baseView:(id)arg2;
- (void)_playStoryForSnapchatter:(id)arg1 baseView:(id)arg2;
- (void)_playStoryWithFriendStories:(id)arg1 baseView:(id)arg2 isGroupStory:(_Bool)arg3;
- (void)_setupContextPluginIfNeeded;
- (void)_setupStoriesOperaPresenterIfNeeded;
@property(nonatomic) __weak id <SCUnifiedProfilePlayFriendStoryActionHandlerDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)handleActionWithSender:(id)arg1 actionModel:(id)arg2 fromSourceView:(id)arg3;
- (id)initWithUserSession:(id)arg1 storiesPlaybackDataProvider:(id)arg2 myStoriesDataAccess:(id)arg3 legacyStoriesPlaybackDataProvider:(id)arg4 storiesMediaCoordinator:(id)arg5 myStoriesMediaCoordinator:(id)arg6 replyDelegate:(id)arg7 startChatDelegate:(id)arg8 navigationDelegate:(id)arg9 displayContentDelegate:(id)arg10 nonFriendFriendStoriesProvider:(id)arg11;
- (_Bool)isPresentingStory;
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
@property(nonatomic) __weak UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
- (void)updateOperaDismissBaseView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
