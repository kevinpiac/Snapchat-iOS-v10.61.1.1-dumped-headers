//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@class NSNumber, NSString;

@interface SCAGeofilterStorySnapScreenshot : SCAUserTrackedEvent
{
    NSNumber *viewTimeSec;
    NSNumber *withGallery;
    NSNumber *camera;
    NSNumber *rollMinDegree;
    NSNumber *rollMaxDegree;
    long long storyType;
    long long mediaType;
    long long storyTypeSpecific;
    NSString *geoFence;
    NSString *posterId;
    NSString *encFilterGeofilterId;
    NSString *encFilterGeolensId;
    NSString *encGeoData;
    NSString *filterGeofilterId;
    NSString *filterGeolensId;
    NSString *lensOptionId;
    NSString *adsnapPlacementId;
    NSString *ghost_poster_id;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getAdsnapPlacementId;
- (long long)getCamera;
- (id)getEncFilterGeofilterId;
- (id)getEncFilterGeolensId;
- (id)getEncGeoData;
- (id)getEventName;
- (long long)getEventQoS;
- (id)getFilterGeofilterId;
- (id)getFilterGeolensId;
- (id)getGeoFence;
- (id)getGhost_poster_id;
- (id)getLensOptionId;
- (long long)getMediaType;
- (double)getPerUserSamplingRate;
- (id)getPosterId;
- (double)getRollMaxDegree;
- (double)getRollMinDegree;
- (long long)getStoryType;
- (long long)getStoryTypeSpecific;
- (double)getViewTimeSec;
- (_Bool)getWithGallery;
- (id)init;
- (void)setAdsnapPlacementId:(id)arg1;
- (void)setCamera:(long long)arg1;
- (void)setEncFilterGeofilterId:(id)arg1;
- (void)setEncFilterGeolensId:(id)arg1;
- (void)setEncGeoData:(id)arg1;
- (void)setFilterGeofilterId:(id)arg1;
- (void)setFilterGeolensId:(id)arg1;
- (void)setGeoFence:(id)arg1;
- (void)setGhost_poster_id:(id)arg1;
- (void)setLensOptionId:(id)arg1;
- (void)setMediaType:(long long)arg1;
- (void)setPosterId:(id)arg1;
- (void)setRollMaxDegree:(double)arg1;
- (void)setRollMinDegree:(double)arg1;
- (void)setStoryType:(long long)arg1;
- (void)setStoryTypeSpecific:(long long)arg1;
- (void)setViewTimeSec:(double)arg1;
- (void)setWithGallery:(_Bool)arg1;

@end
