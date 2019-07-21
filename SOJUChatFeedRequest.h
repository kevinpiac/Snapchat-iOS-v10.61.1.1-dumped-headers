//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SOJUChatFeedRequest-Protocol.h"

@class NSArray, NSDictionary, NSNumber, NSString, SOJUFeedDeltaSyncToken, SOJUFriendsRequest;

@interface SOJUChatFeedRequest : NSObject <SOJUChatFeedRequest>
{
    NSString *_checksumsDict;
    NSString *_featuresMap;
    NSNumber *_pullToRefresh;
    SOJUFriendsRequest *_friendsRequest;
    NSArray *_groupDeltaRequests;
    NSNumber *_excludeFriends;
    NSString *_messagesTier;
    NSDictionary *_conversationDeltaQueryMap;
    NSDictionary *_conversationSnapDeltaQueryMap;
    NSString *_feedIterToken;
    NSString *_messageIterToken;
    NSString *_groupPaginationType;
    NSString *_fetchReason;
    SOJUFeedDeltaSyncToken *_feedDeltaSyncToken;
}

+ (_Bool)canInitFromProto;
+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *checksumsDict; // @synthesize checksumsDict=_checksumsDict;
@property(readonly, copy, nonatomic) NSDictionary *conversationDeltaQueryMap; // @synthesize conversationDeltaQueryMap=_conversationDeltaQueryMap;
@property(readonly, copy, nonatomic) NSDictionary *conversationSnapDeltaQueryMap; // @synthesize conversationSnapDeltaQueryMap=_conversationSnapDeltaQueryMap;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)decodeWithFasterDecoder:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
@property(readonly, copy, nonatomic) NSNumber *excludeFriends; // @synthesize excludeFriends=_excludeFriends;
- (_Bool)excludeFriendsValue;
@property(readonly, copy, nonatomic) NSString *featuresMap; // @synthesize featuresMap=_featuresMap;
@property(readonly, copy, nonatomic) SOJUFeedDeltaSyncToken *feedDeltaSyncToken; // @synthesize feedDeltaSyncToken=_feedDeltaSyncToken;
@property(readonly, copy, nonatomic) NSString *feedIterToken; // @synthesize feedIterToken=_feedIterToken;
@property(readonly, copy, nonatomic) NSString *fetchReason; // @synthesize fetchReason=_fetchReason;
- (long long)fetchReasonEnum;
@property(readonly, copy, nonatomic) SOJUFriendsRequest *friendsRequest; // @synthesize friendsRequest=_friendsRequest;
@property(readonly, copy, nonatomic) NSArray *groupDeltaRequests; // @synthesize groupDeltaRequests=_groupDeltaRequests;
@property(readonly, copy, nonatomic) NSString *groupPaginationType; // @synthesize groupPaginationType=_groupPaginationType;
- (long long)groupPaginationTypeEnum;
@property(readonly) unsigned long long hash;
- (id)initWithChecksumsDict:(id)arg1 featuresMap:(id)arg2 pullToRefresh:(id)arg3 friendsRequest:(id)arg4 groupDeltaRequests:(id)arg5 excludeFriends:(id)arg6 messagesTier:(id)arg7 conversationDeltaQueryMap:(id)arg8 conversationSnapDeltaQueryMap:(id)arg9 feedIterToken:(id)arg10 messageIterToken:(id)arg11 groupPaginationType:(id)arg12 fetchReason:(id)arg13 feedDeltaSyncToken:(id)arg14;
- (id)initWithCoder:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSString *messageIterToken; // @synthesize messageIterToken=_messageIterToken;
@property(readonly, copy, nonatomic) NSString *messagesTier; // @synthesize messagesTier=_messagesTier;
- (long long)messagesTierEnum;
- (_Bool)preferFasterCoding;
@property(readonly, copy, nonatomic) NSNumber *pullToRefresh; // @synthesize pullToRefresh=_pullToRefresh;
- (_Bool)pullToRefreshValue;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
- (id)toDictionary;
- (id)toJson;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

