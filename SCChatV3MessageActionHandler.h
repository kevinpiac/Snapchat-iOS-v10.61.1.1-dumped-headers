//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCChatMessageActionHandling-Protocol.h"

@class NSString, SCChatConversationBatchFetcher, SCChatConversationManager, SCChatMediaReferenceManager, SCChatMediaRequestManager, SCChatMediaStateManager, SCChatMessageParticipantIdentifier, SCChatSendBlockAssigner, SCChatSnapViewVerifier, SCChatV3ConversationStore, SCChatV3MessageSender, SCChatV3MessageStateHandler, SCChatV3MetadataStore, SCLazy, SCSnapStateMetadataManager;
@protocol SCChatContextPreloader, SCChatConversationAPI, SCChatLogger, SCChatManiphestAdapter, SCChatStoryLoader, SCFideliusUnwrapProtocol, SCGroupManager, SCMediaSendTaskManager, SCSnapLogger, SCUserHelperProtocol;

@interface SCChatV3MessageActionHandler : NSObject <SCChatMessageActionHandling>
{
    NSString *_username;
    SCChatMessageParticipantIdentifier *_userIdentifier;
    SCChatV3ConversationStore *_conversationStore;
    SCChatV3MetadataStore *_metadataStore;
    SCChatV3MessageSender *_sender;
    SCChatMediaRequestManager *_mediaRequestManager;
    SCChatMediaStateManager *_mediaStateManager;
    SCChatV3MessageStateHandler *_messageStateHandler;
    SCChatMediaReferenceManager *_mediaReferenceManager;
    SCChatSnapViewVerifier *_snapViewVerifier;
    SCChatConversationManager *_conversationManager;
    id <SCChatLogger> _logger;
    id <SCUserHelperProtocol> _userHelper;
    id <SCChatStoryLoader> _storyLoader;
    id <SCSnapLogger> _snapLogger;
    id <SCFideliusUnwrapProtocol> _fideliusManager;
    id <SCMediaSendTaskManager> _mediaSendTaskManager;
    id <SCChatManiphestAdapter> _maniphestAdapter;
    id <SCChatConversationAPI> _conversationAPI;
    SCLazy *_lazyCustomStickManager;
    SCChatSendBlockAssigner *_blockAssigner;
    id <SCGroupManager> _groupManager;
    id <SCChatContextPreloader> _contextPreloader;
    SCLazy *_usernameSnapchatterFetcher;
    SCChatConversationBatchFetcher *_conversationBatchFetcher;
    SCSnapStateMetadataManager *_snapStateMetadataManager;
}

