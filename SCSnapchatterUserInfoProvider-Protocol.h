//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSDate, NSNumber, NSString, SCSnapchatter;

@protocol SCSnapchatterUserInfoProvider
@property(readonly, nonatomic) _Bool hasGrantedContactAccessAndPhoneVerified;
@property(readonly, nonatomic) _Bool isAspiringInfluencer;
@property(readonly, nonatomic) _Bool isContactSyncEnabled;
@property(readonly, nonatomic) _Bool isNewOrHighRiskUser;
@property(readonly, nonatomic) _Bool isNewUser;
@property(readonly, nonatomic) _Bool shouldShowQuickAddCarousel;
- (_Bool)shouldSyncSuggestedFriends:(NSNumber *)arg1;
@property(readonly, nonatomic) NSDate *snapKitPrivacyPolicyLastSeenDate;
@property(readonly, nonatomic) long long snapPrivacy;
@property(readonly, nonatomic) long long storyPrivacy;
@property(readonly, nonatomic) _Bool storyPrivacyPublic;
@property(readonly, nonatomic) NSString *userAvatarId;
@property(readonly, nonatomic) NSString *userId;
@property(readonly, nonatomic) SCSnapchatter *userSnapchatter;
@end

