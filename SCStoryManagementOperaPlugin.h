//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCOperaPlaylistEventTrackerPlugin.h"

#import "SCOperaPlaylistItemExtraPropertiesProvider-Protocol.h"
#import "SCStoryManagementActionHandlerDelegate-Protocol.h"
#import "SCStoryManagementViewCoordinatorDelegate-Protocol.h"

@class FBKVOController, NSDate, NSString, SCMyStories, SCOperaViewController, SCStoriesMyStoriesDataCoordinator, SCStoryManagementActionHandler, SCStoryManagementDataSource, SCStoryManagementViewCoordinator, SCUserSession;
@protocol SCOperaPlaylistItemController, SCOperaViewProvider;

@interface SCStoryManagementOperaPlugin : SCOperaPlaylistEventTrackerPlugin <SCOperaPlaylistItemExtraPropertiesProvider, SCStoryManagementActionHandlerDelegate, SCStoryManagementViewCoordinatorDelegate>
{
    SCMyStories *_myStories;
    id <SCOperaViewProvider> _chromeAvatarProvider;
    SCStoryManagementDataSource *_dataSource;
    SCStoryManagementViewCoordinator *_storyManagementCoordinator;
    SCStoryManagementActionHandler *_actionHandler;
    FBKVOController *_kvoController;
    NSDate *_presentationTime;
    _Bool _isForSingleStorySnap;
    _Bool _showManagementOnOpen;
    id <SCOperaPlaylistItemController> _playlistItemController;
    SCOperaViewController *_operaViewController;
    SCUserSession *_userSession;
    SCStoriesMyStoriesDataCoordinator *_myStoriesDataCoordinator;
}

- (void).cxx_destruct;
- (id)_currentFocusedStory;
- (void)_logStoryManagementView;
- (void)_myStoriesArrayDidChange:(id)arg1 myStories:(id)arg2;
- (void)_observeMyStories:(id)arg1;
- (void)_observeStory:(id)arg1;
- (void)_storyPostingStateDidChange:(id)arg1 story:(id)arg2;
- (void)dealloc;
- (void)extraPropertiesForDataModel:(id)arg1 item:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)extraPropertiesProvider;
- (id)initWithUserSession:(id)arg1 myStories:(id)arg2 storiesPlaybackDataProvider:(id)arg3 storiesMediaCoordinator:(id)arg4 replyDelegate:(id)arg5 startChatDelegate:(id)arg6 navigationDelegate:(id)arg7 isForSingleStorySnap:(_Bool)arg8 showManagementOnOpen:(_Bool)arg9 myStoriesDataCoordinator:(id)arg10;
- (_Bool)isHighPriorityEventListener;
- (void)operaViewDidSendEvent:(id)arg1 context:(id)arg2 params:(id)arg3;
- (id)registeredEventsForOperaSession;
- (void)setOperaViewController:(id)arg1;
- (void)setPlaylistItemController:(id)arg1;
- (void)storyManagementActionHandler:(id)arg1 scrollToSnapDataModel:(id)arg2;
- (void)storyManagementActionHandler:(id)arg1 willDeleteStoryWithClientId:(id)arg2;
- (void)storyManagementActionHandlerDismissStoryManagementView:(id)arg1;
- (void)storyManagementActionHandlerPausePlayback:(id)arg1;
- (id)storyManagementActionHandlerViewControllerForPresentation:(id)arg1;
- (void)storyManagementActionHandlerViewerDidUpdateForCurrentStory:(id)arg1;
- (void)storyManagementActionHandlerWillPlayStories:(id)arg1;
- (void)storyManagementViewCoordinator:(id)arg1 didFinishWithTransitionType:(unsigned long long)arg2 success:(_Bool)arg3;
- (void)storyManagementViewCoordinator:(id)arg1 willBeginWithTransitionType:(unsigned long long)arg2;
- (void)updateOperaConfiguration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

