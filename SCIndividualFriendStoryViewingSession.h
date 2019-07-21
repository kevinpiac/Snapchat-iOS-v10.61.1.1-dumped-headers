//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableSet, SCFriendStoryViewingSession, SCOperaContextLongformViewLogger, SCOperaViewInteraction, SCScopedAccess, SCSessionRequestManager, SCStopwatch, SCStoriesOperaPlaybackSequence, SCStoriesSnapPlaybackMetadata, SCStoryBlizzardLogger, SCUnlockableBlizzardLogger, SCUserSession;
@protocol SCStoriesOperaPageProvider;

@interface SCIndividualFriendStoryViewingSession : NSObject
{
    SCStoryBlizzardLogger *_storyBlizzardLogger;
    SCUnlockableBlizzardLogger *_unlockableBlizzardLogger;
    SCOperaContextLongformViewLogger *_operaLongformLogger;
    id <SCStoriesOperaPageProvider> _operaPageProvider;
    SCUserSession *_userSession;
    long long _viewingType;
    SCSessionRequestManager *_requestManager;
    double _totalTimeForUniqueViewedSnaps;
    SCStoriesSnapPlaybackMetadata *_lastStorySnapStoppedPlaying;
    long long _viewLocation;
    long long _viewLocationPos;
    long long _storyPlayMode;
    _Bool _wasInitialyFullyViewed;
    SCStopwatch *_storyViewStopwatch;
    SCStopwatch *_snapViewStopwatch;
    SCStopwatch *_attachmentViewStopwatch;
    _Bool _showingloadingScreen;
    _Bool _friendStoriesHaveStartedPlaying;
    NSMutableArray *_viewedSnaps;
    NSMutableSet *_viewedStoriesClientIds;
    _Bool _didEnterFromInterstitial;
    SCScopedAccess *_scopedLazyStoriesDataCoordinator;
    SCScopedAccess *_stories;
    _Bool _didSwipeUp;
    _Bool _currentStoryDidShowLoadingScreen;
    _Bool _isFullyViewed;
    _Bool _currentStoryHasPlayed;
    SCStoriesOperaPlaybackSequence *_storiesPlaybackSequence;
    SCStoriesSnapPlaybackMetadata *_firstStorySnap;
    SCStoriesSnapPlaybackMetadata *_currentStorySnap;
    unsigned long long _storyViewingActionContext;
    unsigned long long _totalViewedSnapsCount;
    unsigned long long _totalOpenedSnapsCount;
    long long _mediaLoadContext;
    SCFriendStoryViewingSession *_friendStoryViewingSession;
    SCOperaViewInteraction *_entryInteraction;
}

