//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SOJUFriend-Protocol.h"

@class NSArray, NSDictionary, NSNumber, NSString, SOJUSecurityFideliusFriendInfo;

@interface SOJUFriend : NSObject <SOJUFriend>
{
    NSString *_name;
    NSString *_userId;
    NSNumber *_type;
    NSString *_display;
    NSString *_birthday;
    NSNumber *_ts;
    NSNumber *_reverseTs;
    NSString *_direction;
    NSString *_storyPrivacy;
    NSNumber *_canSeeCustomStories;
    NSNumber *_pendingSnapsCountDeprecated;
    NSNumber *_expirationDeprecated;
    NSNumber *_isSharedStoryDeprecated;
    NSNumber *_hasCustomDescriptionDeprecated;
    NSString *_sharedStoryIdDeprecated;
    NSNumber *_localStoryDeprecated;
    NSNumber *_ignoredLink;
    NSNumber *_hiddenLink;
    NSString *_addSource;
    NSString *_addSourceType;
    NSString *_friendmojiString;
    NSNumber *_needsLoveDeprecated;
    NSNumber *_autoAddedDeprecated;
    NSNumber *_sojuNewLinkDeprecated;
    NSNumber *_dontDecayThumbnailDeprecated;
    NSString *_venueDeprecated;
    NSArray *_friendmojiSymbols;
    NSArray *_friendmojis;
    NSNumber *_snapStreakCount;
    NSNumber *_snapStreakExpiration;
    NSString *_bitmojiAvatarId;
    NSNumber *_potentialHighQualityScoreDeprecated;
    NSNumber *_pendingChatsCountDeprecated;
    NSString *_bitmojiSelfieId;
    NSNumber *_canBeSharedByFriendsDeprecated;
    SOJUSecurityFideliusFriendInfo *_fideliusInfo;
    NSString *_bitmojiSnapcodeSelfieId;
    NSDictionary *_studySettings;
    NSNumber *_isPopular;
    NSNumber *_isStoryMuted;
    NSNumber *_isIncomingFriendRequestViewed;
    NSString *_displayUsername;
    NSString *_snapProId;
    NSNumber *_isCognacNotificationMuted;
}

