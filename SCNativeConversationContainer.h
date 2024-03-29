//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "SCChatRenderingConversation-Protocol.h"

@class NSArray, NSString, SCNMessagingConversation;

@interface SCNativeConversationContainer : NSObject <SCChatRenderingConversation, NSCopying>
{
    SCNMessagingConversation *_conversation;
    NSArray *_messages;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) SCNMessagingConversation *conversation; // @synthesize conversation=_conversation;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)doNotDisturb;
- (_Bool)doNotDisturbMentions;
- (_Bool)earlierContentExists;
- (_Bool)hadAnyMessages;
- (_Bool)hasUnreadMessagesForUser:(id)arg1;
@property(readonly) unsigned long long hash;
- (long long)historyLoadingStatus;
- (id)id;
- (id)initWithConversation:(id)arg1 messages:(id)arg2;
- (_Bool)isArroyoConversation;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isGroupConversation;
- (_Bool)isPending;
- (struct NSDictionary *)knownChatSequenceNumsForViewing;
- (id)lastCommitedMessageId;
- (id)lastInteractionTimestamp;
- (id)lastSeenMessageIdForUserId:(id)arg1;
- (id)lastSeenMessageTimestamp;
- (unsigned long long)messageRetentionInMinutes;
@property(readonly, copy, nonatomic) NSArray *messages; // @synthesize messages=_messages;
- (id)messagesDictionary;
- (id)messagesForRendering;
- (id)recipientUsernameForOneOnOneWithCurrentUser:(id)arg1;
- (id)seenChatSequenceNums;
- (struct NSDictionary *)stickerUsageHistory;
- (id)title;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

