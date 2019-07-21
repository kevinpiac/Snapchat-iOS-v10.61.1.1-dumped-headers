//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet, NSNumber, NSString, SCQueuePerformer, SCSnapAds;

@interface SCCheetahPromotedStoriesLogger : NSObject
{
    NSNumber *_currentStoryViewingSessionId;
    _Bool _isInStoryViewingSession;
    NSMutableDictionary *_serveItemIdToSequenceNumberMap;
    NSMutableSet *_trackedTileDisplayServeItemIdForCurrentDiscoverSession;
    NSMutableDictionary *_storyIdToNoFillPromotedStoryMap;
    SCQueuePerformer *_performer;
    struct CGSize _screenSize;
    SCSnapAds *_snapAdsApi;
    NSString *_currentDiscoverSessionId;
}

+ (id)shared;
- (void).cxx_destruct;
- (void)_clearNoFillPromotedStoryInfo;
- (id)_getNoFillInfoForStoryId:(id)arg1;
- (long long)_getSequenceIdForServeItemId:(id)arg1;
- (void)_logAdTileViewEngagementImpression:(id)arg1;
- (void)_logAdTileViewOptOutDisplayImpression:(id)arg1;
- (void)_logAdTileViewTileImpression:(id)arg1 data:(id)arg2 minimumVisibleFraction:(double)arg3;
- (void)_registerNoFillPromotedStory:(id)arg1 forStoryId:(id)arg2;
- (void)_resetDiscoverSessionData;
- (id)_sessionIdFromPageSessionId:(id)arg1 cheetahStory:(id)arg2;
- (void)clearNoFillPromotedStoryInfo;
@property(readonly, copy, nonatomic) NSString *currentDiscoverSessionId; // @synthesize currentDiscoverSessionId=_currentDiscoverSessionId;
- (void)didFinishStoryViewingSession;
- (void)didStartStoryViewingSession;
- (void)firePromotedStoryTileImpression:(id)arg1 thirdPartyTrackURLs:(id)arg2 sessionId:(id)arg3 adIdentifier:(id)arg4;
- (id)getNoFillInfoForStoryId:(id)arg1;
- (id)init;
- (void)logAdTileViewWithPromotedStory:(id)arg1 didEngage:(_Bool)arg2 viewedTime:(id)arg3 minimumVisibleFraction:(double)arg4;
- (void)logPromotedStoryDidFinishPlaying:(id)arg1;
- (void)logPromotedStoryDidFinishPlaying:(id)arg1 adTrackInfo:(id)arg2;
- (void)logPromotedStoryOpened:(id)arg1 pageSessionId:(id)arg2;
- (void)logPromotedStoryTileImpression:(id)arg1 data:(id)arg2 pageSessionId:(id)arg3 minimumVisibleFraction:(double)arg4;
- (void)registerNoFillPromotedStory:(id)arg1 forStoryId:(id)arg2;
- (void)reportPromotedStoryWithFlaggedReasonType:(long long)arg1 exitType:(long long)arg2 additionalData:(id)arg3;

@end

