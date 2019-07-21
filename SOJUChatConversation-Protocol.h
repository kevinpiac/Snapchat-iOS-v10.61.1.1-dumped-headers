//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"

@class NSArray, NSDictionary, NSNumber, NSString, SOJUCashTransaction, SOJUChatConversationMessageUpdates, SOJUChatConversationMessages, SOJUChatConversationSnapUpdates, SOJUConversationInteractionEvent, SOJUConversationState, SOJUGenericSnap, SOJULastChatActions;

@protocol SOJUChatConversation <NSObject, NSCoding, NSCopying>
@property(readonly, copy, nonatomic) NSDictionary *chatReleaseDataMap;
@property(readonly, copy, nonatomic) SOJUConversationInteractionEvent *conversationInteractionEvent;
@property(readonly, copy, nonatomic) SOJUChatConversationMessageUpdates *conversationMessageUpdates;
@property(readonly, copy, nonatomic) SOJUChatConversationMessages *conversationMessages;
@property(readonly, copy, nonatomic) SOJUChatConversationSnapUpdates *conversationSnapUpdates;
@property(readonly, copy, nonatomic) SOJUConversationState *conversationState;
@property(readonly, copy, nonatomic) NSArray *favoriteStickers;
@property(readonly, copy, nonatomic) NSString *idValue;
@property(readonly, copy, nonatomic) NSNumber *isCognacNotificationMuted;
@property(readonly, copy, nonatomic) NSNumber *isDeltaFetch;
@property(readonly, copy, nonatomic) NSNumber *isSnapDeltaFetch;
@property(readonly, copy, nonatomic) NSString *iterToken;
@property(readonly, copy, nonatomic) SOJUCashTransaction *lastCashTransaction;
@property(readonly, copy, nonatomic) SOJULastChatActions *lastChatActions;
@property(readonly, copy, nonatomic) NSNumber *lastClearTimestamp;
@property(readonly, copy, nonatomic) NSNumber *lastInteractionTs;
@property(readonly, copy, nonatomic) SOJUGenericSnap *lastSnap;
@property(readonly, copy, nonatomic) NSNumber *messageRetentionInMinutes;
@property(readonly, copy, nonatomic) NSNumber *notificationStatus;
@property(readonly, copy, nonatomic) NSArray *participants;
@property(readonly, copy, nonatomic) NSArray *pendingChatsFor;
@property(readonly, copy, nonatomic) NSArray *pendingReceivedSnaps;
@property(readonly, copy, nonatomic) NSDictionary *usernameToUserId;
@end

