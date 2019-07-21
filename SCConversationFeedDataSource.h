//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCDataCoordinatorListener-Protocol.h"
#import "SCEventListener-Protocol.h"
#import "SCFeedDataSource-Protocol.h"
#import "SCMapStatusFetchingListener-Protocol.h"
#import "SCMapStatusViewedStateListener-Protocol.h"
#import "SCTraceEnabled-Protocol.h"
#import "SCUpdateListener-Protocol.h"

@class NSArray, NSDictionary, NSString, SCCheetahFeedDebugManager, SCDisposableObserverLifecycle, SCFeedItemStateUpdater, SCFriendsFeedHapticsFeedbackRuleEvaluator, SCFriendsFeedQuickAddCarouselDataSource, SCFriendsFeedSnapReplayAnimationStateManager, SCFriendsFeedSubstituteAnimationStateManager, SCFriendsFeedViewModelCoordinator, SCScopedAccess, SCStoriesReplayManager, SCUserSession;
@protocol NSCopying, SCFeedDataSourceDelegate, SCFriendStoriesLoadingStatusHandling, SCPerforming;

@interface SCConversationFeedDataSource : NSObject <SCDataCoordinatorListener, SCMapStatusFetchingListener, SCMapStatusViewedStateListener, SCUpdateListener, SCFeedDataSource, SCTraceEnabled, SCEventListener>
{
    id <SCPerforming> _performer;
    SCUserSession *_userSession;
    NSArray *_viewModels;
    long long _currentSourceType;
    NSDictionary *_internalViewModelMap;
    NSDictionary *_viewModelIndexes;
    SCFeedItemStateUpdater *_feedItemStateUpdater;
    SCScopedAccess *_scopedLazyFriendsFeedDataCoordinator;
    SCScopedAccess *_scopedLazyFriendsFeedReadyLogger;
    SCScopedAccess *_scopedLazyFriendsFeedFirstRenderLatencyLogger;
    SCStoriesReplayManager *_storiesReplayMananger;
    SCFriendsFeedSubstituteAnimationStateManager *_substitueAnimationStateHandler;
    NSString *_lastPlayedSnapIdentifier;
    SCFriendsFeedSnapReplayAnimationStateManager *_snapReplayAnimationStateManager;
    SCFriendsFeedHapticsFeedbackRuleEvaluator *_hapticsFeedbackRuleEvaluator;
    _Bool _hasUpdatedViewModels;
    NSObject<NSCopying> *_pendingDataRequest;
    _Bool _shouldShowQuickAddCarousel;
    SCDisposableObserverLifecycle *_disposableObserverLifecycle;
    SCFriendsFeedQuickAddCarouselDataSource *_friendsFeedQuickAddCarouselDataSource;
    SCFriendsFeedViewModelCoordinator *_viewModelCoordinator;
    NSArray *_currentFriendsFeedItems;
    id <SCFriendStoriesLoadingStatusHandling> _storyLoadingStatusHandler;
    long long _unreadConversationCount;
    id <SCFeedDataSourceDelegate> _delegate;
    SCCheetahFeedDebugManager *_debugManager;
}

- (void).cxx_destruct;
- (long long)_carouselIndexForFeedItems:(id)arg1 extractDisplayTimestampBlock:(CDUnknownBlockType)arg2 unreadOrUnopenFilter:(CDUnknownBlockType)arg3;
- (void)_fetchFriendsFeedItemsAndUpdateWithDataRequest:(id)arg1 viewHasAppeared:(_Bool)arg2;
- (void)_idsForEventGroupsDidChange:(id)arg1;
- (void)_logSyncLatencyIfNecessaryForDataRequest:(id)arg1;
- (void)_performUpdateFriendsFeedViewModelsWithDataRequest:(id)arg1;
- (id)_recentViewModelMap;
- (void)_resumeFetchFriendsFeedItemsIfNeeded;
- (void)_setRecentViewModelMap:(id)arg1;
- (void)_triggerHapticsIfNeededAndUpdateWithFeedItems:(id)arg1 dataRequest:(id)arg2 renderContent:(id)arg3 viewHasAppeared:(_Bool)arg4;
- (void)_updateCarouselVisibilityWithSnapchattersCount:(long long)arg1;
- (void)_updateViewModelsAndReload:(id)arg1 dataRequest:(id)arg2 renderContent:(id)arg3 viewHasAppeared:(_Bool)arg4 hasFeedItemsChanged:(_Bool)arg5;
- (void)_warmUpViewModelsWithDataRequest:(id)arg1;
- (void)dataCoordinatorDidUpdateWithIdentifier:(id)arg1 dataRequest:(id)arg2;
- (void)dealloc;
@property(readonly, nonatomic) SCCheetahFeedDebugManager *debugManager; // @synthesize debugManager=_debugManager;
@property(nonatomic) __weak id <SCFeedDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didTriggerEventWithEventName:(id)arg1 announcerIdentifier:(id)arg2 extraData:(id)arg3;
- (void)didUpdateWithAnnouncerIdentifier:(id)arg1;
- (_Bool)hasUpdatedViewModels;
- (long long)indexForFeedId:(id)arg1;
- (id)initWithUserSession:(id)arg1 friendsFeedDataCoordinator:(id)arg2 friendsFeedReadyLogger:(id)arg3 friendsFeedFirstRenderLatencyLogger:(id)arg4 delegate:(id)arg5 storiesReplayManager:(id)arg6 substituteAnimationStateHandler:(id)arg7 snapReplayAnimationStateManager:(id)arg8 storyLoadingStatusHandler:(id)arg9 displayDateObservable:(id)arg10 friendsFeedQuickAddCarouselDataSource:(id)arg11 arroyoConversationIdsManager:(id)arg12 scopedStoriesAccess:(id)arg13 tooltipManager:(id)arg14;
- (void)mapStatusFetcherDidLoadStatuses:(id)arg1;
- (void)mapStatusViewedStateFetcher:(id)arg1 didUpdateStatusIds:(id)arg2;
- (void)resetFeedConversationsState;
- (void)resetFeedConversationsStateExcludingConversationId:(id)arg1;
- (void)resetPaidToReplayStatesExcludingConversations:(id)arg1;
- (void)resumeViewModelUpdates;
@property(nonatomic) long long unreadConversationCount; // @synthesize unreadConversationCount=_unreadConversationCount;
@property(nonatomic) long long type;
- (void)updateDataSourceType:(long long)arg1;
- (void)updateForViewDidFullyDisappear;
- (id)viewModels;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool searching;
@property(readonly) Class superclass;

@end

