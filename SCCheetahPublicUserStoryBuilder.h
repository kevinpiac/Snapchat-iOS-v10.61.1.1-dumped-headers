//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, SCMedia, SCSearchThumbnail;

@interface SCCheetahPublicUserStoryBuilder : NSObject
{
    NSArray *_snaps;
    NSString *_userId;
    SCSearchThumbnail *_imageThumbnail;
    SCSearchThumbnail *_videoFirstframeThumbnail;
    SCMedia *_videoThumbnail;
    NSString *_thumbnailSnapId;
    NSString *_displayName;
    NSString *_userName;
    NSString *_emoji;
    _Bool _isPopular;
    _Bool _isOfficial;
    _Bool _showOfficialBadge;
    _Bool _isFollowed;
    NSString *_bitmojiAvatarId;
    int _totalNumSnaps;
    double _totalDurationSecs;
    _Bool _isFollowing;
    double _displayTimestampSecs;
    NSString *_bitmojiAvatarSelfieId;
    NSArray *_postSubscribeSuggestions;
    NSString *_businessId;
    NSString *_businessLogoURL;
    NSString *_businessDeepLinkURL;
    int _brandFriendliness;
    _Bool _needDeltaFetch;
}

+ (id)cheetahPublicUserStory;
+ (id)cheetahPublicUserStoryFromExistingCheetahPublicUserStory:(id)arg1;
- (void).cxx_destruct;
- (id)build;
- (id)withBitmojiAvatarId:(id)arg1;
- (id)withBitmojiAvatarSelfieId:(id)arg1;
- (id)withBrandFriendliness:(int)arg1;
- (id)withBusinessDeepLinkURL:(id)arg1;
- (id)withBusinessId:(id)arg1;
- (id)withBusinessLogoURL:(id)arg1;
- (id)withDisplayName:(id)arg1;
- (id)withDisplayTimestampSecs:(double)arg1;
- (id)withEmoji:(id)arg1;
- (id)withImageThumbnail:(id)arg1;
- (id)withIsFollowed:(_Bool)arg1;
- (id)withIsFollowing:(_Bool)arg1;
- (id)withIsOfficial:(_Bool)arg1;
- (id)withIsPopular:(_Bool)arg1;
- (id)withNeedDeltaFetch:(_Bool)arg1;
- (id)withPostSubscribeSuggestions:(id)arg1;
- (id)withShowOfficialBadge:(_Bool)arg1;
- (id)withSnaps:(id)arg1;
- (id)withThumbnailSnapId:(id)arg1;
- (id)withTotalDurationSecs:(double)arg1;
- (id)withTotalNumSnaps:(int)arg1;
- (id)withUserId:(id)arg1;
- (id)withUserName:(id)arg1;
- (id)withVideoFirstframeThumbnail:(id)arg1;
- (id)withVideoThumbnail:(id)arg1;

@end

