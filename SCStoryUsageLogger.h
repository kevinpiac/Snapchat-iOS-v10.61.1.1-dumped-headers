//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCLongformContentViewLogger-Protocol.h"

@class NSString, SCLazy, SCStoryLoggerListenerAnnouncer, StoryStoryViewSession;

@interface SCStoryUsageLogger : NSObject <SCLongformContentViewLogger>
{
    SCLazy *_lazyLoggingController;
    _Bool _shouldSamplePlaybackMetrics;
    SCStoryLoggerListenerAnnouncer *_listenerAnnouncer;
    StoryStoryViewSession *_storyStoryViewSession;
    StoryStoryViewSession *_previousStoryStoryViewSession;
}

+ (id)_adSkipReasonStringForAdSkipReason:(long long)arg1;
+ (long long)_fromMediaTypeToSCAMediaType:(long long)arg1;
+ (id)_storySnapPostFromStory:(id)arg1;
+ (long long)_storyTypeForStorySnapDeleteEventFromStory:(id)arg1;
+ (double)roundCGFloat:(double)arg1;
+ (id)sharedInstance;
+ (long long)storyTypeFromStory:(id)arg1;
+ (long long)storyTypeSpecificWithFriendStories:(id)arg1 story:(id)arg2;
- (void).cxx_destruct;
- (_Bool)_containsGeofilter:(id)arg1;
- (id)_createGeofilterStorySnapPost:(id)arg1 story:(id)arg2;
- (unsigned long long)_friendLinkHopForGroupStoryId:(id)arg1;
- (id)_getMischeifIdIfPossible:(id)arg1;
- (id)_groupStoryLoggingIdForId:(id)arg1;
- (_Bool)_isGroupStoryPostable:(id)arg1;
- (void)_logGeofilterStorySnapPostForStorySnapPostEvent:(id)arg1 story:(id)arg2;
- (void)_logGeofilterStorySnapScreenshotForStory:(id)arg1 timeViewed:(double)arg2 isLocal:(_Bool)arg3;
- (void)_logGeofilterStorySnapView:(id)arg1 currentStoriesViewingSession:(id)arg2 userSession:(id)arg3;
- (void)_logRemoveStoryWithClientId:(id)arg1 reason:(id)arg2 postingState:(long long)arg3 mediaState:(long long)arg4 mediaType:(long long)arg5;
- (void)_logStorySnapPostWithEvent:(id)arg1 story:(id)arg2;
- (void)_setCommonPropertiesForViewEvent:(id)arg1 story:(id)arg2 videoViewTimeSec:(double)arg3 isFullyViewed:(_Bool)arg4 currentStoriesViewingSession:(id)arg5;
- (_Bool)_shouldReportViewLocationPosition:(long long)arg1;
- (long long)_storyAccessTypeForFriendStories:(id)arg1;
- (id)_storyLoggingController;
- (id)_storySnapScreenshotEventForStory:(id)arg1 timeViewed:(double)arg2;
- (long long)_storyTypeSpecificForCurrentFriendStoriesViewingSession:(id)arg1;
- (long long)_storyTypeSpecificForGroupStoryId:(id)arg1;
- (void)_trackAdImpressionForThirdParty:(id)arg1 currentStoriesViewingSession:(id)arg2 userSession:(id)arg3 snappableInviteAction:(long long)arg4;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)clearCurrentStoryStoryViewSession;
- (void)clearStoriesViewingSession;
- (id)init;
@property(readonly, nonatomic) SCStoryLoggerListenerAnnouncer *listenerAnnouncer; // @synthesize listenerAnnouncer=_listenerAnnouncer;
- (void)logAdSubscriptionLongformView:(id)arg1 isSubscribed:(_Bool)arg2;
- (void)logBusinessStorySnapPost:(id)arg1 businessIds:(id)arg2 userSession:(id)arg3;
- (void)logDeleteGroupStoryWithPublicationId:(id)arg1 storyTypeSpecific:(long long)arg2 leaveReason:(long long)arg3;
- (void)logDeleteStorySnap:(id)arg1;
- (void)logFailedToCreateGroupStory:(long long)arg1;
- (void)logGroupStoryCreateOptionsView:(long long)arg1 createSource:(long long)arg2;
- (void)logGroupStoryCreationForSession:(id)arg1;
- (void)logGroupStorySettingsView:(id)arg1 withAutosave:(_Bool)arg2 viewSource:(long long)arg3;
- (void)logLiveStoryDeepLinkUnavailableForPosterId:(id)arg1;
- (void)logLocalWebpageViewWithPageHeightTotal:(double)arg1 pageHeightSeen:(double)arg2 inlineVideosTotalCount:(long long)arg3 inlineVideosViewedCount:(unsigned long long)arg4 inlineVideosTotalTimeViewedSec:(double)arg5 currentViewingSession:(id)arg6;
- (void)logLongformCameraViewWithLensSessionId:(id)arg1 lensLoadedOnEntry:(_Bool)arg2 lensLoadedOnExit:(_Bool)arg3 loadingTimeSec:(double)arg4 viewDurationTimeSec:(double)arg5 currentViewingSession:(id)arg6;
- (void)logLongformVideoViewWithStartedWithCaptionOn:(_Bool)arg1 videoWithCaptionOnTimeViewedSeconds:(double)arg2 videoDurationSeconds:(double)arg3 videoViewDurationSeconds:(double)arg4 aspectRatio:(double)arg5 videoInLandscapeModeTimeViewedSeconds:(double)arg6 currentViewingSession:(id)arg7 videoRotationEnabled:(_Bool)arg8 videoRollMinDegree:(double)arg9 videoRollMaxDegree:(double)arg10;
- (void)logPlaybackStallCount:(unsigned long long)arg1 firstStallMediaTime:(double)arg2 firstStallDuration:(double)arg3 totalStallDuration:(double)arg4 currentlyStalled:(_Bool)arg5;
- (void)logProductView:(id)arg1;
- (void)logRemoteWebpageViewWithPageLoadCount:(long long)arg1 pageLoadErrorCount:(long long)arg2 loadedOnEntry:(_Bool)arg3 loadedOnExit:(_Bool)arg4 visiblePageLoadTimeSec:(double)arg5 userPermissionPromptCount:(unsigned long long)arg6 userPermissionPromptAllowedCount:(unsigned long long)arg7 webpageAutofillDetectedFields:(id)arg8 webpageDetectedFields:(id)arg9 webpageOnEditAutofilledFields:(id)arg10 totalInteractionItemCount:(id)arg11 lastInteractiveItemIndex:(id)arg12 interactionZoneStyle:(id)arg13 currentViewingSession:(id)arg14 isTopSnap:(_Bool)arg15;
- (void)logRemoveStory:(id)arg1 reason:(id)arg2;
- (void)logSaveEntireMyStories:(id)arg1 userSession:(id)arg2;
- (void)logSaveStorySnap:(id)arg1 userSession:(id)arg2;
- (void)logScreenshotStorySnap:(id)arg1;
- (void)logSkipStorySnapLegacy:(id)arg1;
- (void)logStoreView:(id)arg1;
- (void)logStoryAddToStoryButtonTap:(_Bool)arg1;
- (void)logStoryManagementViewWithViewTime:(double)arg1 storyType:(long long)arg2;
- (void)logStorySnapContextMenuViewWithId:(id)arg1 posterId:(id)arg2 mediaType:(long long)arg3 storyType:(long long)arg4 entryEvent:(long long)arg5;
- (void)logStorySnapPost:(id)arg1 derivedStory:(id)arg2;
- (void)logStorySnapShareSendWithId:(id)arg1 posterId:(id)arg2 mediaType:(long long)arg3 storyType:(long long)arg4 recipientCount:(unsigned long long)arg5 entryEvent:(long long)arg6 trackingId:(id)arg7 viewLocation:(long long)arg8;
- (void)logStoryStoryExpire:(id)arg1 numUnviewedExpiredStories:(unsigned long long)arg2;
- (void)logStoryStorySession:(id)arg1;
- (void)logStoryStoryView:(id)arg1;
- (void)logStoryViewerListPageViewWithViewTime:(double)arg1 profileSelectCount:(long long)arg2 maxCellViewIndex:(long long)arg3 failedBitmojiLoadCount:(long long)arg4 attemptedBitmojiLoadCount:(long long)arg5 successfulBitmojiLoadCount:(long long)arg6 source:(long long)arg7 totalViewCount:(long long)arg8;
- (void)logSubscriptionLongformView:(id)arg1;
- (void)logViewStorySnapWithRollMaxDegree:(double)arg1 rollMinDegree:(double)arg2 pinchToZoomMillis:(double)arg3 videoViewTimeSec:(double)arg4 isFullyViewed:(_Bool)arg5 source:(long long)arg6 currentStoriesViewingSession:(id)arg7 userSession:(id)arg8 snappableInviteAction:(long long)arg9 contextSnapViewMetrics:(id)arg10;
- (void)onStoryStoryViewStart:(id)arg1;
@property(retain, nonatomic) StoryStoryViewSession *previousStoryStoryViewSession; // @synthesize previousStoryStoryViewSession=_previousStoryStoryViewSession;
- (void)setBackgrounded;
@property(nonatomic) _Bool shouldSamplePlaybackMetrics; // @synthesize shouldSamplePlaybackMetrics=_shouldSamplePlaybackMetrics;
@property(retain, nonatomic) StoryStoryViewSession *storyStoryViewSession; // @synthesize storyStoryViewSession=_storyStoryViewSession;
- (void)updateSnapIndexCount:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

