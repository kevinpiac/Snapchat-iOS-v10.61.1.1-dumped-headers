//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCDataCoordinating-Protocol.h"
#import "SCDataCoordinatorListener-Protocol.h"
#import "SCTraceEnabled-Protocol.h"

@class NSMutableDictionary, NSString, SCDataCoordinatorListenerAnnouncer, SCLazy, SCQueuePerformer;

@interface SCFriendsFeedMessagingDataCoordinator : NSObject <SCTraceEnabled, SCDataCoordinating, SCDataCoordinatorListener>
{
    SCDataCoordinatorListenerAnnouncer *_eventAnnouncer;
    SCQueuePerformer *_dataUpdatePerformer;
    SCLazy *_docObjectContext;
    NSString *_currentUsername;
    NSString *_currentUserId;
    NSMutableDictionary *_currentConversationsStateByFeedId;
    NSMutableDictionary *_conversationStateObservationTokens;
}

+ (id)dataCoordinatorIdentifier;
- (void).cxx_destruct;
- (void)_announceIfServerSyncWithDataRequest:(id)arg1;
- (void)_announceWithWithUpdatedConversationsStates:(id)arg1 dataRequest:(id)arg2;
- (void)_clearConversationStateInDocForFeedId:(id)arg1 dataRequest:(id)arg2;
- (id)_fetchAndObserveConversationStatesWithFeedIds:(id)arg1;
- (void)_handleConversationsClearDataRequest:(id)arg1;
- (void)_handleConversationsDataUpdateRequest:(id)arg1;
- (void)_removeCachedConversationStateForFeedId:(id)arg1;
- (void)_updateConversationStateWithFetchedResult:(id)arg1 feedId:(id)arg2;
- (void)_updateConversationsDocObjectWithConversations:(id)arg1 dataRequest:(id)arg2;
- (void)_updateConversationsStateToDBWithUpdatedConversationStates:(id)arg1 conversationsType:(id)arg2 dataRequest:(id)arg3;
- (void)activeConversationStatesForFeedIds:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)addDataUpdateListener:(id)arg1;
- (void)dataCoordinatorDidUpdateWithIdentifier:(id)arg1 dataRequest:(id)arg2;
- (void)handleDataRequest:(id)arg1;
- (id)initWithDocObjectContext:(id)arg1 currentUsername:(id)arg2 currentUserId:(id)arg3;
- (void)removeDataUpdateListener:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

