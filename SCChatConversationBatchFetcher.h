//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCChatConversationBatchFetching-Protocol.h"

@class NSString, SCChatSyncLatencyLogger, SCChatV3ConversationStore, SCChatV3MessageReceiver, SCGhostToFeedLogger, SCPreferences;
@protocol SCChatConversationFetcher;

@interface SCChatConversationBatchFetcher : NSObject <SCChatConversationBatchFetching>
{
    SCChatV3ConversationStore *_conversationStore;
    id <SCChatConversationFetcher> _fetcher;
    SCChatV3MessageReceiver *_messageReceiver;
    SCGhostToFeedLogger *_g2fLogger;
    SCChatSyncLatencyLogger *_syncLatencyLogger;
    NSString *_username;
    SCPreferences *_userPreferences;
}

- (void).cxx_destruct;
- (void)_batchFetchConversationsFromServerByIds:(id)arg1 withConversationsVersion:(id)arg2 fetchContext:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_batchFetchConversationsFromServerByIds:(id)arg1 withConversationsVersion:(id)arg2 verificationData:(id)arg3 fetchContext:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)_handleConversationsFromServerByIds:(id)arg1 mischiefs:(id)arg2 conversations:(id)arg3 feedDeltaSyncToken:(id)arg4 fetchContext:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)_verifyRequestConversationsVersion:(id)arg1 conversationIds:(id)arg2 mischiefs:(id)arg3 conversations:(id)arg4 feedDeltaSyncToken:(id)arg5 fetchContext:(id)arg6 completionHandler:(CDUnknownBlockType)arg7;
- (void)batchFetchConversationsFromServerByIds:(id)arg1;
- (void)batchFetchConversationsWithV3ActiveMessageData:(id)arg1 arroyoActiveMessageData:(id)arg2 forDataRequest:(id)arg3;
- (void)configureWithMessageReceiver:(id)arg1;
- (id)initWithConversationFetcher:(id)arg1 conversationStore:(id)arg2 ghostToFeedLogger:(id)arg3 syncLatencyLogger:(id)arg4 username:(id)arg5 userPreferences:(id)arg6;

@end

