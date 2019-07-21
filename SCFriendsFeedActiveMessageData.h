//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSDate, NSString, SCFriendsFeedMessageContent;

@interface SCFriendsFeedActiveMessageData : NSObject <NSCopying>
{
    _Bool _isVisibleInFeed;
    _Bool _isConversationPending;
    _Bool _isConversationDoNotDisturbEnabled;
    _Bool _isSentByUser;
    _Bool _isArroyoData;
    NSString *_conversationId;
    NSString *_messageState;
    NSDate *_lastInteractionTimestamp;
    NSDate *_displayTimestamp;
    NSString *_replayableSnapMessageId;
    SCFriendsFeedMessageContent *_messageContent;
    NSDate *_pinnedTimestamp;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *conversationId; // @synthesize conversationId=_conversationId;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) NSDate *displayTimestamp; // @synthesize displayTimestamp=_displayTimestamp;
- (unsigned long long)hash;
- (id)initWithConversationId:(id)arg1 isVisibleInFeed:(_Bool)arg2 messageState:(id)arg3 isConversationPending:(_Bool)arg4 isConversationDoNotDisturbEnabled:(_Bool)arg5 isSentByUser:(_Bool)arg6 lastInteractionTimestamp:(id)arg7 displayTimestamp:(id)arg8 replayableSnapMessageId:(id)arg9 messageContent:(id)arg10 isArroyoData:(_Bool)arg11 pinnedTimestamp:(id)arg12;
@property(readonly, nonatomic) _Bool isArroyoData; // @synthesize isArroyoData=_isArroyoData;
@property(readonly, nonatomic) _Bool isConversationDoNotDisturbEnabled; // @synthesize isConversationDoNotDisturbEnabled=_isConversationDoNotDisturbEnabled;
@property(readonly, nonatomic) _Bool isConversationPending; // @synthesize isConversationPending=_isConversationPending;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) _Bool isSentByUser; // @synthesize isSentByUser=_isSentByUser;
@property(readonly, nonatomic) _Bool isVisibleInFeed; // @synthesize isVisibleInFeed=_isVisibleInFeed;
@property(readonly, copy, nonatomic) NSDate *lastInteractionTimestamp; // @synthesize lastInteractionTimestamp=_lastInteractionTimestamp;
@property(readonly, copy, nonatomic) SCFriendsFeedMessageContent *messageContent; // @synthesize messageContent=_messageContent;
@property(readonly, copy, nonatomic) NSString *messageState; // @synthesize messageState=_messageState;
@property(readonly, copy, nonatomic) NSDate *pinnedTimestamp; // @synthesize pinnedTimestamp=_pinnedTimestamp;
@property(readonly, copy, nonatomic) NSString *replayableSnapMessageId; // @synthesize replayableSnapMessageId=_replayableSnapMessageId;

@end