+ (_Bool)canInitFromProto;
+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *addSource; // @synthesize addSource=_addSource;
@property(readonly, copy, nonatomic) NSString *addSourceType; // @synthesize addSourceType=_addSourceType;
- (long long)addSourceTypeEnum;
@property(readonly, copy, nonatomic) NSNumber *autoAddedDeprecated; // @synthesize autoAddedDeprecated=_autoAddedDeprecated;
- (_Bool)autoAddedDeprecatedValue;
@property(readonly, copy, nonatomic) NSString *birthday; // @synthesize birthday=_birthday;
@property(readonly, copy, nonatomic) NSString *bitmojiAvatarId; // @synthesize bitmojiAvatarId=_bitmojiAvatarId;
@property(readonly, copy, nonatomic) NSString *bitmojiSelfieId; // @synthesize bitmojiSelfieId=_bitmojiSelfieId;
@property(readonly, copy, nonatomic) NSString *bitmojiSnapcodeSelfieId; // @synthesize bitmojiSnapcodeSelfieId=_bitmojiSnapcodeSelfieId;
@property(readonly, copy, nonatomic) NSNumber *canBeSharedByFriendsDeprecated; // @synthesize canBeSharedByFriendsDeprecated=_canBeSharedByFriendsDeprecated;
- (_Bool)canBeSharedByFriendsDeprecatedValue;
@property(readonly, copy, nonatomic) NSNumber *canSeeCustomStories; // @synthesize canSeeCustomStories=_canSeeCustomStories;
- (_Bool)canSeeCustomStoriesValue;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)decodeWithFasterDecoder:(id)arg1;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSString *direction; // @synthesize direction=_direction;
@property(readonly, copy, nonatomic) NSString *display; // @synthesize display=_display;
@property(readonly, copy, nonatomic) NSString *displayUsername; // @synthesize displayUsername=_displayUsername;
@property(readonly, copy, nonatomic) NSNumber *dontDecayThumbnailDeprecated; // @synthesize dontDecayThumbnailDeprecated=_dontDecayThumbnailDeprecated;
- (_Bool)dontDecayThumbnailDeprecatedValue;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
@property(readonly, copy, nonatomic) NSNumber *expirationDeprecated; // @synthesize expirationDeprecated=_expirationDeprecated;
- (long long)expirationDeprecatedValue;
@property(readonly, copy, nonatomic) SOJUSecurityFideliusFriendInfo *fideliusInfo; // @synthesize fideliusInfo=_fideliusInfo;
@property(readonly, copy, nonatomic) NSString *friendmojiString; // @synthesize friendmojiString=_friendmojiString;
@property(readonly, copy, nonatomic) NSArray *friendmojiSymbols; // @synthesize friendmojiSymbols=_friendmojiSymbols;
@property(readonly, copy, nonatomic) NSArray *friendmojis; // @synthesize friendmojis=_friendmojis;
@property(readonly, copy, nonatomic) NSNumber *hasCustomDescriptionDeprecated; // @synthesize hasCustomDescriptionDeprecated=_hasCustomDescriptionDeprecated;
- (_Bool)hasCustomDescriptionDeprecatedValue;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSNumber *hiddenLink; // @synthesize hiddenLink=_hiddenLink;
- (_Bool)hiddenLinkValue;
@property(readonly, copy, nonatomic) NSNumber *ignoredLink; // @synthesize ignoredLink=_ignoredLink;
- (_Bool)ignoredLinkValue;
- (id)initWithCoder:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1;
- (id)initWithName:(id)arg1 userId:(id)arg2 type:(id)arg3 display:(id)arg4 birthday:(id)arg5 ts:(id)arg6 reverseTs:(id)arg7 direction:(id)arg8 storyPrivacy:(id)arg9 canSeeCustomStories:(id)arg10 pendingSnapsCountDeprecated:(id)arg11 expirationDeprecated:(id)arg12 isSharedStoryDeprecated:(id)arg13 hasCustomDescriptionDeprecated:(id)arg14 sharedStoryIdDeprecated:(id)arg15 localStoryDeprecated:(id)arg16 ignoredLink:(id)arg17 hiddenLink:(id)arg18 addSource:(id)arg19 addSourceType:(id)arg20 friendmojiString:(id)arg21 needsLoveDeprecated:(id)arg22 autoAddedDeprecated:(id)arg23 sojuNewLinkDeprecated:(id)arg24 dontDecayThumbnailDeprecated:(id)arg25 venueDeprecated:(id)arg26 friendmojiSymbols:(id)arg27 friendmojis:(id)arg28 snapStreakCount:(id)arg29 snapStreakExpiration:(id)arg30 bitmojiAvatarId:(id)arg31 potentialHighQualityScoreDeprecated:(id)arg32 pendingChatsCountDeprecated:(id)arg33 bitmojiSelfieId:(id)arg34 canBeSharedByFriendsDeprecated:(id)arg35 fideliusInfo:(id)arg36 bitmojiSnapcodeSelfieId:(id)arg37 studySettings:(id)arg38 isPopular:(id)arg39 isStoryMuted:(id)arg40 isIncomingFriendRequestViewed:(id)arg41 displayUsername:(id)arg42 snapProId:(id)arg43 isCognacNotificationMuted:(id)arg44;
@property(readonly, copy, nonatomic) NSNumber *isCognacNotificationMuted; // @synthesize isCognacNotificationMuted=_isCognacNotificationMuted;
- (_Bool)isCognacNotificationMutedValue;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSNumber *isIncomingFriendRequestViewed; // @synthesize isIncomingFriendRequestViewed=_isIncomingFriendRequestViewed;
- (_Bool)isIncomingFriendRequestViewedValue;
@property(readonly, copy, nonatomic) NSNumber *isPopular; // @synthesize isPopular=_isPopular;
- (_Bool)isPopularValue;
@property(readonly, copy, nonatomic) NSNumber *isSharedStoryDeprecated; // @synthesize isSharedStoryDeprecated=_isSharedStoryDeprecated;
- (_Bool)isSharedStoryDeprecatedValue;
@property(readonly, copy, nonatomic) NSNumber *isStoryMuted; // @synthesize isStoryMuted=_isStoryMuted;
- (_Bool)isStoryMutedValue;
@property(readonly, copy, nonatomic) NSNumber *localStoryDeprecated; // @synthesize localStoryDeprecated=_localStoryDeprecated;
- (_Bool)localStoryDeprecatedValue;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, copy, nonatomic) NSNumber *needsLoveDeprecated; // @synthesize needsLoveDeprecated=_needsLoveDeprecated;
- (_Bool)needsLoveDeprecatedValue;
@property(readonly, copy, nonatomic) NSNumber *pendingChatsCountDeprecated; // @synthesize pendingChatsCountDeprecated=_pendingChatsCountDeprecated;
- (int)pendingChatsCountDeprecatedValue;
@property(readonly, copy, nonatomic) NSNumber *pendingSnapsCountDeprecated; // @synthesize pendingSnapsCountDeprecated=_pendingSnapsCountDeprecated;
- (int)pendingSnapsCountDeprecatedValue;
@property(readonly, copy, nonatomic) NSNumber *potentialHighQualityScoreDeprecated; // @synthesize potentialHighQualityScoreDeprecated=_potentialHighQualityScoreDeprecated;
- (int)potentialHighQualityScoreDeprecatedValue;
- (_Bool)preferFasterCoding;
@property(readonly, copy, nonatomic) NSNumber *reverseTs; // @synthesize reverseTs=_reverseTs;
- (long long)reverseTsValue;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
@property(readonly, copy, nonatomic) NSString *sharedStoryIdDeprecated; // @synthesize sharedStoryIdDeprecated=_sharedStoryIdDeprecated;
@property(readonly, copy, nonatomic) NSString *snapProId; // @synthesize snapProId=_snapProId;
@property(readonly, copy, nonatomic) NSNumber *snapStreakCount; // @synthesize snapStreakCount=_snapStreakCount;
- (int)snapStreakCountValue;
@property(readonly, copy, nonatomic) NSNumber *snapStreakExpiration; // @synthesize snapStreakExpiration=_snapStreakExpiration;
- (long long)snapStreakExpirationValue;
@property(readonly, copy, nonatomic) NSNumber *sojuNewLinkDeprecated; // @synthesize sojuNewLinkDeprecated=_sojuNewLinkDeprecated;
- (_Bool)sojuNewLinkDeprecatedValue;
@property(readonly, copy, nonatomic) NSString *storyPrivacy; // @synthesize storyPrivacy=_storyPrivacy;
- (long long)storyPrivacyEnum;
@property(readonly, copy, nonatomic) NSDictionary *studySettings; // @synthesize studySettings=_studySettings;
- (id)toDictionary;
- (id)toJson;
@property(readonly, copy, nonatomic) NSNumber *ts; // @synthesize ts=_ts;
- (long long)tsValue;
@property(readonly, copy, nonatomic) NSNumber *type; // @synthesize type=_type;
- (long long)typeEnum;
- (int)typeValue;
@property(readonly, copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(readonly, copy, nonatomic) NSString *venueDeprecated; // @synthesize venueDeprecated=_venueDeprecated;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

