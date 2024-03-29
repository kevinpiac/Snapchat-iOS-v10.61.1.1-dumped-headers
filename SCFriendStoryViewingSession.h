//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCOperaPlaylistItemExtraPropertiesProvider-Protocol.h"
#import "SCOperaSession-Protocol.h"
#import "SCTraceEnabled-Protocol.h"

@class CADisplayLink, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, SCAttachmentsLogger, SCFriendStoryChromeInteractionSession, SCFriendStoryReportSession, SCFriendStorySharingSession, SCOperaBlizzardLogger, SCOperaEventListenerAnnouncer, SCOperaPerformanceTrackingPlugin, SCOperaPlaybackEventSession, SCOperaViewController, SCStoriesOperaPlaybackSequence, SCStoriesSnapPlaybackMetadata, SCStoryBlizzardLogger, SCStoryDiagnosticsLogger, SCStoryUsageLogger, SCStoryUserProperties, SCUnlockableBlizzardLogger, SCUserSession, User;
@protocol NavigationDelegate, SCOperaPlaylistItemController, SCReplyDelegate, SCStartChatDelegate, SCStoriesMediaCoordinating, SCStoriesOperaPageProvider, SCStoriesPlaybackDataProviding;

@interface SCFriendStoryViewingSession : NSObject <SCTraceEnabled, SCOperaSession, SCOperaPlaylistItemExtraPropertiesProvider>
{
    SCUserSession *_userSession;
    User *_user;
    SCStoryUsageLogger *_usageLogger;
    SCStoryDiagnosticsLogger *_diagnosticsLogger;
    SCAttachmentsLogger *_attachmentsLogger;
    SCStoryBlizzardLogger *_storyBlizzardLogger;
    SCOperaBlizzardLogger *_operaBlizzardLogger;
    SCUnlockableBlizzardLogger *_unlockableBlizzardLogger;
    SCOperaPlaybackEventSession *_playbackEventInProgress;
    id <SCReplyDelegate> _replyDelegate;
    id <SCStartChatDelegate> _startChatDelegate;
    id <SCStoriesPlaybackDataProviding> _storiesPlaybackDataProvider;
    id <SCStoriesMediaCoordinating> _storiesMediaCoordinator;
    SCStoryUserProperties *_storyUserProperties;
    unsigned long long _previousSessionsUniqueSnapViewCount;
    unsigned long long _previousSessionsTotalSnapViewCount;
    unsigned long long _previousSessionsTotalSnapOpenCount;
    NSMutableSet *_autoAdvanceViewedUsernames;
    SCStoriesSnapPlaybackMetadata *_currentStorySnap;
    SCFriendStoryChromeInteractionSession *_chromeInteractionSession;
    SCFriendStoryReportSession *_reportSession;
    SCFriendStorySharingSession *_sharingSession;
    _Bool _currentFriendStoriesHaveStartedPlaying;
    _Bool _viewingSessionIsStopped;
    _Bool _isShowingLoadingScreen;
    _Bool _didEnterBackground;
    _Bool _shouldShowTapToolTipsForCurrentStory;
    NSMutableDictionary *_firstStoryDisplayedForUserName;
    id <NavigationDelegate> _navDelegate;
    _Bool _isShowingStoryInterstitial;
    unsigned long long _entryGroupIndex;
    CADisplayLink *_foregroundDisplayLink;
    double _playlistStartSetupViewModelsTimeMs;
    double _playlistSetupViewModelsTimeMs;
    SCOperaPerformanceTrackingPlugin *_performanceTrackingPlugin;
    long long _initialPlaySource;
    long long _snappableInviteAction;
    long long _totalViewedStoriesCount;
    long long _viewLocation;
    long long _sourceViewLocation;
    long long _storyPlayMode;
    _Bool _isFullyViewed;
    _Bool _isTopSnap;
    _Bool _isViewingLongform;
    long long _viewingType;
    unsigned long long _liveStoriesCount;
    unsigned long long _entryReason;
    unsigned long long _defaultStoryViewingActionContext;
    NSMutableArray *_currentFriendStoriesViewingSessions;
    unsigned long long _loadingScreenCount;
    long long _playSource;
    SCOperaEventListenerAnnouncer *_eventAnnouncer;
    id <SCStoriesOperaPageProvider> _operaPageProvider;
    SCStoriesOperaPlaybackSequence *_previousStoriesPlaybackSequenceDisplayed;
    SCOperaViewController *_operaVC;
    unsigned long long _initialFriendsPlayListCount;
    id <SCOperaPlaylistItemController> _playlistItemController;
}

