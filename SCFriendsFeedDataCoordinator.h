//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCFriendsFeedDataCoordinating-Protocol.h"
#import "SCTraceEnabled-Protocol.h"

@class NSArray, NSString, SCDataCoordinatorListenerAnnouncer, SCDocObjectContext, SCDocObjectFetchedResult, SCLazy, SCQueuePerformer;
@protocol SCChatManiphestAdapter, SCDocObjectObservationToken;

@interface SCFriendsFeedDataCoordinator : NSObject <SCTraceEnabled, SCFriendsFeedDataCoordinating>
{
    NSArray *_friendsFeedItems;
    SCDocObjectContext *_docObjectContext;
    SCLazy *_activeMessageDataCoordinatorLazy;
    SCLazy *_multiRecipientDataCoordinatorLazy;
    SCLazy *_personDataCoordinatorLazy;
    SCLazy *_storiesDataCoordinatorLazy;
    SCLazy *_presenceInfoDataCoordinatorLazy;
    SCDataCoordinatorListenerAnnouncer *_eventAnnouncer;
    SCQueuePerformer *_dataUpdatePerformer;
    SCDocObjectFetchedResult *_feedItemInfo;
    id <SCDocObjectObservationToken> _feedItemInfoObservationToken;
    id <SCChatManiphestAdapter> _maniphestAdapter;
    NSString *_currentUsername;
    unsigned long long _numberOfConsumableItems;
    _Bool _shouldPromoteTeamSnapchat;
}

+ (id)dataCoordinatorIdentifier;
- (void).cxx_destruct;
- (void)_announceDataCoordinatorUpdateWithDataRequest:(id)arg1;
- (void)_buildFeedItemsAndUpdate:(id)arg1 dataRequest:(id)arg2 activeMessageDataByFeedId:(id)arg3 entityDataByFeedId:(id)arg4 storiesDataByFeedId:(id)arg5 activePresenceInfoByFeedId:(id)arg6;
- (id)_fetchAndObserveFeedItemInfo;
- (void)_fetchFeedInfoWithFeedItemInfos:(id)arg1 dataRequest:(id)arg2;
- (void)_handleClearAllFeedWithDataRequest:(id)arg1;
- (void)_handleClearFeedItemId:(id)arg1 dataRequest:(id)arg2;
- (void)_handleUpdatesWithDataRequest:(id)arg1;
- (void)_performHandleUpdatesWithDataRequest:(id)arg1;
- (void)_updateFeedItemInfo:(id)arg1;
- (void)_updateFriendsFeedItemsWithFeedItems:(id)arg1 numberOfConsumableItems:(unsigned long long)arg2 dataRequest:(id)arg3;
- (void)addDataUpdateListener:(id)arg1;
- (void)dataCoordinatorDidUpdateWithIdentifier:(id)arg1 dataRequest:(id)arg2;
- (id)friendsFeedItems;
- (void)handleDataRequest:(id)arg1;
- (id)initWithDocObjectContext:(id)arg1 activeMessageDataCoordinatorLazy:(id)arg2 multiRecipientDataCoordinator:(id)arg3 personDataCoordinatorLazy:(id)arg4 storiesDataCoordinatorLazy:(id)arg5 presenceInfoDataCoordinatorLazy:(id)arg6 maniphestAdapter:(id)arg7 currentUsername:(id)arg8;
@property(nonatomic) unsigned long long numberOfConsumableItems; // @synthesize numberOfConsumableItems=_numberOfConsumableItems;
- (void)removeDataUpdateListener:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

