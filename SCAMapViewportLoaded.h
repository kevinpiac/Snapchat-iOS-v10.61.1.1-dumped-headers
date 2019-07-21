//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@class NSNumber;

@interface SCAMapViewportLoaded : SCAUserTrackedEvent
{
    NSNumber *mapSessionId;
    NSNumber *zoom;
    NSNumber *viewportFriendCount;
    NSNumber *viewportFriendWithBitmojis;
    NSNumber *timeToUserShowingOnMapMs;
    NSNumber *timeToFriendBitmojisLoadedMs;
    NSNumber *numberOfStoryThumbnails;
    NSNumber *timeToStoryThumbnailsLoadedMs;
    NSNumber *numberOfHeatPoints;
    NSNumber *timeToHeatLoadedMs;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getEventName;
- (long long)getEventQoS;
- (long long)getMapSessionId;
- (long long)getNumberOfHeatPoints;
- (long long)getNumberOfStoryThumbnails;
- (double)getPerUserSamplingRate;
- (long long)getTimeToFriendBitmojisLoadedMs;
- (long long)getTimeToHeatLoadedMs;
- (long long)getTimeToStoryThumbnailsLoadedMs;
- (long long)getTimeToUserShowingOnMapMs;
- (long long)getViewportFriendCount;
- (long long)getViewportFriendWithBitmojis;
- (double)getZoom;
- (void)setMapSessionId:(long long)arg1;
- (void)setNumberOfHeatPoints:(long long)arg1;
- (void)setNumberOfStoryThumbnails:(long long)arg1;
- (void)setTimeToFriendBitmojisLoadedMs:(long long)arg1;
- (void)setTimeToHeatLoadedMs:(long long)arg1;
- (void)setTimeToStoryThumbnailsLoadedMs:(long long)arg1;
- (void)setTimeToUserShowingOnMapMs:(long long)arg1;
- (void)setViewportFriendCount:(long long)arg1;
- (void)setViewportFriendWithBitmojis:(long long)arg1;
- (void)setZoom:(double)arg1;

@end

