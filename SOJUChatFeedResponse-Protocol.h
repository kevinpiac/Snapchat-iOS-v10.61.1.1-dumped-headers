//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"

@class NSArray, SOJUConversationsResponseInfo, SOJUFeedDeltaSyncToken, SOJUFeedResponseInfo, SOJUFriendsResponse, SOJUMessagingGatewayInfo, SOJUServerInfoResponse, SOJUUpdatesResponse;

@protocol SOJUChatFeedResponse <NSObject, NSCoding, NSCopying>
@property(readonly, copy, nonatomic) NSArray *conversationsResponse;
@property(readonly, copy, nonatomic) SOJUConversationsResponseInfo *conversationsResponseInfo;
@property(readonly, copy, nonatomic) SOJUFeedDeltaSyncToken *feedDeltaSyncToken;
@property(readonly, copy, nonatomic) SOJUFeedResponseInfo *feedResponseInfo;
@property(readonly, copy, nonatomic) SOJUFriendsResponse *friendsResponse;
@property(readonly, copy, nonatomic) SOJUMessagingGatewayInfo *messagingGatewayInfo;
@property(readonly, copy, nonatomic) NSArray *mischiefResponse;
@property(readonly, copy, nonatomic) SOJUServerInfoResponse *serverInfo;
@property(readonly, copy, nonatomic) SOJUUpdatesResponse *updatesResponse;
@end

