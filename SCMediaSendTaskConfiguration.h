//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSArray, NSDate, NSDictionary, NSNumber, NSString, SOJUMultiSnapMetadata, SOJUStoryFrame;
@protocol SCSnapSendPreparer;

@interface SCMediaSendTaskConfiguration : NSObject <NSCoding>
{
    _Bool _postToMyStory;
    _Bool _isForwarded;
    id <SCSnapSendPreparer> _snapSendPreparer;
    NSArray *_userRecipientUsernames;
    NSArray *_invitedUserPhoneNumbers;
    NSArray *_ourStoriesMetadata;
    NSArray *_appStoryMetadatas;
    NSArray *_businessIds;
    NSArray *_mischiefs;
    NSArray *_customStoryIds;
    NSNumber *_postToMyStoryPrivacyOverride;
    NSDate *_storyUserPostedTimestamp;
    SOJUStoryFrame *_storyFraming;
    NSDictionary *_messageMetadata;
    NSArray *_blizzardEventsOnSuccess;
    NSString *_additionalText;
    SOJUMultiSnapMetadata *_multiSnapMetadata;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *additionalText; // @synthesize additionalText=_additionalText;
- (id)allRecipientUsernames;
@property(readonly, copy, nonatomic) NSArray *appStoryMetadatas; // @synthesize appStoryMetadatas=_appStoryMetadatas;
@property(readonly, copy, nonatomic) NSArray *blizzardEventsOnSuccess; // @synthesize blizzardEventsOnSuccess=_blizzardEventsOnSuccess;
@property(readonly, copy, nonatomic) NSArray *businessIds; // @synthesize businessIds=_businessIds;
- (void)clearBlizzardEventsOnSuccess;
@property(readonly, copy, nonatomic) NSArray *customStoryIds; // @synthesize customStoryIds=_customStoryIds;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithUserRecipientUsernames:(id)arg1 invitedUserPhoneNumbers:(id)arg2 storiesPostingConfig:(id)arg3 businessIds:(id)arg4 mischiefs:(id)arg5 appStoryMetadatas:(id)arg6 storyFraming:(id)arg7 messageMetadata:(id)arg8 blizzardEventsOnSuccess:(id)arg9 additionalText:(id)arg10 multiSnapMetadata:(id)arg11 snapSendPreparer:(id)arg12 isForwarded:(_Bool)arg13;
@property(readonly, copy, nonatomic) NSArray *invitedUserPhoneNumbers; // @synthesize invitedUserPhoneNumbers=_invitedUserPhoneNumbers;
@property(readonly, nonatomic) _Bool isForwarded; // @synthesize isForwarded=_isForwarded;
- (_Bool)isSingleGroupRecipient;
- (_Bool)isSingleUserRecipient;
@property(readonly, copy, nonatomic) NSDictionary *messageMetadata; // @synthesize messageMetadata=_messageMetadata;
@property(readonly, copy, nonatomic) NSArray *mischiefs; // @synthesize mischiefs=_mischiefs;
@property(readonly, nonatomic) SOJUMultiSnapMetadata *multiSnapMetadata; // @synthesize multiSnapMetadata=_multiSnapMetadata;
@property(readonly, copy, nonatomic) NSArray *ourStoriesMetadata; // @synthesize ourStoriesMetadata=_ourStoriesMetadata;
@property(readonly, nonatomic) _Bool postToMyStory; // @synthesize postToMyStory=_postToMyStory;
@property(readonly, nonatomic) NSNumber *postToMyStoryPrivacyOverride; // @synthesize postToMyStoryPrivacyOverride=_postToMyStoryPrivacyOverride;
- (void)removeStory;
@property(readonly, nonatomic) id <SCSnapSendPreparer> snapSendPreparer; // @synthesize snapSendPreparer=_snapSendPreparer;
@property(readonly, nonatomic) SOJUStoryFrame *storyFraming; // @synthesize storyFraming=_storyFraming;
@property(readonly, nonatomic) NSDate *storyUserPostedTimestamp; // @synthesize storyUserPostedTimestamp=_storyUserPostedTimestamp;
- (void)updateGroupRecipientsWithGroupIds:(id)arg1;
- (void)updateUserInviteRecipientsWithPhoneNumbers:(id)arg1;
- (void)updateUserRecipientsWithUsernames:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *userRecipientUsernames; // @synthesize userRecipientUsernames=_userRecipientUsernames;

@end

