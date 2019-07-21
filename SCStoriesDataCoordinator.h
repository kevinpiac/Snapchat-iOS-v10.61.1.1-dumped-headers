//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCDataCoordinating-Protocol.h"

@class NSString, SCDataCoordinatorListenerAnnouncer, SCDocObjectContext, SCQueuePerformer, SCSessionRequestManager, SCStoriesCustomStoriesMetadataFetcher, SCStoriesSummariesObserver;

@interface SCStoriesDataCoordinator : NSObject <SCDataCoordinating>
{
    SCStoriesSummariesObserver *_storiesSummariesObserver;
    SCDataCoordinatorListenerAnnouncer *_eventAnnouncer;
    SCDocObjectContext *_docObjectContext;
    SCSessionRequestManager *_sessionRequestManager;
    SCQueuePerformer *_docObjectPerformer;
    SCQueuePerformer *_utilityPerformer;
    SCStoriesCustomStoriesMetadataFetcher *_customStoriesMetadataFetcher;
    NSString *_currentUsername;
}

+ (id)dataCoordinatorIdentifier;
- (void).cxx_destruct;
- (void)DEPRECATED_applyStoriesResponse:(id)arg1 fetchTriggerIdentifier:(id)arg2 isDeltaFetch:(_Bool)arg3 shouldFullyFetchMobstoriesMetadata:(_Bool)arg4 completionQueue:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)DEPRECATED_fetchPublications:(id)arg1 requestSource:(id)arg2;
- (void)_announceDataCoordinatorUpdateWithDataRequest:(id)arg1;
- (CDUnknownBlockType)_resultHandlerForDataRequest:(id)arg1;
- (void)addDataUpdateListener:(id)arg1;
- (void)customStoryMetadataWithPublicationId:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchFriendStoriesDeltaCursor:(CDUnknownBlockType)arg1;
- (void)fetchRankedStoryIdentifiersWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchRankedStoryIdsWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchUnwipedLegacyViewStatuses:(CDUnknownBlockType)arg1;
- (void)handleDataRequest:(id)arg1;
- (id)initWithSessionRequestManager:(id)arg1 docObjectContext:(id)arg2 currentUserId:(id)arg3 currentUsername:(id)arg4;
- (void)removeDataUpdateListener:(id)arg1;
- (void)storiesSummaryFilteredByIds:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)storySnapsInfoForStoryIds:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)wipeLegacyViewStatuses;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