- (void).cxx_destruct;
- (id)_addOrUpdateSendToMessage:(id)arg1 fromConversation:(id)arg2;
- (_Bool)_canPreserveOrUnpreserveMessage:(id)arg1 preserved:(_Bool)arg2 username:(id)arg3;
- (id)_chatMetricsEventInfoWithConversation:(id)arg1;
- (void)_conversationId:(id)arg1 message:(id)arg2 dataDidPrepareForMedia:(id)arg3 withMediaProvider:(id)arg4 success:(_Bool)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)_conversationId:(id)arg1 messageId:(id)arg2 didUploadMedia:(id)arg3 success:(_Bool)arg4;
- (void)_conversationId:(id)arg1 messageId:(id)arg2 didUploadMedia:(id)arg3 success:(_Bool)arg4 messageMetadata:(id)arg5;
- (void)_conversationId:(id)arg1 prepareMessageWithMediaProviders:(id)arg2 messageMetadata:(id)arg3 andMutationBlock:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)_conversationId:(id)arg1 sendApiMesage:(id)arg2 type:(id)arg3 additionalText:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_conversationId:(id)arg1 sendMediaMessageWithType:(long long)arg2 withMediaProviders:(id)arg3 withMessageMetadata:(id)arg4 withMetricsEventInfo:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)_conversationId:(id)arg1 uploadMedia:(id)arg2 inMessage:(id)arg3 withProvider:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_deleteFailedMessageBlockFromConversation:(id)arg1 messageIdentifier:(id)arg2 blockInfo:(id)arg3;
- (void)_deleteMediaForMessageId:(id)arg1 conversationId:(id)arg2;
- (id)_deleteMediaInMessage:(id)arg1 messageMetadata:(id)arg2;
- (id)_deleteMessageBlockWithMessage:(id)arg1 blockInfo:(id)arg2 fromConversation:(id)arg3;
- (void)_ensureMediaLoadStateIsLoaded:(id)arg1 messageId:(id)arg2 conversationId:(id)arg3 contentType:(long long)arg4;
- (void)_ensureMediaLoadStateIsLoaded:(id)arg1 messageId:(id)arg2 conversationId:(id)arg3 mediaLoadState:(long long)arg4 contentType:(long long)arg5;
- (long long)_getStoryReplyMediaLoadStateForMedia:(id)arg1 messageId:(id)arg2 conversationId:(id)arg3 messageBodyType:(long long)arg4 mediaLoadState:(long long)arg5;
- (void)_handleRemoteUpdateCognacNotificationStatus:(_Bool)arg1 conversationId:(id)arg2 completion:(CDUnknownBlockType)arg3 completionQueue:(id)arg4;
- (void)_handleReplyMedia:(id)arg1 forMessage:(id)arg2 failedToUploadWithId:(id)arg3 withResponse:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (void)_handleReplyMedia:(id)arg1 forMessage:(id)arg2 uploadedWithId:(id)arg3 withResponse:(id)arg4 sendOnSuccess:(_Bool)arg5 completionBlock:(CDUnknownBlockType)arg6;
- (void)_handleRetryUploadFailureWithMessage:(id)arg1 conversation:(id)arg2 response:(id)arg3 uploadId:(id)arg4;
- (void)_handleRetryUploadReplyMediaSuccessWithMessage:(id)arg1 conversation:(id)arg2 responseDictionary:(id)arg3 uploadId:(id)arg4;
- (void)_handleRetryUploadReplyMediaSuccessWithMessage:(id)arg1 conversation:(id)arg2 responseDictionary:(id)arg3 uploadId:(id)arg4 messageMetadata:(id)arg5;
- (void)_loadGroupStoryReply:(id)arg1 forMessageId:(id)arg2 conversationId:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_loadStoryReply:(id)arg1 forMessageId:(id)arg2 conversationId:(id)arg3 senderUsername:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (id)_logAndSendMessagePreservationMessage:(id)arg1 forConversation:(id)arg2 username:(id)arg3 preserved:(_Bool)arg4;
- (id)_logAndSendSaveStateForDataModel:(id)arg1 conversation:(id)arg2 messageState:(long long)arg3;
- (id)_logAndSendSaveStateForMessage:(id)arg1 conversation:(id)arg2 participant:(id)arg3;
- (void)_logChatMediaSendStartForMessage:(id)arg1 type:(long long)arg2 messageMetadata:(id)arg3 metricsEventInfo:(id)arg4;
- (void)_logSCAChatChatViewForMessages:(id)arg1 withReleaseTimestamp:(id)arg2;
- (void)_logSaveStateForDataModel:(id)arg1 messageState:(long long)arg2;
- (void)_logSaveStateForMessage:(id)arg1 username:(id)arg2;
- (void)_logSendMessageDiscreteStepStart:(long long)arg1 timestamp:(double)arg2 message:(id)arg3 conversation:(id)arg4 mediaType:(long long)arg5;
- (_Bool)_refundCreditIfNecessaryForSnap:(id)arg1;
- (id)_releaseMessagesFromConversation:(id)arg1 upToKnownChatSequenceNumbers:(struct NSDictionary *)arg2;
- (id)_releaseSentMessagesForSender:(id)arg1 forConversation:(id)arg2;
- (id)_resetStatesForConversation:(id)arg1 messageMetadata:(id)arg2;
- (void)_resetStatesForConversationIds:(id)arg1 conversationMetadatas:(id)arg2;
- (void)_retryAllFailedMessagesInConversationId:(id)arg1 messageMetadatas:(id)arg2 isAutoRetry:(_Bool)arg3;
- (id)_retryFailedBlockMessage:(id)arg1 forConversation:(id)arg2 metricsEventInfo:(id)arg3 messageMetadata:(id)arg4 blockInfo:(id)arg5 isAutoRetry:(_Bool)arg6;
- (void)_retryFailedBlockMessageId:(id)arg1 forConversationId:(id)arg2 metricsEventInfo:(id)arg3 messageMetadata:(id)arg4 blockInfo:(id)arg5 isAutoRetry:(_Bool)arg6;
- (void)_retryFailedBlockMessageId:(id)arg1 forConversationId:(id)arg2 metricsEventInfo:(id)arg3 messageMetadata:(id)arg4 isAutoRetry:(_Bool)arg5;
- (id)_retryFailedMessage:(id)arg1 forConversation:(id)arg2 metricsEventInfo:(id)arg3 messageMetadata:(id)arg4 isAutoRetry:(_Bool)arg5;
- (id)_retryFailedMessages:(id)arg1 conversation:(id)arg2 metricsEventInfo:(id)arg3 messageMetadatas:(id)arg4;
- (id)_retryFailedMessagesInConversation:(id)arg1 failedMessages:(id)arg2 messageMetadatas:(id)arg3 isAutoRetry:(_Bool)arg4;
- (void)_retryFailedMultiSnapMessages:(id)arg1 isAutoRetry:(_Bool)arg2;
- (id)_retryUploadMediasForConversation:(id)arg1 message:(id)arg2 messageMetadata:(id)arg3;
- (id)_retryUploadReplyMediasForMessage:(id)arg1 conversation:(id)arg2;
- (void)_sendLegacyPresences:(id)arg1 extendedPresences:(id)arg2 presencesMetadata:(id)arg3 toRecipients:(id)arg4 forConversation:(id)arg5;
- (void)_sendMessageToRecipients:(id)arg1 completionHandler:(CDUnknownBlockType)arg2 sendMessageBlock:(CDUnknownBlockType)arg3;
- (void)_sendVolatileMessage:(id)arg1 forConversation:(id)arg2 toRecipients:(id)arg3;
- (void)_updateConversationForFinishedViewingSnap:(id)arg1 conversationId:(id)arg2 messageMetadata:(id)arg3 enforceMessagesExist:(_Bool)arg4 hasAvailableReplayCredits:(_Bool)arg5;
- (id)_updateConversationForFinishedViewingSnapWithMessage:(id)arg1 messageMetadata:(id)arg2 conversation:(id)arg3;
- (void)_updateMessageState:(long long)arg1 dataModel:(id)arg2;
- (void)_updateMessageState:(long long)arg1 messageId:(id)arg2 conversationId:(id)arg3;
- (void)_updateMessageStateForMessageId:(id)arg1 withConversationId:(id)arg2 displayState:(long long)arg3;
- (id)_updateSnapStateWithReplayAttempt:(id)arg1 byUser:(id)arg2;
- (void)_updateSnapsForRecipientsAsSnapchatters:(id)arg1 clientId:(id)arg2 snapIdsAndTimestamps:(id)arg3;
- (void)_updateStickerUsageForConversationId:(id)arg1 sticker:(id)arg2;
- (void)_uploadMediasForConversation:(id)arg1 message:(id)arg2 messageMetadata:(id)arg3 success:(_Bool)arg4;
- (void)_uploadReplyMediaForMessage:(id)arg1 conversationId:(id)arg2 sendOnSuccess:(_Bool)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)_uploadStory:(id)arg1 conversationId:(id)arg2 sendOnSuccess:(_Bool)arg3 messageCreationBlock:(CDUnknownBlockType)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (void)addListener:(id)arg1;
- (void)applySnapMetadata:(id)arg1 forConversationId:(id)arg2 fromSender:(id)arg3 triggeredBySnapId:(id)arg4;
- (void)attemptReplayOfSnapsInConversation:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)batchToggleSaveInConversation:(id)arg1 messageIds:(id)arg2 toSaved:(_Bool)arg3;
- (void)cleanPendingAuthForConversationId:(id)arg1;
- (id)conversation:(id)arg1 sendMessage:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)conversationId:(id)arg1 addOrUpdateSendToMessageWithMediaProviders:(id)arg2 messageMetadata:(id)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;
- (void)conversationId:(id)arg1 attemptReplayOfSnap:(id)arg2;
- (void)conversationId:(id)arg1 finishViewingSnap:(id)arg2 cellViewPosition:(long long)arg3 hasAvailableCredits:(_Bool)arg4;
- (void)conversationId:(id)arg1 finishViewingSnap:(id)arg2 enforceMessageExists:(_Bool)arg3 cellViewPosition:(long long)arg4 hasAvailableCredits:(_Bool)arg5;
- (void)conversationId:(id)arg1 openSnap:(id)arg2 stackId:(id)arg3 isFirstSnapInStack:(_Bool)arg4 atTime:(id)arg5 registerBlock:(CDUnknownBlockType)arg6;
- (void)conversationId:(id)arg1 screenCaptureWithType:(long long)arg2;
- (void)conversationId:(id)arg1 screenCaptureWithType:(long long)arg2 source:(long long)arg3;
- (void)conversationId:(id)arg1 sendConnectedCallMessage:(_Bool)arg2;
- (void)conversationId:(id)arg1 sendContainer:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)conversationId:(id)arg1 sendCustomStickerWithMessageType:(long long)arg2 mediaProviders:(id)arg3 withMetricsEventInfo:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)conversationId:(id)arg1 sendMediaWithMessageType:(long long)arg2 mediaProviders:(id)arg3 withMetricsEventInfo:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)conversationId:(id)arg1 sendMissedCallMessageWithType:(long long)arg2;
- (void)conversationId:(id)arg1 sendReplyMediaWithMessageType:(long long)arg2 withStory:(id)arg3 mediaProviders:(id)arg4 metricsEventInfo:(id)arg5 completionHandler:(CDUnknownBlockType)arg6 isCustomSticker:(_Bool)arg7;
- (void)conversationId:(id)arg1 sendSnapWithProvider:(id)arg2 withMessageMetadata:(id)arg3 metricsEventInfo:(id)arg4;
- (void)conversationId:(id)arg1 sendSticker:(id)arg2 fromPack:(id)arg3 fromPosition:(unsigned long long)arg4 withMetricsEventInfo:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)conversationId:(id)arg1 sendTextMessage:(id)arg2 customMediaCardAttributes:(id)arg3 withMetricsEventInfo:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)conversationId:(id)arg1 sendUploadedMediaWithMediaProviders:(id)arg2 messageMetadata:(id)arg3 chatText:(id)arg4 withCompletionHandler:(CDUnknownBlockType)arg5;
- (void)conversationId:(id)arg1 sendVolatileMessage:(id)arg2;
- (void)conversationId:(id)arg1 setReplayAnimationState:(long long)arg2 forSnap:(id)arg3;
- (void)conversationId:(id)arg1 updateNotificationStatus:(_Bool)arg2;
- (void)conversationId:(id)arg1 userDidScreenRecordForSnap:(id)arg2;
- (void)conversationId:(id)arg1 userDidTakeScreenshotForSnap:(id)arg2;
- (void)deleteExpiredMessagesFromConversationId:(id)arg1;
- (void)deleteFailedMessageBlockFromConversation:(id)arg1 messageIdentifier:(id)arg2;
- (void)deleteMessageFromConversation:(id)arg1 messageIdentifier:(id)arg2;
- (void)didShowCompleteDisplayForConversationId:(id)arg1 withMessageId:(id)arg2;
- (void)didShowPendingDisplayForConversationId:(id)arg1 withMessageId:(id)arg2;
- (void)eraseMessageInConversationId:(id)arg1 dataModel:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchAllConversationIdsWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchAuthForConversationId:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchCognacNotificationStatusWithConversationId:(id)arg1 completion:(CDUnknownBlockType)arg2 completionQueue:(id)arg3;
- (void)fetchConversation:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchConversationWithMetadata:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchKeyForSnapId:(id)arg1 conversationId:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)fetchMessageAndMetadataForConversationId:(id)arg1 messageId:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchMessageForConversationId:(id)arg1 messageId:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchNotificationStatusForConversation:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchPendingLocallyConsumedReplayCreditsWithCompletion:(CDUnknownBlockType)arg1;
- (void)getLocalConversation:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getMessageLocallyWithMessageId:(id)arg1 conversationId:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithUsername:(id)arg1 conversationStore:(id)arg2 metadataStore:(id)arg3 sender:(id)arg4 conversationAPI:(id)arg5 mediaRequestManager:(id)arg6 mediaStateManager:(id)arg7 mediaReferenceManager:(id)arg8 snapViewVerifier:(id)arg9 messageStateHandler:(id)arg10 logger:(id)arg11 conversationManager:(id)arg12 userHelper:(id)arg13 storyLoader:(id)arg14 snapLogger:(id)arg15 fideliusManager:(id)arg16 lazyCustomStickerManager:(id)arg17 blockAssigner:(id)arg18 groupManager:(id)arg19 maniphestAdapter:(id)arg20 contextPreloader:(id)arg21 mediaSendTaskManager:(id)arg22 usernameSnapchatterFetcher:(id)arg23 batchFetcher:(id)arg24;
- (void)invalidateCandidatePaidToReplaySnapsInConversations:(id)arg1 excludingSnapIds:(id)arg2;
- (void)invalidateMediaById:(id)arg1 forMessageId:(id)arg2 conversationId:(id)arg3;
- (void)loadMapSnapForConversationId:(id)arg1 forMessageId:(id)arg2 poiId:(id)arg3 storySnapId:(id)arg4 requestContext:(long long)arg5;
- (void)loadMediaCardsForConversationId:(id)arg1 messageId:(id)arg2;
- (void)loadMediaCardsForMessage:(id)arg1;
- (void)loadMediaForConversationId:(id)arg1 messageId:(id)arg2 media:(id)arg3 requestContext:(long long)arg4;
- (void)loadMoreMessagesForConversationId:(id)arg1 retryIfFailed:(_Bool)arg2;
- (void)loadSearchStoryForId:(id)arg1 snapId:(id)arg2 forMessageId:(id)arg3 conversationId:(id)arg4 requestContext:(long long)arg5;
- (void)loadSnapchatterForId:(id)arg1 messageId:(id)arg2 conversationId:(id)arg3;
- (void)loadStoryReply:(id)arg1 replyMediaMetadata:(id)arg2 messageId:(id)arg3 conversationId:(id)arg4 isGroupConversation:(_Bool)arg5 requestContext:(long long)arg6;
- (void)loadStorySnapForConversationId:(id)arg1 storySnapId:(id)arg2 messageId:(id)arg3 requestContext:(long long)arg4;
- (void)makeChatMedias:(id)arg1 recipients:(id)arg2 groups:(id)arg3 successBlock:(CDUnknownBlockType)arg4 failureBlock:(CDUnknownBlockType)arg5;
- (void)makeLocalConversationShowOnFeedIfNecessary:(id)arg1;
- (void)markMessagesAsDisplayedForConversationId:(id)arg1 upToKnownChatSequenceNumbers:(struct NSDictionary *)arg2;
- (void)markMessagesAsReadForConversationId:(id)arg1 toMessageId:(id)arg2;
- (void)markMessagesAsReleasedForConversationId:(id)arg1 toMessageId:(id)arg2;
- (void)markSnapchatterIdAsTapped:(id)arg1 forConversationId:(id)arg2;
- (void)mediaMetadataForMediaId:(id)arg1 messageId:(id)arg2 conversationId:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)messageMetadataForMessageId:(id)arg1 conversationId:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)messageMetadataForMessageIds:(id)arg1 conversationId:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)modifyMessageRetentionPolicyForConversationId:(id)arg1 retentionInMinutes:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)prepareMediaMessageForConversationId:(id)arg1 clientResolutionId:(id)arg2 messageContentContainer:(id)arg3 successCompletion:(CDUnknownBlockType)arg4 failureCompletion:(CDUnknownBlockType)arg5;
- (void)refreshAllMessagesForConversationId:(id)arg1;
- (void)releaseMessagesFromConversationId:(id)arg1 upToKnownChatSequenceNumbers:(struct NSDictionary *)arg2;
- (void)releaseSentMessagesForSender:(id)arg1 forConversationId:(id)arg2;
- (void)removeAllTasksWithFeedId:(id)arg1;
- (void)removeListener:(id)arg1;
- (void)removeUsername:(id)arg1 fromConversationId:(id)arg2;
- (void)resetStatesInConversation:(id)arg1 isFromBackground:(_Bool)arg2;
- (void)resetStatesInConversations:(id)arg1 isFromBackground:(_Bool)arg2;
- (void)retryAllFailedMessagesInConversationId:(id)arg1 isAutoRetry:(_Bool)arg2;
- (void)retryFailedBlockMessageId:(id)arg1 forConversationId:(id)arg2 metricsEventInfo:(id)arg3;
- (void)retryFailedBlockMessageId:(id)arg1 forConversationId:(id)arg2 metricsEventInfo:(id)arg3 isAutoRetry:(_Bool)arg4;
- (void)saveMessageInConversationId:(id)arg1 dataModel:(id)arg2;
- (void)saveMessagesInConversationId:(id)arg1 messageIds:(id)arg2;
- (void)savedToMemoriesForMessageId:(id)arg1 conversationId:(id)arg2;
- (void)sendDeleteMessagesForConversationId:(id)arg1 upToKnownChatSequenceNumbers:(struct NSDictionary *)arg2;
- (void)sendDeleteSnapsForConversationId:(id)arg1;
- (void)sendJoinedCallMessageForConversationId:(id)arg1;
- (void)sendLeftCallMessageForConversationId:(id)arg1;
- (void)sendLegacyPresencesForConversationId:(id)arg1 legacyPresences:(id)arg2 extendedPresences:(id)arg3 presencesMetadata:(id)arg4 toRecipients:(id)arg5;
- (void)sendMediaMessageForConversationId:(id)arg1 clientResolutionId:(id)arg2 mediaContentObjects:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)sendMessageToRecipients:(id)arg1 type:(id)arg2 content:(id)arg3 additionalText:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)sendSaveToCameraRollForMessageWithMessageId:(id)arg1 conversationId:(id)arg2 messageSender:(id)arg3 messageBodyType:(long long)arg4 mediaList:(id)arg5;
- (void)sendStickerStoryReply:(id)arg1 conversationId:(id)arg2 fromPack:(id)arg3 fromPosition:(unsigned long long)arg4 drawerMode:(long long)arg5 completionHandler:(CDUnknownBlockType)arg6 story:(id)arg7 metricsEventInfo:(id)arg8;
- (void)sendTextMessage:(id)arg1 toRecipients:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)sendTextStoryReply:(id)arg1 conversationId:(id)arg2 completionHandler:(CDUnknownBlockType)arg3 story:(id)arg4 typeVersion:(long long)arg5 metricsEventInfo:(id)arg6;
- (void)setActiveConversationById:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setAuthMac:(id)arg1 authPayload:(id)arg2 forConversationId:(id)arg3;
- (void)snapWasViewedWithID:(id)arg1;
- (void)unpreserveLoadedMessageIds:(id)arg1 forConversationId:(id)arg2;
- (void)unsaveMessageInConversationId:(id)arg1 dataModel:(id)arg2;
- (void)unsaveMessagesInConversationId:(id)arg1 messageIds:(id)arg2;
- (void)updateChatDraft:(id)arg1 forConversationId:(id)arg2;
- (void)updateCognacNotificationStatus:(_Bool)arg1 conversationId:(id)arg2 completion:(CDUnknownBlockType)arg3 completionQueue:(id)arg4;
- (void)updateSerializedParcelPayloadForMessage:(id)arg1 newPayload:(id)arg2 conversation:(id)arg3;
- (void)updateSnapsForRecipients:(id)arg1 clientId:(id)arg2 snapIdsAndTimestamps:(id)arg3;

@end

