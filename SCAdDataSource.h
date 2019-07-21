//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCMediaOwnerProtocol-Protocol.h"
#import "SCOperaPlaylistAdTrackProtocol-Protocol.h"
#import "SCOperaPlaylistDataSource-Protocol.h"
#import "SCStreamingURLProviding-Protocol.h"

@class NSMutableArray, NSMutableDictionary, NSString, SCAdOperaMediaManager, SCAdPlacement, SCAdResponseAdDataV2, SCAdTrackerHelper, SCDiscoverOperaMediaManager, SCOperaViewController, SCSnapAdsAdLifecycleWatermarkEventsTracker, SCStoriesAdOpportunity, SCUserSession;
@protocol SCOperaPlaylistItemController, SCStreamingURLProviding;

@interface SCAdDataSource : NSObject <SCStreamingURLProviding, SCOperaPlaylistDataSource, SCMediaOwnerProtocol, SCOperaPlaylistAdTrackProtocol>
{
    SCUserSession *_userSession;
    SCDiscoverOperaMediaManager *_discoverMediaManager;
    SCAdOperaMediaManager *_adMediaManager;
    NSMutableDictionary *_skippedAdAfterItemIdToAdItemIdMap;
    NSMutableDictionary *_insertedAditemIdToDataModelMap;
    id <SCStreamingURLProviding> _streamingURLProvider;
    SCOperaViewController *_operaViewController;
    id <SCOperaPlaylistItemController> _playlistItemController;
    SCStoriesAdOpportunity *_adOpportunity;
    NSMutableDictionary *_adRequestClientIdToAdResponseV1Map;
    NSMutableDictionary *_groupIdToInsertedAdItemIdsByOrder;
    NSMutableDictionary *_insertedAdGroupIdToGroupMap;
    SCAdResponseAdDataV2 *_pendingInsertAdDataModel;
    NSMutableArray *_insertedAdGroupIdsByOrder;
    NSMutableDictionary *_skippedAdAfterGroupIdToAdGroupIdMap;
    NSMutableDictionary *_insertedAdGroupIdToDataModelMap;
    long long _viewLocation;
    SCAdTrackerHelper *_adTrackerHelper;
    SCSnapAdsAdLifecycleWatermarkEventsTracker *_lifecycleTracker;
    SCAdPlacement *_currentAdPlacement;
}

