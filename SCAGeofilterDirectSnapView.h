//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@class NSNumber, NSString;

@interface SCAGeofilterDirectSnapView : SCAUserTrackedEvent
{
    NSNumber *withAnimated;
    NSNumber *multiSnapCount;
    NSNumber *multiSnapIndex;
    NSNumber *caption;
    NSNumber *camera;
    NSNumber *drawing;
    NSNumber *flash;
    NSNumber *snapTimeSec;
    NSNumber *snapTimeIsLoop;
    NSNumber *fullView;
    NSNumber *initialView;
    NSNumber *viewTimeSec;
    NSNumber *ackTimeSec;
    NSNumber *rollMaxDegree;
    NSNumber *rollMinDegree;
    NSNumber *pinchToZoom;
    NSNumber *withAttachment;
    long long source;
    long long mediaType;
    long long filterVisual;
    long long filterInfo;
    NSString *filterSponsor;
    NSString *filterGeofilterId;
    NSString *filterGeolensId;
    NSString *lensOptionId;
    NSString *posterId;
    NSString *encFilterGeofilterId;
    NSString *encFilterGeolensId;
    NSString *adsnapPlacementId;
    NSString *encGeoData;
    NSString *unlockablesSnapInfo;
    NSString *storyViewId;
    NSString *mischiefId;
    NSString *filterVenueId;
    NSString *stickerPackUnlockableIdList;
    NSString *filterGeofilterIdList;
    NSString *ghost_poster_id;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (double)getAckTimeSec;
- (id)getAdsnapPlacementId;
- (long long)getCamera;
- (long long)getCaption;
- (_Bool)getDrawing;
- (id)getEncFilterGeofilterId;
- (id)getEncFilterGeolensId;
- (id)getEncGeoData;
- (id)getEventName;
- (long long)getEventQoS;
- (id)getFilterGeofilterId;
- (id)getFilterGeofilterIdList;
- (id)getFilterGeolensId;
- (long long)getFilterInfo;
- (id)getFilterSponsor;
- (id)getFilterVenueId;
- (long long)getFilterVisual;
- (_Bool)getFlash;
- (_Bool)getFullView;
- (id)getGhost_poster_id;
- (_Bool)getInitialView;
- (id)getLensOptionId;
- (long long)getMediaType;
- (id)getMischiefId;
- (long long)getMultiSnapCount;
- (long long)getMultiSnapIndex;
- (double)getPerUserSamplingRate;
- (double)getPinchToZoom;
- (id)getPosterId;
- (double)getRollMaxDegree;
- (double)getRollMinDegree;
- (_Bool)getSnapTimeIsLoop;
- (double)getSnapTimeSec;
- (long long)getSource;
- (id)getStickerPackUnlockableIdList;
- (id)getStoryViewId;
- (id)getUnlockablesSnapInfo;
- (double)getViewTimeSec;
- (_Bool)getWithAnimated;
- (_Bool)getWithAttachment;
- (id)init;
- (void)setAckTimeSec:(double)arg1;
- (void)setAdsnapPlacementId:(id)arg1;
- (void)setCamera:(long long)arg1;
- (void)setCaption:(long long)arg1;
- (void)setDrawing:(_Bool)arg1;
- (void)setEncFilterGeofilterId:(id)arg1;
- (void)setEncFilterGeolensId:(id)arg1;
- (void)setEncGeoData:(id)arg1;
- (void)setFilterGeofilterId:(id)arg1;
- (void)setFilterGeofilterIdList:(id)arg1;
- (void)setFilterGeolensId:(id)arg1;
- (void)setFilterInfo:(long long)arg1;
- (void)setFilterSponsor:(id)arg1;
- (void)setFilterVenueId:(id)arg1;
- (void)setFilterVisual:(long long)arg1;
- (void)setFlash:(_Bool)arg1;
- (void)setFullView:(_Bool)arg1;
- (void)setGhost_poster_id:(id)arg1;
- (void)setInitialView:(_Bool)arg1;
- (void)setLensOptionId:(id)arg1;
- (void)setMediaType:(long long)arg1;
- (void)setMischiefId:(id)arg1;
- (void)setMultiSnapCount:(long long)arg1;
- (void)setMultiSnapIndex:(long long)arg1;
- (void)setPinchToZoom:(double)arg1;
- (void)setPosterId:(id)arg1;
- (void)setRollMaxDegree:(double)arg1;
- (void)setRollMinDegree:(double)arg1;
- (void)setSnapTimeIsLoop:(_Bool)arg1;
- (void)setSnapTimeSec:(double)arg1;
- (void)setSource:(long long)arg1;
- (void)setStickerPackUnlockableIdList:(id)arg1;
- (void)setStoryViewId:(id)arg1;
- (void)setUnlockablesSnapInfo:(id)arg1;
- (void)setViewTimeSec:(double)arg1;
- (void)setWithAnimated:(_Bool)arg1;
- (void)setWithAttachment:(_Bool)arg1;

@end