+ (id)_buildPlaybackIntentToNextLogParamsWithStorySnap:(id)arg1 loadPhase:(long long)arg2 isStreaming:(_Bool)arg3 playbackEvent:(id)arg4 viewLocation:(long long)arg5;
+ (void)_fetchMediaLoadState:(id)arg1 storySnap:(id)arg2 storiesMediaCoordinator:(id)arg3 completion:(CDUnknownBlockType)arg4;
+ (id)announcerIdentifier;
- (void).cxx_destruct;
- (id)_buildStoryStorySessionLogParameters;
- (void)_didStartPlayingStorySnap:(id)arg1 storiesPlaybackSequence:(id)arg2;
- (void)_editionDoesDisplaySinceForegroundedApp;
- (id)_extraToolTipsPropertiesForStorySnap:(id)arg1;
- (void)_incrementTotalViewedStoriesCount;
- (void)_logPlaybackIntentToNextEventForStorySnap:(id)arg1 loadPhase:(long long)arg2 isStreaming:(_Bool)arg3;
- (void)_logPlaybackPerformance:(id)arg1 storySnap:(id)arg2 isStreaming:(_Bool)arg3 params:(id)arg4;
- (void)_logStoryStoryViewSession;
- (void)_markCheetahSwipeLeftInterstitialCompleted;
- (void)_pauseSession;
- (long long)_playSourceUponOpenOpera;
- (void)_removeFriendStoryViewingSession:(id)arg1;
- (void)_setupChromeInteractionSession;
- (void)_setupReportSession;
- (void)_setupSharingSession;
- (_Bool)_shouldShowCheetahSwipeLeftInterstitial:(id)arg1;
- (unsigned long long)_totalViewedSnapsCount;
- (unsigned long long)_uniqueViewedSnapsCount;
- (unsigned long long)_uniqueViewedStoriesCount;
- (void)_updateCurrentFriendStoryViewingSessionsWithEvent:(id)arg1 context:(id)arg2;
- (void)_updateFirstPagePropertyWithTooltipIfNecessary;
- (unsigned long long)currentFriendStoriesAbsoluteIndex;
- (unsigned long long)currentFriendStoriesRelativeIndex;
- (unsigned long long)currentFriendStoriesViewingSessionLevelIndex;
@property(readonly, nonatomic) NSMutableArray *currentFriendStoriesViewingSessions; // @synthesize currentFriendStoriesViewingSessions=_currentFriendStoriesViewingSessions;
- (id)currentFriendStoryViewingSession;
- (void)dealloc;
@property(nonatomic) unsigned long long defaultStoryViewingActionContext; // @synthesize defaultStoryViewingActionContext=_defaultStoryViewingActionContext;
- (void)didUpdateFriendsPlaylistCount:(unsigned long long)arg1;
@property(nonatomic) unsigned long long entryReason; // @synthesize entryReason=_entryReason;
@property(retain, nonatomic) SCOperaEventListenerAnnouncer *eventAnnouncer; // @synthesize eventAnnouncer=_eventAnnouncer;
- (long long)exitReason;
- (void)extraPropertiesForDataModel:(id)arg1 item:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)extraPropertiesForStorySnap:(id)arg1;
- (unsigned long long)finishWaitingReason;
- (id)firstDisplayedStorySnapForStoriesPlaybackSequence:(id)arg1;
- (_Bool)hasSessionEnded;
- (unsigned long long)indexOfStoryRelativeToInitialStorySnap:(id)arg1;
- (id)initWithUserSession:(id)arg1 user:(id)arg2 replyDelegate:(id)arg3 startChatDelegate:(id)arg4 storiesPlaybackDataProvider:(id)arg5 storiesMediaCoordinator:(id)arg6 storyUserProperties:(id)arg7 storyPlayMode:(long long)arg8 viewLocation:(long long)arg9 viewingType:(long long)arg10 storyViewingActionContext:(unsigned long long)arg11 playSource:(long long)arg12 navigationDelegate:(id)arg13 storyBlizzardLogger:(id)arg14 operaBlizzardLogger:(id)arg15 unlockableBlizzardLogger:(id)arg16;
@property(readonly, nonatomic) unsigned long long initialFriendsPlayListCount; // @synthesize initialFriendsPlayListCount=_initialFriendsPlayListCount;
@property(readonly, nonatomic) _Bool isTopSnap; // @synthesize isTopSnap=_isTopSnap;
@property(readonly, nonatomic) _Bool isViewingLongform; // @synthesize isViewingLongform=_isViewingLongform;
- (id)lastInteraction;
@property(nonatomic) unsigned long long liveStoriesCount; // @synthesize liveStoriesCount=_liveStoriesCount;
@property(readonly, nonatomic) unsigned long long loadingScreenCount; // @synthesize loadingScreenCount=_loadingScreenCount;
@property(nonatomic) __weak id <SCStoriesOperaPageProvider> operaPageProvider; // @synthesize operaPageProvider=_operaPageProvider;
@property(nonatomic) __weak SCOperaViewController *operaVC; // @synthesize operaVC=_operaVC;
- (void)operaViewDidSendEvent:(id)arg1 context:(id)arg2 params:(id)arg3;
@property(readonly, nonatomic) long long playSource; // @synthesize playSource=_playSource;
- (id)playlistFriendNames;
@property(nonatomic) __weak id <SCOperaPlaylistItemController> playlistItemController; // @synthesize playlistItemController=_playlistItemController;
@property(readonly, nonatomic) SCStoriesOperaPlaybackSequence *previousStoriesPlaybackSequenceDisplayed; // @synthesize previousStoriesPlaybackSequenceDisplayed=_previousStoriesPlaybackSequenceDisplayed;
- (id)registeredEventsForOperaSession;
@property(nonatomic) long long viewingType; // @synthesize viewingType=_viewingType;
- (_Bool)shouldUseExtendedResetToCamera;
- (void)startSession;
- (void)stopSession;
- (unsigned long long)totalOpenedSnapsCount;
- (unsigned long long)totalViewedAdSnapsCount;
- (unsigned long long)totalViewedAdStoriesCount;
- (unsigned long long)uniqueViewedAdSnapsCount;
- (unsigned long long)uniqueViewedAdStoriesCount;
- (void)updateOperaConfiguration:(id)arg1;
- (void)userDidTakeScreenshot;
- (void)viewDidEnterBackground;
- (void)viewWillEnterBackground;
- (void)viewWillEnterForeground;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

