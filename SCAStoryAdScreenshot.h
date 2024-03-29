//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@class NSNumber, NSString;

@interface SCAStoryAdScreenshot : SCAUserTrackedEvent
{
    NSNumber *viewLocation;
    NSNumber *timeViewed;
    NSNumber *fullView;
    NSNumber *snapIndexCount;
    NSNumber *snapIndexPos;
    NSNumber *adIndexCount;
    NSNumber *adIndexPos;
    NSNumber *snapTime;
    NSNumber *withGallery;
    long long viewSource;
    long long storyType;
    long long mediaType;
    NSString *storySnapId;
    NSString *posterId;
    NSString *geoFence;
    NSString *sponsor;
    NSString *adsnapId;
    NSString *adId;
    NSString *adsnapPlacementId;
    NSString *adsnapLineItemId;
    NSString *userAdId;
    NSString *hydraResultId;
    NSString *ghost_poster_id;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getAdId;
- (long long)getAdIndexCount;
- (long long)getAdIndexPos;
- (id)getAdsnapId;
- (id)getAdsnapLineItemId;
- (id)getAdsnapPlacementId;
- (id)getEventName;
- (long long)getEventQoS;
- (_Bool)getFullView;
- (id)getGeoFence;
- (id)getGhost_poster_id;
- (id)getHydraResultId;
- (long long)getMediaType;
- (double)getPerUserSamplingRate;
- (id)getPosterId;
- (long long)getSnapIndexCount;
- (long long)getSnapIndexPos;
- (double)getSnapTime;
- (id)getSponsor;
- (id)getStorySnapId;
- (long long)getStoryType;
- (double)getTimeViewed;
- (id)getUserAdId;
- (long long)getViewLocation;
- (long long)getViewSource;
- (_Bool)getWithGallery;
- (id)init;
- (void)setAdId:(id)arg1;
- (void)setAdIndexCount:(long long)arg1;
- (void)setAdIndexPos:(long long)arg1;
- (void)setAdsnapId:(id)arg1;
- (void)setAdsnapLineItemId:(id)arg1;
- (void)setAdsnapPlacementId:(id)arg1;
- (void)setFullView:(_Bool)arg1;
- (void)setGeoFence:(id)arg1;
- (void)setGhost_poster_id:(id)arg1;
- (void)setHydraResultId:(id)arg1;
- (void)setMediaType:(long long)arg1;
- (void)setPosterId:(id)arg1;
- (void)setSnapIndexCount:(long long)arg1;
- (void)setSnapIndexPos:(long long)arg1;
- (void)setSnapTime:(double)arg1;
- (void)setSponsor:(id)arg1;
- (void)setStorySnapId:(id)arg1;
- (void)setStoryType:(long long)arg1;
- (void)setTimeViewed:(double)arg1;
- (void)setUserAdId:(id)arg1;
- (void)setViewLocation:(long long)arg1;
- (void)setViewSource:(long long)arg1;
- (void)setWithGallery:(_Bool)arg1;

@end

