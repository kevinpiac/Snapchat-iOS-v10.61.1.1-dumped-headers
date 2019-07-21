//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "SCEventFriend-Protocol.h"
#import "SCSortableRecipient-Protocol.h"

@class NSArray, NSDate, NSNumber, NSSet, NSString, SOJUSecurityFideliusFriendInfo;

@interface Friend : NSObject <NSCoding, SCSortableRecipient, SCEventFriend>
{
    NSString *_formattedName;
    NSNumber *_isOfficial;
    _Bool _isSuggestedFriend;
    _Bool _isVerified;
    _Bool _newLink;
    _Bool _ignored;
    _Bool _hidden;
    _Bool _isRecommended;
    _Bool _canSeeCustomStories;
    _Bool _needsLoveCandidate;
    _Bool _isSharedStory;
    _Bool _hasCustomDescriptionForSharedStory;
    _Bool _sharedLocalStory;
    _Bool _unVerifiedByServer;
    _Bool _shouldSendClearTextKey;
    _Bool _isPopular;
    _Bool _isMuted;
    _Bool _isPublisher;
    _Bool _isFriendRequestViewed;
    _Bool _autoAdded;
    long long _type;
    long long _snapStreakCount;
    long long _snapStreakFilterLastUsed;
    NSNumber *_score;
    NSDate *_lastInteractionTimestamp;
    NSDate *_friendAddedAt;
    NSDate *_friendRequestSentAt;
    NSString *_atomicName;
    NSString *_userId;
    NSString *_display;
    NSString *_suggestionToken;
    NSString *_suggestReasonDisplay;
    NSString *_searchDisplayReason;
    NSString *_snapProId;
    NSSet *_atomicSearchKeywords;
    NSNumber *_contactBasedRecommendationScore;
    NSArray *_friendmojis;
    NSDate *_birthdayDate;
    NSString *_snaptagUrl;
    NSString *_sharedStoryDescription;
    NSString *_sharedStoryId;
    NSString *_sharedStoryVenue;
    NSString *_storyPrivacy;
    NSString *_bitmojiAvatarId;
    NSString *_bitmojiSelfieId;
    SOJUSecurityFideliusFriendInfo *_fideliusInfo;
    NSString *_popularUserEmoji;
    NSString *_thumbnailUrl;
    unsigned long long _pendingSnapCount;
    unsigned long long _pendingChatCount;
    unsigned long long _potentialHighQualityScore;
    NSNumber *_timestamp;
    NSString *_birthday;
    NSDate *_expiration;
    NSString *_subtext;
}

