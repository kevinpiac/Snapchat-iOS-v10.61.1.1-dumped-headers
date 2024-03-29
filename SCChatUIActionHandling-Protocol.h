//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSSet, NSString, SCChatMessageOperationDataModel, SCChatMetricsEventInfo;

@protocol SCChatUIActionHandling
- (void)deleteFailedMessageBlockFromConversation:(NSString *)arg1 messageIdentifier:(NSString *)arg2;
- (void)eraseMessageInConversationId:(NSString *)arg1 dataModel:(SCChatMessageOperationDataModel *)arg2 completion:(void (^)(long long))arg3;
- (void)loadMediaCardsForConversationId:(NSString *)arg1 messageId:(NSString *)arg2;
- (void)loadStorySnapForConversationId:(NSString *)arg1 storySnapId:(NSString *)arg2 messageId:(NSString *)arg3 requestContext:(long long)arg4;
- (void)retryFailedBlockMessageId:(NSString *)arg1 forConversationId:(NSString *)arg2 metricsEventInfo:(SCChatMetricsEventInfo *)arg3;
- (void)saveMessageInConversationId:(NSString *)arg1 dataModel:(SCChatMessageOperationDataModel *)arg2;
- (void)saveMessagesInConversationId:(NSString *)arg1 messageIds:(NSSet *)arg2;
- (void)unsaveMessageInConversationId:(NSString *)arg1 dataModel:(SCChatMessageOperationDataModel *)arg2;
- (void)unsaveMessagesInConversationId:(NSString *)arg1 messageIds:(NSSet *)arg2;
@end

