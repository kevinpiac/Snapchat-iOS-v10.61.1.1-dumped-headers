//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSArray, SCNMessagingConversation, SCNMessagingSendMessageResult, SCNMessagingUUID;

@protocol SCNMessagingConversationManagerDelegate
- (void)onConversationCreated:(SCNMessagingConversation *)arg1;
- (void)onConversationRemoved:(SCNMessagingUUID *)arg1;
- (void)onConversationUpdated:(SCNMessagingUUID *)arg1 conversation:(SCNMessagingConversation *)arg2 updatedMessages:(NSArray *)arg3 removedMessages:(NSArray *)arg4;
- (void)onSendComplete:(SCNMessagingSendMessageResult *)arg1;
@end

