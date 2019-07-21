//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"

@class NSArray, NSNumber, NSString, SOJUAdsStoryAdMetadata, SOJUBroadcastOfficialStoriesMetadata, SOJUBroadcastTileMetadata, SOJUStoryThumbnails;

@protocol SOJUFriendStories <NSObject, NSCoding, NSCopying>
@property(readonly, copy, nonatomic) SOJUAdsStoryAdMetadata *adPlacementMetadata;
@property(readonly, copy, nonatomic) NSNumber *allowStoryExplorer;
@property(readonly, copy, nonatomic) NSString *deepLinkUrl;
@property(readonly, copy, nonatomic) NSString *displayName;
@property(readonly, copy, nonatomic) SOJUBroadcastTileMetadata *featuredStory;
@property(readonly, copy, nonatomic) NSNumber *hasCustomDescription;
@property(readonly, copy, nonatomic) NSNumber *isLocal;
@property(readonly, copy, nonatomic) NSNumber *isManifestStory;
@property(readonly, copy, nonatomic) NSNumber *matureContent;
@property(readonly, copy, nonatomic) SOJUBroadcastOfficialStoriesMetadata *officialStoriesMetadata;
@property(readonly, copy, nonatomic) NSString *profileDescription;
@property(readonly, copy, nonatomic) NSString *publisherId;
@property(readonly, copy, nonatomic) NSString *sharedId;
@property(readonly, copy, nonatomic) NSNumber *showViewingJit;
@property(readonly, copy, nonatomic) NSNumber *sojuNewStoryCount;
@property(readonly, copy, nonatomic) NSArray *stories;
@property(readonly, copy, nonatomic) SOJUStoryThumbnails *thumbnails;
@property(readonly, copy, nonatomic) NSString *type;
@property(readonly, copy, nonatomic) NSString *userId;
@property(readonly, copy, nonatomic) NSString *username;
@end