- (void).cxx_destruct;
- (id)_buildStoryStoryViewLogParameters;
- (void)_clearCurrentStoryStatus;
- (_Bool)_containsGeofilter:(id)arg1;
- (_Bool)_isFullyViewedForStoriesPlaybackSequence:(id)arg1;
- (_Bool)_isLastStorySnapInStoriesPlaybackSequence:(id)arg1;
- (void)_markStoryAsViewedWithStorySnap:(id)arg1;
- (void)_reportGeofilterStorySnapViewWithStorySnap:(id)arg1 snappableInviteAction:(long long)arg2;
- (void)_reportStorySnapViewWithStorySnap:(id)arg1 fullyViewed:(_Bool)arg2 contextSnapViewMetrics:(id)arg3;
- (double)_snapTimeViewedSec;
- (long long)_storyAccessTypeForStoriesPlaybackSequence:(id)arg1;
- (unsigned long long)_totalSnapCount;
- (double)_totalStoryTime;
- (void)_updateRequestManagerContexts;
- (double)_viewedStoryTime;
- (double)attachmentTimeViewedSec;
@property(readonly, nonatomic) _Bool currentStoryDidShowLoadingScreen; // @synthesize currentStoryDidShowLoadingScreen=_currentStoryDidShowLoadingScreen;
@property(readonly, nonatomic) _Bool currentStoryHasPlayed; // @synthesize currentStoryHasPlayed=_currentStoryHasPlayed;
@property(readonly, nonatomic) SCStoriesSnapPlaybackMetadata *currentStorySnap; // @synthesize currentStorySnap=_currentStorySnap;
- (void)dealloc;
- (void)didChangePanelForStorySnap:(id)arg1 storiesPlaybackSequence:(id)arg2 toPanelIndex:(long long)arg3;
- (void)didDismissOptOutInterstitial;
- (void)didLongPressForStorySnap:(id)arg1 storiesPlaybackSequence:(id)arg2 isTopSnap:(_Bool)arg3;
- (void)didOpenFriendStorySnap:(id)arg1;
@property(readonly, nonatomic) _Bool didSwipeUp; // @synthesize didSwipeUp=_didSwipeUp;
- (void)didSwipeUpOnStorySnap:(id)arg1;
- (void)didTakeScreenshotOnCurrentStorySnap;
- (long long)entryEvent;
@property(readonly, nonatomic) SCOperaViewInteraction *entryInteraction; // @synthesize entryInteraction=_entryInteraction;
- (id)extraPropertiesForStorySnap:(id)arg1;
@property(readonly, nonatomic) SCStoriesSnapPlaybackMetadata *firstStorySnap; // @synthesize firstStorySnap=_firstStorySnap;
@property(readonly, nonatomic) __weak SCFriendStoryViewingSession *friendStoryViewingSession; // @synthesize friendStoryViewingSession=_friendStoryViewingSession;
- (id)initWithFirstStorySnap:(id)arg1 storiesPlaybackSequence:(id)arg2 userSession:(id)arg3 operaPageProvider:(id)arg4 storyPlayMode:(long long)arg5 viewingType:(long long)arg6 storyViewingActionContext:(unsigned long long)arg7 viewLocation:(long long)arg8 viewLocationPos:(long long)arg9 didEnterFromInterstitial:(_Bool)arg10 friendStoryViewingSession:(id)arg11 storyBlizzardLogger:(id)arg12 unlockableBlizzardLogger:(id)arg13;
@property(readonly, nonatomic) _Bool isFullyViewed; // @synthesize isFullyViewed=_isFullyViewed;
@property(readonly, nonatomic) long long mediaLoadContext; // @synthesize mediaLoadContext=_mediaLoadContext;
- (void)pauseShowingCurrentFriendStoriesWithIsShowingStoryInterstitial:(_Bool)arg1 lastInteraction:(id)arg2;
- (void)pauseShowingStorySnap:(id)arg1 context:(id)arg2 params:(id)arg3 lastInteraction:(id)arg4;
- (void)pauseViewingSession;
- (id)posterId;
- (void)resumeViewingSession;
- (void)retryLoadingStorySnap:(id)arg1;
- (void)skipShowingStorySnap:(id)arg1;
- (void)startPlayingStorySnap:(id)arg1 lastInteraction:(id)arg2;
- (void)startShowingLoadedStorySnap:(id)arg1 isViewingLongform:(_Bool)arg2 isStreaming:(_Bool)arg3;
- (void)startShowingLoadingStorySnap:(id)arg1;
- (void)startViewingSessionIsViewingLongform:(_Bool)arg1;
- (void)stopShowingFriendStoriesAndCancelRequests:(_Bool)arg1 isShowingStoryInterstitial:(_Bool)arg2;
- (void)stopShowingStorySnap:(id)arg1 context:(id)arg2 params:(id)arg3 lastInteraction:(id)arg4 isShowingStoryInterstitial:(_Bool)arg5;
@property(readonly, nonatomic) SCStoriesOperaPlaybackSequence *storiesPlaybackSequence; // @synthesize storiesPlaybackSequence=_storiesPlaybackSequence;
@property(readonly, nonatomic) unsigned long long storyViewingActionContext; // @synthesize storyViewingActionContext=_storyViewingActionContext;
@property(readonly, nonatomic) unsigned long long totalOpenedSnapsCount; // @synthesize totalOpenedSnapsCount=_totalOpenedSnapsCount;
@property(readonly, nonatomic) unsigned long long totalViewedSnapsCount; // @synthesize totalViewedSnapsCount=_totalViewedSnapsCount;
- (unsigned long long)uniqueViewedSnapsCount;
- (void)videoDidStartLoopAfterFullyViewedForStorySnap:(id)arg1 context:(id)arg2 params:(id)arg3;
- (void)willAdvanceToNextStorySnap:(id)arg1 storiesPlaybackSequence:(id)arg2 lastInteraction:(id)arg3;
- (void)willPageToAnotherStorySnap;

@end

