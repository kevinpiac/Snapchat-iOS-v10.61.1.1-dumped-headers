//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@class NSString;

@interface SCAStoryDeepLinkContentUnavailable : SCAUserTrackedEvent
{
    long long denyReason;
    long long storyType;
    NSString *posterId;
    NSString *geoFence;
    NSString *ghost_poster_id;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)getDenyReason;
- (id)getEventName;
- (long long)getEventQoS;
- (id)getGeoFence;
- (id)getGhost_poster_id;
- (double)getPerUserSamplingRate;
- (id)getPosterId;
- (long long)getStoryType;
- (id)init;
- (void)setDenyReason:(long long)arg1;
- (void)setGeoFence:(id)arg1;
- (void)setGhost_poster_id:(id)arg1;
- (void)setPosterId:(id)arg1;
- (void)setStoryType:(long long)arg1;

@end

