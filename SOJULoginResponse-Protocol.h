//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"
#import "SOJUAllUpdatesResponse-Protocol.h"

@class NSArray, NSNumber, NSString, SOJUCofResponse, SOJUConversationsResponseInfo, SOJUDiscoverResponse, SOJUFeatureSettingsResponse, SOJUFeedDeltaSyncToken, SOJUFeedResponseInfo, SOJUFriendsResponse, SOJUIdentityIdentityCheckResponse, SOJUIdentityVerificationNeeded, SOJUMessagingGatewayInfo, SOJUSecuritySecurityInfoResponse, SOJUServerInfoResponse, SOJUSponsoredSlug, SOJUStoriesResponse, SOJUStudySettings, SOJUSupportToolsSupportToolsResponse, SOJUUpdatesResponse;

@protocol SOJULoginResponse <NSObject, NSCoding, NSCopying, SOJUAllUpdatesResponse>
@property(readonly, copy, nonatomic) NSString *backgroundFetchSecretKey;
@property(readonly, copy, nonatomic) SOJUCofResponse *cofResponse;
@property(readonly, copy, nonatomic) NSArray *conversationsResponse;
@property(readonly, copy, nonatomic) SOJUConversationsResponseInfo *conversationsResponseInfo;
@property(readonly, copy, nonatomic) SOJUDiscoverResponse *discover;
@property(readonly, copy, nonatomic) NSString *dtoken1i;
@property(readonly, copy, nonatomic) NSString *dtoken1v;
@property(readonly, copy, nonatomic) NSString *errorField;
@property(readonly, copy, nonatomic) SOJUFeatureSettingsResponse *featureSettings;
@property(readonly, copy, nonatomic) SOJUFeedDeltaSyncToken *feedDeltaSyncToken;
@property(readonly, copy, nonatomic) SOJUFeedResponseInfo *feedResponseInfo;
@property(readonly, copy, nonatomic) NSNumber *forceFullSyncFeedItems;
@property(readonly, copy, nonatomic) NSNumber *forcePhoneVerify;
@property(readonly, copy, nonatomic) SOJUFriendsResponse *friendsResponse;
@property(readonly, copy, nonatomic) NSString *hashedOutBeta;
@property(readonly, copy, nonatomic) SOJUIdentityIdentityCheckResponse *identityCheckResponse;
@property(readonly, copy, nonatomic) NSNumber *isOtpTwoFaEnabled;
@property(readonly, copy, nonatomic) NSNumber *isSmsTwoFaEnabled;
@property(readonly, copy, nonatomic) NSString *iwek;
@property(readonly, copy, nonatomic) NSString *latestBackupOutBeta;
@property(readonly, copy, nonatomic) NSString *latestOutAlpha;
@property(readonly, copy, nonatomic) NSString *message;
@property(readonly, copy, nonatomic) NSString *messageFormat;
@property(readonly, copy, nonatomic) SOJUMessagingGatewayInfo *messagingGatewayInfo;
@property(readonly, copy, nonatomic) NSArray *mischiefResponse;
@property(readonly, copy, nonatomic) NSString *obfuscatedEmail;
@property(readonly, copy, nonatomic) NSString *obfuscatedPhone;
@property(readonly, copy, nonatomic) NSString *odlvPreAuthToken;
@property(readonly, copy, nonatomic) NSNumber *odlvRequired;
@property(readonly, copy, nonatomic) NSString *phoneNumber;
@property(readonly, copy, nonatomic) NSNumber *powNumofzeros;
@property(readonly, copy, nonatomic) NSString *preAuthToken;
@property(readonly, copy, nonatomic) NSString *preferredVerificationMethod;
@property(readonly, copy, nonatomic) NSNumber *quickLoginResponse;
@property(readonly, copy, nonatomic) NSString *reactivationStatus;
@property(readonly, copy, nonatomic) NSNumber *recoveryCodeUsed;
@property(readonly, copy, nonatomic) NSString *safetynetNonce;
@property(readonly, copy, nonatomic) SOJUSecuritySecurityInfoResponse *secInfo;
@property(readonly, copy, nonatomic) SOJUServerInfoResponse *serverInfo;
@property(readonly, copy, nonatomic) SOJUSponsoredSlug *sponsored;
@property(readonly, copy, nonatomic) NSNumber *status;
@property(readonly, copy, nonatomic) SOJUStoriesResponse *storiesResponse;
@property(readonly, copy, nonatomic) SOJUStudySettings *studySettings;
@property(readonly, copy, nonatomic) SOJUSupportToolsSupportToolsResponse *supportToolsResponse;
@property(readonly, copy, nonatomic) NSNumber *twoFaNeeded;
@property(readonly, copy, nonatomic) SOJUUpdatesResponse *updatesResponse;
@property(readonly, copy, nonatomic) NSString *username;
@property(readonly, copy, nonatomic) SOJUIdentityVerificationNeeded *verificationNeeded;
@end

