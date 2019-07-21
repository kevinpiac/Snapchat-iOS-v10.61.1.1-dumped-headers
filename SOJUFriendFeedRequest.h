//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SOJUFriendFeedRequest-Protocol.h"

@class NSArray, NSNumber, NSString, SOJUBroadcastStoryFriendFeedRequest, SOJUChatFeedRequest, SOJUFriendFeedRequestDebugParam;

@interface SOJUFriendFeedRequest : NSObject <SOJUFriendFeedRequest>
{
    NSString *_timestamp;
    NSString *_reqToken;
    NSString *_username;
    SOJUChatFeedRequest *_chatFeedRequest;
    SOJUBroadcastStoryFriendFeedRequest *_storyFriendFeedRequest;
    NSString *_sessionId;
    NSString *_requestId;
    NSString *_callOriginationType;
    NSNumber *_creationTimestamp;
    NSString *_layoutType;
    NSArray *_conversationIdsToFetch;
    NSArray *_previousPagesItemIds;
    SOJUFriendFeedRequestDebugParam *_debugParam;
    NSNumber *_lastFullSyncTimestamp;
    NSNumber *_returnRankedStoriesOnly;
    NSString *_notificationId;
    NSNumber *_sinceTimestamp;
    NSNumber *_limit;
    NSNumber *_returnFriendStoriesOnly;
    NSNumber *_returnFeedItemWithSignals;
    NSArray *_userStoryInteractionHistory;
    NSArray *_friendRankingSignals;
}

+ (_Bool)canInitFromProto;
+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *callOriginationType; // @synthesize callOriginationType=_callOriginationType;
- (long long)callOriginationTypeEnum;
@property(readonly, copy, nonatomic) SOJUChatFeedRequest *chatFeedRequest; // @synthesize chatFeedRequest=_chatFeedRequest;
@property(readonly, copy, nonatomic) NSArray *conversationIdsToFetch; // @synthesize conversationIdsToFetch=_conversationIdsToFetch;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) NSNumber *creationTimestamp; // @synthesize creationTimestamp=_creationTimestamp;
- (long long)creationTimestampValue;
@property(readonly, copy, nonatomic) SOJUFriendFeedRequestDebugParam *debugParam; // @synthesize debugParam=_debugParam;
- (void)decodeWithFasterDecoder:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *friendRankingSignals; // @synthesize friendRankingSignals=_friendRankingSignals;
@property(readonly) unsigned long long hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1;
- (id)initWithTimestamp:(id)arg1 reqToken:(id)arg2 username:(id)arg3 chatFeedRequest:(id)arg4 storyFriendFeedRequest:(id)arg5 sessionId:(id)arg6 requestId:(id)arg7 callOriginationType:(id)arg8 creationTimestamp:(id)arg9 layoutType:(id)arg10 conversationIdsToFetch:(id)arg11 previousPagesItemIds:(id)arg12 debugParam:(id)arg13 lastFullSyncTimestamp:(id)arg14 returnRankedStoriesOnly:(id)arg15 notificationId:(id)arg16 sinceTimestamp:(id)arg17 limit:(id)arg18 returnFriendStoriesOnly:(id)arg19 returnFeedItemWithSignals:(id)arg20 userStoryInteractionHistory:(id)arg21 friendRankingSignals:(id)arg22;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSNumber *lastFullSyncTimestamp; // @synthesize lastFullSyncTimestamp=_lastFullSyncTimestamp;
- (long long)lastFullSyncTimestampValue;
@property(readonly, copy, nonatomic) NSString *layoutType; // @synthesize layoutType=_layoutType;
- (long long)layoutTypeEnum;
@property(readonly, copy, nonatomic) NSNumber *limit; // @synthesize limit=_limit;
- (int)limitValue;
@property(readonly, copy, nonatomic) NSString *notificationId; // @synthesize notificationId=_notificationId;
- (_Bool)preferFasterCoding;
@property(readonly, copy, nonatomic) NSArray *previousPagesItemIds; // @synthesize previousPagesItemIds=_previousPagesItemIds;
@property(readonly, copy, nonatomic) NSString *reqToken; // @synthesize reqToken=_reqToken;
@property(readonly, copy, nonatomic) NSString *requestId; // @synthesize requestId=_requestId;
@property(readonly, copy, nonatomic) NSNumber *returnFeedItemWithSignals; // @synthesize returnFeedItemWithSignals=_returnFeedItemWithSignals;
- (_Bool)returnFeedItemWithSignalsValue;
@property(readonly, copy, nonatomic) NSNumber *returnFriendStoriesOnly; // @synthesize returnFriendStoriesOnly=_returnFriendStoriesOnly;
- (_Bool)returnFriendStoriesOnlyValue;
@property(readonly, copy, nonatomic) NSNumber *returnRankedStoriesOnly; // @synthesize returnRankedStoriesOnly=_returnRankedStoriesOnly;
- (_Bool)returnRankedStoriesOnlyValue;
@property(readonly, copy, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
@property(readonly, copy, nonatomic) NSNumber *sinceTimestamp; // @synthesize sinceTimestamp=_sinceTimestamp;
- (long long)sinceTimestampValue;
@property(readonly, copy, nonatomic) SOJUBroadcastStoryFriendFeedRequest *storyFriendFeedRequest; // @synthesize storyFriendFeedRequest=_storyFriendFeedRequest;
@property(readonly, copy, nonatomic) NSString *timestamp; // @synthesize timestamp=_timestamp;
- (id)toDictionary;
- (id)toJson;
@property(readonly, copy, nonatomic) NSArray *userStoryInteractionHistory; // @synthesize userStoryInteractionHistory=_userStoryInteractionHistory;
@property(readonly, copy, nonatomic) NSString *username; // @synthesize username=_username;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

