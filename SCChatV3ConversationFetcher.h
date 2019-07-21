//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCChatConversationFetcher-Protocol.h"

@class NSMutableDictionary, NSString, SCLazy, SCUserSession;

@interface SCChatV3ConversationFetcher : NSObject <SCChatConversationFetcher>
{
    NSMutableDictionary *_fetchQueues;
    SCUserSession *_userSession;
    SCLazy *_friendsFeedUFSDataCoordinator;
    SCLazy *_docObjectContext;
}

- (void).cxx_destruct;
- (void)_createFriendFeedRequestWithConversationIds:(id)arg1 requestId:(id)arg2 sessionId:(id)arg3 groupDeltaRequests:(id)arg4 groupPaginationType:(long long)arg5 chatDeltaRequests:(id)arg6 oneOnOneSnapsSyncToken:(id)arg7 messsageIterToken:(id)arg8 includeStoriesRequest:(_Bool)arg9 fetchReason:(long long)arg10 completion:(CDUnknownBlockType)arg11;
- (void)_executeFriendFeedRequest:(id)arg1 requestMetadata:(id)arg2 fetchType:(long long)arg3 storiesFetchContext:(id)arg4 requestId:(id)arg5 handleEmptyOneOnOne:(_Bool)arg6 successHandlerBlock:(CDUnknownBlockType)arg7 failureHandlerBlock:(CDUnknownBlockType)arg8 callbackQueue:(id)arg9;
- (void)_fetch1On1ConversationFromUFSWithConversationId:(id)arg1 chatDeltaRequest:(id)arg2 messsageIterToken:(id)arg3 fetchReason:(long long)arg4 successHandler:(CDUnknownBlockType)arg5 failureHandler:(CDUnknownBlockType)arg6 callbackQueue:(id)arg7;
- (void)_fetchChatWithChatId:(id)arg1 iterToken:(id)arg2 chatDeltaRequest:(id)arg3 fetchReason:(long long)arg4 successHandler:(CDUnknownBlockType)arg5 failureHandler:(CDUnknownBlockType)arg6 callBackQueue:(id)arg7;
- (void)_fetchChatWithChatId:(id)arg1 parameters:(id)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4 callbackQueue:(id)arg5;
- (void)_fetchGroupConversationFromUFSWithConversationId:(id)arg1 groupDeltaRequest:(id)arg2 groupPaginationType:(long long)arg3 successHandler:(CDUnknownBlockType)arg4 failureHandler:(CDUnknownBlockType)arg5 callbackQueue:(id)arg6;
- (void)_fetchGroupConversationWithId:(id)arg1 earliestSequenceNumbers:(id)arg2 latestSequenceNumbers:(id)arg3 mischiefPaginationType:(long long)arg4 completion:(CDUnknownBlockType)arg5 onQueue:(id)arg6;
- (void)_handleFailureWithHandler:(CDUnknownBlockType)arg1 forConversationId:(id)arg2;
- (void)_handleSuccessResponseDictionary:(id)arg1 forConversationId:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (_Bool)_isErrorResponse:(id)arg1;
- (void)_parseDOCFromFriendsFeedResponseIfNecessary:(id)arg1 fetchType:(long long)arg2 storiesFetchContext:(id)arg3 requestMetadata:(id)arg4;
- (void)fetchAuthWithChatId:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchChatSkippingQueueWithChatId:(id)arg1 iterToken:(id)arg2 chatSequenceNumbers:(struct NSDictionary *)arg3 stateUpdateSequenceNumbers:(struct NSDictionary *)arg4 fetchReason:(long long)arg5 completionHandler:(CDUnknownBlockType)arg6 callbackQueue:(id)arg7;
- (void)fetchConversationWithId:(id)arg1 earliestSequenceNumbers:(id)arg2 latestSequenceNumbers:(id)arg3 completion:(CDUnknownBlockType)arg4 onQueue:(id)arg5;
- (void)fetchConversationsWithIds:(id)arg1 conversationsVersion:(id)arg2 successHandler:(CDUnknownBlockType)arg3 failureHandler:(CDUnknownBlockType)arg4 callbackQueue:(id)arg5;
- (id)initWithUserSession:(id)arg1 friendsFeedUFSDataCoordinator:(id)arg2 docObjectContext:(id)arg3;
- (void)loadHistoryForConversationId:(id)arg1 earliestSequenceNumbers:(id)arg2 latestSequenceNumbers:(id)arg3 handler:(CDUnknownBlockType)arg4 onQueue:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