+ (id)_adOpportunityTypeMap;
- (void).cxx_destruct;
- (id)_adSkipEventWithDataModel:(id)arg1;
- (_Bool)_enableConvertingAdResponseToPageProperties:(id)arg1;
- (void)_logAdInserted:(id)arg1 insertionRetryCount:(long long)arg2;
- (void)_onAdTransformComplete:(id)arg1;
- (void)_onAdTransformError:(id)arg1;
@property(retain, nonatomic) SCStoriesAdOpportunity *adOpportunity; // @synthesize adOpportunity=_adOpportunity;
- (long long)adPositionForItem:(id)arg1;
- (unsigned long long)adProductType;
- (unsigned long long)adProductTypeForItem:(id)arg1;
- (id)adRequestClientIdForGroup:(id)arg1;
- (id)adRequestClientIdForItem:(id)arg1;
@property(retain, nonatomic) NSMutableDictionary *adRequestClientIdToAdResponseV1Map; // @synthesize adRequestClientIdToAdResponseV1Map=_adRequestClientIdToAdResponseV1Map;
- (id)adRequestId;
- (id)adResponseForGroup:(id)arg1;
- (id)adResponseForItem:(id)arg1;
- (id)adServeLoggingContext;
- (id)adSessionId;
- (id)adSkipEvent;
- (long long)adSnapIndexForItem:(id)arg1;
@property(retain, nonatomic) SCAdTrackerHelper *adTrackerHelper; // @synthesize adTrackerHelper=_adTrackerHelper;
- (id)adViewContextForGroup:(id)arg1;
- (id)adViewContextForItem:(id)arg1;
- (id)adViewContextForSkippedGroup:(id)arg1;
- (id)adViewContextForSkippedItem:(id)arg1 aroundItem:(id)arg2 pageLeft:(_Bool)arg3;
- (id)cacheMediaIds;
- (void)cacheUnViewedAdItemIfNecessary;
- (_Bool)canResolvePlaylistItemGroupDataModel:(id)arg1;
@property(retain, nonatomic) SCAdPlacement *currentAdPlacement; // @synthesize currentAdPlacement=_currentAdPlacement;
- (long long)currentDataModelLoadStatus;
- (id)dataModelForGroup:(id)arg1;
- (id)dataModelForItem:(id)arg1;
- (_Bool)didFinishViewingAdItem:(id)arg1 isViewingLongform:(_Bool)arg2;
- (id)extraPagePropertiesForDataModel:(id)arg1;
- (void)fetchMediaForPendingInsertAdWithCompletion:(CDUnknownBlockType)arg1;
- (id)getCurrentPendingAdRequestClientId;
@property(retain, nonatomic) NSMutableDictionary *groupIdToInsertedAdItemIdsByOrder; // @synthesize groupIdToInsertedAdItemIdsByOrder=_groupIdToInsertedAdItemIdsByOrder;
- (id)initWithUserSession:(id)arg1 viewLocation:(long long)arg2 adTrackerHelper:(id)arg3;
- (id)insertPendingAd;
- (_Bool)insertPendingAdAfterItem:(id)arg1;
- (_Bool)insertPendingAdAfterItem:(id)arg1 insertionRetryCount:(long long)arg2;
@property(retain, nonatomic) NSMutableDictionary *insertedAdGroupIdToDataModelMap; // @synthesize insertedAdGroupIdToDataModelMap=_insertedAdGroupIdToDataModelMap;
@property(retain, nonatomic) NSMutableDictionary *insertedAdGroupIdToGroupMap; // @synthesize insertedAdGroupIdToGroupMap=_insertedAdGroupIdToGroupMap;
@property(retain, nonatomic) NSMutableArray *insertedAdGroupIdsByOrder; // @synthesize insertedAdGroupIdsByOrder=_insertedAdGroupIdsByOrder;
- (_Bool)isAdContentLoopingForDataModel:(id)arg1;
- (_Bool)isAdGroup:(id)arg1;
- (_Bool)isAdSnap:(id)arg1;
- (_Bool)isDismissingSessionWithItem:(id)arg1 isViewingLongform:(_Bool)arg2;
- (_Bool)isInsertedAdGroup:(id)arg1;
- (_Bool)isInsertedAdItem:(id)arg1;
- (_Bool)isNofillAdGroup:(id)arg1;
- (_Bool)isNofillAdItem:(id)arg1;
- (_Bool)isNofillUnskippableAdItem:(id)arg1;
- (_Bool)isSkippedAdItem:(id)arg1;
@property(retain, nonatomic) SCSnapAdsAdLifecycleWatermarkEventsTracker *lifecycleTracker; // @synthesize lifecycleTracker=_lifecycleTracker;
- (void)loadMediaForPlaylistItemGroup:(id)arg1;
- (long long)loadStatusForDataModel:(id)arg1;
- (void)logAdSkipWithAdGroup:(id)arg1;
- (void)logAdSkipWithAdItem:(id)arg1 aroundItem:(id)arg2 pageLeft:(_Bool)arg3;
- (void)logAdStoryOpportunityIfNecessaryWithSourceType:(long long)arg1 storyType:(long long)arg2;
- (id)mediaFileNames;
- (id)mediaLoadContexts;
- (_Bool)needToPrepareMediaBeforeDisplay;
@property(nonatomic) __weak SCOperaViewController *operaViewController; // @synthesize operaViewController=_operaViewController;
- (void)pagesPropertiesForDataModel:(id)arg1 completion:(CDUnknownBlockType)arg2;
@property(retain, nonatomic) SCAdResponseAdDataV2 *pendingInsertAdDataModel; // @synthesize pendingInsertAdDataModel=_pendingInsertAdDataModel;
@property(nonatomic) __weak id <SCOperaPlaylistItemController> playlistItemController; // @synthesize playlistItemController=_playlistItemController;
- (id)playlistItemGroupForDataModel:(id)arg1;
- (void)prepareMediaForItem:(id)arg1 waitForDownloading:(_Bool)arg2 startWaitingForDownloadCallback:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (void)removeMediaForItem:(id)arg1;
- (void)requestAdWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)resetInsertionData;
- (void)resetPendingAd;
- (void)resolvePlaylistItemGroup:(id)arg1;
@property(retain, nonatomic) NSMutableDictionary *skippedAdAfterGroupIdToAdGroupIdMap; // @synthesize skippedAdAfterGroupIdToAdGroupIdMap=_skippedAdAfterGroupIdToAdGroupIdMap;
@property(nonatomic) long long viewLocation; // @synthesize viewLocation=_viewLocation;
- (_Bool)shouldCachePendingAdAfterTearDown;
- (_Bool)shouldInsertPlaylistItem;
- (_Bool)shouldInsertPlaylistItemGroup;
- (id)skippedAdGroupAroundGroup:(id)arg1 pagedLeft:(_Bool)arg2;
- (id)skippedItemAroundItem:(id)arg1 pageLeft:(_Bool)arg2;
- (id)streamingURLForRequestInfo:(id)arg1;
- (id)targetingParameters;
- (void)teardown;
- (void)teardownDataModelForItem:(id)arg1;
- (unsigned long long)topSnapBackgroundTypeForAdItem:(id)arg1;
- (long long)totalAdCountForItem:(id)arg1;
- (double)totalTopSnapsMediaDurationInSecForAdGroup:(id)arg1;
- (void)unresolvePlaylistItemGroup:(id)arg1;
@property(readonly, nonatomic) SCUserSession *userSession; // @synthesize userSession=_userSession;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

