//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCDataCoordinating-Protocol.h"
#import "SCUpdateAnnouncing-Protocol.h"

@class SCFriendsFeedSyncMetadata;
@protocol SCFriendsFeedPaginationDelegate;

@protocol SCFriendsFeedLoadingStatusManaging <SCUpdateAnnouncing, SCDataCoordinating>
@property(nonatomic) double lastTimeFeedSuccessfullySyncedWithServer;
@property(nonatomic) long long loadingStatus;
@property(nonatomic) __weak id <SCFriendsFeedPaginationDelegate> paginationDelegate;
- (SCFriendsFeedSyncMetadata *)syncMetadata;
@end
