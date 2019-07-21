//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"

@class NSArray, NSNumber, NSString, SOJUChatFeedResponse, SOJUFriendFeedRankingMetadata, SOJUFriendFeedResponseDebugInfo, SOJUFriendFeedUserSignals, SOJUStoriesResponse;

@protocol SOJUFriendFeedResponse <NSObject, NSCoding, NSCopying>
@property(readonly, copy, nonatomic) SOJUChatFeedResponse *chatFeedResponse;
@property(readonly, copy, nonatomic) NSNumber *creationTimestamp;
@property(readonly, copy, nonatomic) SOJUFriendFeedResponseDebugInfo *debugInfo;
@property(readonly, copy, nonatomic) NSArray *feedItems;
@property(readonly, copy, nonatomic) NSNumber *forceFullSyncFeedItems;
@property(readonly, copy, nonatomic) SOJUFriendFeedRankingMetadata *rankingMetadata;
@property(readonly, copy, nonatomic) NSString *requestId;
@property(readonly, copy, nonatomic) NSString *sessionId;
@property(readonly, copy, nonatomic) SOJUStoriesResponse *storyFeedResponse;
@property(readonly, copy, nonatomic) SOJUFriendFeedUserSignals *userSignals;
@end

