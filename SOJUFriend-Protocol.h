//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"

@class NSArray, NSDictionary, NSNumber, NSString, SOJUSecurityFideliusFriendInfo;

@protocol SOJUFriend <NSObject, NSCoding, NSCopying>
@property(readonly, copy, nonatomic) NSString *addSource;
@property(readonly, copy, nonatomic) NSString *addSourceType;
@property(readonly, copy, nonatomic) NSNumber *autoAddedDeprecated;
@property(readonly, copy, nonatomic) NSString *birthday;
@property(readonly, copy, nonatomic) NSString *bitmojiAvatarId;
@property(readonly, copy, nonatomic) NSString *bitmojiSelfieId;
@property(readonly, copy, nonatomic) NSString *bitmojiSnapcodeSelfieId;
@property(readonly, copy, nonatomic) NSNumber *canBeSharedByFriendsDeprecated;
@property(readonly, copy, nonatomic) NSNumber *canSeeCustomStories;
@property(readonly, copy, nonatomic) NSString *direction;
@property(readonly, copy, nonatomic) NSString *display;
@property(readonly, copy, nonatomic) NSString *displayUsername;
@property(readonly, copy, nonatomic) NSNumber *dontDecayThumbnailDeprecated;
@property(readonly, copy, nonatomic) NSNumber *expirationDeprecated;
@property(readonly, copy, nonatomic) SOJUSecurityFideliusFriendInfo *fideliusInfo;
@property(readonly, copy, nonatomic) NSString *friendmojiString;
@property(readonly, copy, nonatomic) NSArray *friendmojiSymbols;
@property(readonly, copy, nonatomic) NSArray *friendmojis;
@property(readonly, copy, nonatomic) NSNumber *hasCustomDescriptionDeprecated;
@property(readonly, copy, nonatomic) NSNumber *hiddenLink;
@property(readonly, copy, nonatomic) NSNumber *ignoredLink;
@property(readonly, copy, nonatomic) NSNumber *isCognacNotificationMuted;
@property(readonly, copy, nonatomic) NSNumber *isIncomingFriendRequestViewed;
@property(readonly, copy, nonatomic) NSNumber *isPopular;
@property(readonly, copy, nonatomic) NSNumber *isSharedStoryDeprecated;
@property(readonly, copy, nonatomic) NSNumber *isStoryMuted;
@property(readonly, copy, nonatomic) NSNumber *localStoryDeprecated;
@property(readonly, copy, nonatomic) NSString *name;
@property(readonly, copy, nonatomic) NSNumber *needsLoveDeprecated;
@property(readonly, copy, nonatomic) NSNumber *pendingChatsCountDeprecated;
@property(readonly, copy, nonatomic) NSNumber *pendingSnapsCountDeprecated;
@property(readonly, copy, nonatomic) NSNumber *potentialHighQualityScoreDeprecated;
@property(readonly, copy, nonatomic) NSNumber *reverseTs;
@property(readonly, copy, nonatomic) NSString *sharedStoryIdDeprecated;
@property(readonly, copy, nonatomic) NSString *snapProId;
@property(readonly, copy, nonatomic) NSNumber *snapStreakCount;
@property(readonly, copy, nonatomic) NSNumber *snapStreakExpiration;
@property(readonly, copy, nonatomic) NSNumber *sojuNewLinkDeprecated;
@property(readonly, copy, nonatomic) NSString *storyPrivacy;
@property(readonly, copy, nonatomic) NSDictionary *studySettings;
@property(readonly, copy, nonatomic) NSNumber *ts;
@property(readonly, copy, nonatomic) NSNumber *type;
@property(readonly, copy, nonatomic) NSString *userId;
@property(readonly, copy, nonatomic) NSString *venueDeprecated;
@end

