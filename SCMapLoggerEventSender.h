//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SCMapLoggerEventSender : NSObject
{
    unsigned long long _sessionId;
}

- (void)exploreButtonDidAppearWithCount:(unsigned long long)arg1 announcementId:(id)arg2;
- (void)exploreClosedWithExitEvent:(long long)arg1 duration:(double)arg2 statusAvailableCount:(unsigned long long)arg3 statusReadCount:(unsigned long long)arg4;
- (void)exploreDidViewMyStatusId:(id)arg1 statusType:(int)arg2 viewCount:(unsigned long long)arg3 didTap:(_Bool)arg4;
- (void)exploreDidViewStatusId:(id)arg1 statusType:(int)arg2 friendUserId:(id)arg3;
- (void)exploreOpenedWithSource:(long long)arg1 statusAvailableCount:(unsigned long long)arg2 statusUnreadCount:(unsigned long long)arg3 visibleStatusId:(id)arg4;
- (void)exploreScreenshotOfStatusId:(id)arg1 statusType:(int)arg2 isMyStatus:(_Bool)arg3;
- (id)initWithSessionId:(unsigned long long)arg1;
- (void)locationPermissionsResponse:(_Bool)arg1;
- (void)mapDidFinishLoadingWithZoom:(double)arg1 friendCount:(unsigned long long)arg2 friendWithBitmojiCount:(unsigned long long)arg3 timeToUserShowingOnMap:(double)arg4 timeToFriendBitmojisLoaded:(double)arg5 storyThumbnailCount:(unsigned long long)arg6 timeToStoryThumbnailsLoaded:(double)arg7 heatPointCount:(unsigned long long)arg8 timeToHeatLoaded:(double)arg9;
- (void)mapScreenshotCapturedWithAction:(long long)arg1 friendsInViewport:(unsigned long long)arg2;
- (void)mapStatusClosedWithDuration:(double)arg1 statusSessionId:(unsigned long long)arg2 currentStatusCount:(unsigned long long)arg3 statusOptionsCount:(unsigned long long)arg4;
- (void)mapStatusDidDeleteStatusWithType:(int)arg1 viewCount:(unsigned long long)arg2 statusSessionId:(unsigned long long)arg3;
- (void)mapStatusDidSetOptionWithType:(long long)arg1 optionIndex:(unsigned long long)arg2 statusSessionId:(unsigned long long)arg3 availableStickerCount:(unsigned long long)arg4 chosenStickerId:(id)arg5 chosenOptionId:(id)arg6;
- (void)mapStatusDidTapOptionWithType:(long long)arg1 optionIndex:(unsigned long long)arg2 statusSessionId:(unsigned long long)arg3 availableStickerCount:(unsigned long long)arg4;
- (void)mapStatusOnboardingPageViewWithDuration:(double)arg1 pageName:(long long)arg2 source:(long long)arg3;
- (void)mapStatusOpenedWithSource:(long long)arg1 statusSessionId:(unsigned long long)arg2 currentStatusCount:(unsigned long long)arg3 statusOptionsCount:(unsigned long long)arg4;
- (void)mapUIItemViewed:(long long)arg1;
- (void)mapViewClosedWithType:(long long)arg1 duration:(double)arg2 friendOnMap:(unsigned long long)arg3 bestFriendsOnMap:(unsigned long long)arg4 friendsInViewport:(unsigned long long)arg5 friendsInViewportMax:(unsigned long long)arg6 totalFriendsSeen:(unsigned long long)arg7 totalBestFriendsSeen:(unsigned long long)arg8 unviewedStatusesInViewport:(unsigned long long)arg9 viewedStatusesInViewport:(unsigned long long)arg10 statusesInViewportMax:(unsigned long long)arg11 totalStatusesSeen:(unsigned long long)arg12 seenPoiIds:(id)arg13 gameScore:(unsigned long long)arg14 viewportGameMarkerMaxCount:(unsigned long long)arg15;
- (void)mapViewCompassTappedWithDistance:(double)arg1 friendsOnMap:(unsigned long long)arg2 friendsInViewport:(unsigned long long)arg3;
- (void)mapViewFriendClusterViewedWithSource:(long long)arg1 actionType:(long long)arg2 clusterUsernames:(id)arg3 clusterUnviewedStatuses:(unsigned long long)arg4 clusterViewedStatuses:(unsigned long long)arg5 clusterViewedBestFriends:(unsigned long long)arg6 friendsOnMap:(unsigned long long)arg7 bestFriendsOnMap:(unsigned long long)arg8 friendsInViewport:(unsigned long long)arg9 distanceFromUser:(double)arg10;
- (void)mapViewOpenedToOnboardingWithSource:(long long)arg1 type:(long long)arg2;
- (void)mapViewOpenedWithSource:(long long)arg1 seenMapTeachingTooltip:(_Bool)arg2 type:(long long)arg3 friendsInViewport:(unsigned long long)arg4 unviewedStatusesInViewport:(unsigned long long)arg5 viewedStatusesInViewport:(unsigned long long)arg6;
- (void)onboardingDidComplete;
- (void)openLeaderboardForGameId:(id)arg1 score:(unsigned long long)arg2 ghostMode:(_Bool)arg3;
@property(readonly, nonatomic) unsigned long long sessionId; // @synthesize sessionId=_sessionId;
- (void)showedGameStartDialog:(id)arg1 ghostMode:(_Bool)arg2;
- (void)tapToAcquireInLensGameMarker:(id)arg1 gameId:(id)arg2 result:(_Bool)arg3 score:(unsigned long long)arg4 ghostMode:(_Bool)arg5;
- (void)tapToPlayAnywhereAttemptForCoordinate:(struct CLLocationCoordinate2D)arg1 zoomLevel:(double)arg2 result:(long long)arg3 distanceFromUser:(double)arg4 distanceFromClosestFriend:(double)arg5;
- (void)tapToPlayPoiAttemptForPoiId:(id)arg1 coordinate:(struct CLLocationCoordinate2D)arg2 zoomLevel:(double)arg3 result:(long long)arg4 distanceFromUser:(double)arg5 distanceFromClosestFriend:(double)arg6;
- (void)tapToUnlockAttemptForPoiId:(id)arg1 result:(long long)arg2 gameId:(id)arg3 score:(unsigned long long)arg4 distanceFromUser:(double)arg5 ghostMode:(_Bool)arg6;

@end

