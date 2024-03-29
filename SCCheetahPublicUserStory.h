//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSArray, NSString, SCMedia, SCSearchThumbnail;

@interface SCCheetahPublicUserStory : NSObject <NSCopying, NSCoding>
{
    _Bool _isPopular;
    _Bool _isOfficial;
    _Bool _showOfficialBadge;
    _Bool _isFollowed;
    _Bool _isFollowing;
    _Bool _needDeltaFetch;
    int _totalNumSnaps;
    int _brandFriendliness;
    NSArray *_snaps;
    NSString *_userId;
    SCSearchThumbnail *_imageThumbnail;
    SCSearchThumbnail *_videoFirstframeThumbnail;
    SCMedia *_videoThumbnail;
    NSString *_thumbnailSnapId;
    NSString *_displayName;
    NSString *_userName;
    NSString *_emoji;
    NSString *_bitmojiAvatarId;
    double _totalDurationSecs;
    double _displayTimestampSecs;
    NSString *_bitmojiAvatarSelfieId;
    NSArray *_postSubscribeSuggestions;
    NSString *_businessId;
    NSString *_businessLogoURL;
    NSString *_businessDeepLinkURL;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *bitmojiAvatarId; // @synthesize bitmojiAvatarId=_bitmojiAvatarId;
@property(readonly, copy, nonatomic) NSString *bitmojiAvatarSelfieId; // @synthesize bitmojiAvatarSelfieId=_bitmojiAvatarSelfieId;
@property(readonly, nonatomic) int brandFriendliness; // @synthesize brandFriendliness=_brandFriendliness;
@property(readonly, copy, nonatomic) NSString *businessDeepLinkURL; // @synthesize businessDeepLinkURL=_businessDeepLinkURL;
@property(readonly, copy, nonatomic) NSString *businessId; // @synthesize businessId=_businessId;
@property(readonly, copy, nonatomic) NSString *businessLogoURL; // @synthesize businessLogoURL=_businessLogoURL;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly, nonatomic) double displayTimestampSecs; // @synthesize displayTimestampSecs=_displayTimestampSecs;
@property(readonly, copy, nonatomic) NSString *emoji; // @synthesize emoji=_emoji;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
@property(readonly, copy, nonatomic) SCSearchThumbnail *imageThumbnail; // @synthesize imageThumbnail=_imageThumbnail;
- (id)initWithCoder:(id)arg1;
- (id)initWithSnaps:(id)arg1 userId:(id)arg2 imageThumbnail:(id)arg3 videoFirstframeThumbnail:(id)arg4 videoThumbnail:(id)arg5 thumbnailSnapId:(id)arg6 displayName:(id)arg7 userName:(id)arg8 emoji:(id)arg9 isPopular:(_Bool)arg10 isOfficial:(_Bool)arg11 showOfficialBadge:(_Bool)arg12 isFollowed:(_Bool)arg13 bitmojiAvatarId:(id)arg14 totalNumSnaps:(int)arg15 totalDurationSecs:(double)arg16 isFollowing:(_Bool)arg17 displayTimestampSecs:(double)arg18 bitmojiAvatarSelfieId:(id)arg19 postSubscribeSuggestions:(id)arg20 businessId:(id)arg21 businessLogoURL:(id)arg22 businessDeepLinkURL:(id)arg23 brandFriendliness:(int)arg24 needDeltaFetch:(_Bool)arg25;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) _Bool isFollowed; // @synthesize isFollowed=_isFollowed;
@property(readonly, nonatomic) _Bool isFollowing; // @synthesize isFollowing=_isFollowing;
@property(readonly, nonatomic) _Bool isOfficial; // @synthesize isOfficial=_isOfficial;
@property(readonly, nonatomic) _Bool isPopular; // @synthesize isPopular=_isPopular;
@property(readonly, nonatomic) _Bool needDeltaFetch; // @synthesize needDeltaFetch=_needDeltaFetch;
@property(readonly, copy, nonatomic) NSArray *postSubscribeSuggestions; // @synthesize postSubscribeSuggestions=_postSubscribeSuggestions;
@property(readonly, nonatomic) _Bool showOfficialBadge; // @synthesize showOfficialBadge=_showOfficialBadge;
@property(readonly, copy, nonatomic) NSArray *snaps; // @synthesize snaps=_snaps;
@property(readonly, copy, nonatomic) NSString *thumbnailSnapId; // @synthesize thumbnailSnapId=_thumbnailSnapId;
@property(readonly, nonatomic) double totalDurationSecs; // @synthesize totalDurationSecs=_totalDurationSecs;
@property(readonly, nonatomic) int totalNumSnaps; // @synthesize totalNumSnaps=_totalNumSnaps;
@property(readonly, copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(readonly, copy, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(readonly, copy, nonatomic) SCSearchThumbnail *videoFirstframeThumbnail; // @synthesize videoFirstframeThumbnail=_videoFirstframeThumbnail;
@property(readonly, copy, nonatomic) SCMedia *videoThumbnail; // @synthesize videoThumbnail=_videoThumbnail;

@end