+ (id)firstNameForName:(id)arg1;
+ (id)friendFromGroupChatParticipant:(id)arg1;
+ (id)friendWithAddedFriend:(id)arg1;
+ (id)friendWithSuggestedFriend:(id)arg1;
- (void).cxx_destruct;
- (void)_initNewFriendFields;
- (id)asBitmojiUser;
@property(copy) NSString *atomicName; // @synthesize atomicName=_atomicName;
@property(retain) NSSet *atomicSearchKeywords; // @synthesize atomicSearchKeywords=_atomicSearchKeywords;
@property _Bool autoAdded; // @synthesize autoAdded=_autoAdded;
@property(copy) NSString *birthday; // @synthesize birthday=_birthday;
@property(retain) NSDate *birthdayDate; // @synthesize birthdayDate=_birthdayDate;
@property(copy) NSString *bitmojiAvatarId; // @synthesize bitmojiAvatarId=_bitmojiAvatarId;
@property(copy) NSString *bitmojiSelfieId; // @synthesize bitmojiSelfieId=_bitmojiSelfieId;
@property _Bool canSeeCustomStories; // @synthesize canSeeCustomStories=_canSeeCustomStories;
- (void)clearCachedIsOfficialValue;
- (long long)compare:(id)arg1;
@property(retain) NSNumber *contactBasedRecommendationScore; // @synthesize contactBasedRecommendationScore=_contactBasedRecommendationScore;
@property(readonly, copy) NSString *description;
@property(copy) NSString *display; // @synthesize display=_display;
- (id)duplicate;
- (void)encodeWithCoder:(id)arg1;
@property(retain) NSDate *expiration; // @synthesize expiration=_expiration;
@property(retain) SOJUSecurityFideliusFriendInfo *fideliusInfo; // @synthesize fideliusInfo=_fideliusInfo;
- (id)firstNameToDisplay;
@property(retain) NSDate *friendAddedAt; // @synthesize friendAddedAt=_friendAddedAt;
@property(retain) NSDate *friendRequestSentAt; // @synthesize friendRequestSentAt=_friendRequestSentAt;
@property(retain) NSArray *friendmojis; // @synthesize friendmojis=_friendmojis;
- (id)getBirthday;
- (id)getFriendmojisWithoutSnapStreakMojis;
- (id)getKey;
- (id)getSnapStreakExpiringTimeStamp;
- (_Bool)hasBirthdayToday;
@property _Bool hasCustomDescriptionForSharedStory; // @synthesize hasCustomDescriptionForSharedStory=_hasCustomDescriptionForSharedStory;
- (_Bool)hasDisplay;
- (_Bool)hasFriendmoji;
@property(readonly) unsigned long long hash;
@property _Bool hidden; // @synthesize hidden=_hidden;
- (id)identifier;
@property _Bool ignored; // @synthesize ignored=_ignored;
- (id)initDummyUserWithUsername:(id)arg1 displayName:(id)arg2 userId:(id)arg3;
- (id)initDummyUserWithUsername:(id)arg1 displayName:(id)arg2 userId:(id)arg3 bitmojiAvatarId:(id)arg4 bitmojiSelfieId:(id)arg5;
- (id)initDummyUserWithUsername:(id)arg1 displayName:(id)arg2 userId:(id)arg3 bitmojiAvatarId:(id)arg4 bitmojiSelfieId:(id)arg5 isPopular:(_Bool)arg6;
- (id)initFromVerifiedUserSearchResultWithUserId:(id)arg1 username:(id)arg2 displayName:(id)arg3 friendmoji:(id)arg4 searchKeywords:(id)arg5;
- (id)initTempFriendWithUsername:(id)arg1;
- (id)initTempFriendWithUsername:(id)arg1 displayName:(id)arg2;
- (id)initUnverifiedUserWithUsername:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFindFriendsContact:(id)arg1;
- (id)initWithName:(id)arg1;
- (id)initWithSoju:(id)arg1;
- (id)initWithSuggestedFriend:(id)arg1;
- (id)initWithSuggestedPublisher:(id)arg1;
- (_Bool)isCurrentFriend;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToFriend:(id)arg1;
@property _Bool isFriendRequestViewed; // @synthesize isFriendRequestViewed=_isFriendRequestViewed;
- (_Bool)isInvitedFriend;
@property(nonatomic) _Bool isMuted; // @synthesize isMuted=_isMuted;
- (_Bool)isOfficial;
@property(nonatomic) _Bool isPopular; // @synthesize isPopular=_isPopular;
@property _Bool isPublisher; // @synthesize isPublisher=_isPublisher;
@property _Bool isRecommended; // @synthesize isRecommended=_isRecommended;
@property _Bool isSharedStory; // @synthesize isSharedStory=_isSharedStory;
- (_Bool)isSubscribable;
@property _Bool isSuggestedFriend; // @synthesize isSuggestedFriend=_isSuggestedFriend;
@property _Bool isVerified; // @synthesize isVerified=_isVerified;
- (_Bool)keywordMatchesCleanedQuery:(id)arg1;
@property(copy) NSDate *lastInteractionTimestamp; // @synthesize lastInteractionTimestamp=_lastInteractionTimestamp;
- (unsigned long long)matchType:(id)arg1;
- (_Bool)matches:(id)arg1;
- (_Bool)matchesByDisplayAndUserNames:(id)arg1;
- (_Bool)matchesByDisplayFirstName:(id)arg1;
- (_Bool)matchesByDisplayLastName:(id)arg1;
- (_Bool)matchesByDisplayName:(id)arg1;
- (_Bool)matchesByPartialName:(id)arg1;
- (_Bool)matchesByUsername:(id)arg1;
- (_Bool)matchesForOfficialStorySearch:(id)arg1;
- (_Bool)matchesPrefix:(id)arg1;
- (id)name;
- (id)nameToDisplay;
@property _Bool needsLoveCandidate; // @synthesize needsLoveCandidate=_needsLoveCandidate;
@property _Bool newLink; // @synthesize newLink=_newLink;
@property unsigned long long pendingChatCount; // @synthesize pendingChatCount=_pendingChatCount;
@property unsigned long long pendingSnapCount; // @synthesize pendingSnapCount=_pendingSnapCount;
@property(copy, nonatomic) NSString *popularUserEmoji; // @synthesize popularUserEmoji=_popularUserEmoji;
@property unsigned long long potentialHighQualityScore; // @synthesize potentialHighQualityScore=_potentialHighQualityScore;
- (void)removeSnapStreak;
@property(retain) NSNumber *score; // @synthesize score=_score;
@property(copy) NSString *searchDisplayReason; // @synthesize searchDisplayReason=_searchDisplayReason;
- (id)searchKeywords;
- (void)setName:(id)arg1;
- (void)setSearchKeywords:(id)arg1;
@property _Bool sharedLocalStory; // @synthesize sharedLocalStory=_sharedLocalStory;
@property(copy) NSString *sharedStoryDescription; // @synthesize sharedStoryDescription=_sharedStoryDescription;
@property(copy) NSString *sharedStoryId; // @synthesize sharedStoryId=_sharedStoryId;
@property(copy) NSString *sharedStoryVenue; // @synthesize sharedStoryVenue=_sharedStoryVenue;
@property _Bool shouldSendClearTextKey; // @synthesize shouldSendClearTextKey=_shouldSendClearTextKey;
@property(copy) NSString *snapProId; // @synthesize snapProId=_snapProId;
@property long long snapStreakCount; // @synthesize snapStreakCount=_snapStreakCount;
@property long long snapStreakFilterLastUsed; // @synthesize snapStreakFilterLastUsed=_snapStreakFilterLastUsed;
- (void)setSnapStreakMetadataWithExpiryTime:(id)arg1 withCount:(long long)arg2;
@property(retain) NSString *snaptagUrl; // @synthesize snaptagUrl=_snaptagUrl;
@property(copy) NSString *storyPrivacy; // @synthesize storyPrivacy=_storyPrivacy;
@property(copy) NSString *subtext; // @synthesize subtext=_subtext;
@property(copy) NSString *suggestReasonDisplay; // @synthesize suggestReasonDisplay=_suggestReasonDisplay;
@property(copy) NSString *suggestionToken; // @synthesize suggestionToken=_suggestionToken;
@property(retain) NSString *thumbnailUrl; // @synthesize thumbnailUrl=_thumbnailUrl;
@property(retain) NSNumber *timestamp; // @synthesize timestamp=_timestamp;
@property long long type; // @synthesize type=_type;
@property(copy) NSString *userId; // @synthesize userId=_userId;
- (id)subtextToDisplay;
- (id)toDictionary;
@property(readonly) _Bool unVerifiedByServer; // @synthesize unVerifiedByServer=_unVerifiedByServer;
- (id)updateWithFriend:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
