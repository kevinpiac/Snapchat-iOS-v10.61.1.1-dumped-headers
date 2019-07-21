//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@class NSNumber, NSString;

@interface SCADirectSnapReceive : SCAUserTrackedEvent
{
    NSNumber *caption;
    NSNumber *camera;
    NSNumber *drawing;
    NSNumber *flash;
    NSNumber *snapTimeSec;
    NSNumber *snapTimeIsLoop;
    long long filterType;
    long long source;
    long long mediaType;
    long long filterVisual;
    long long filterInfo;
    NSString *filter;
    NSString *snapId;
    NSString *filterGeofence;
    NSString *filterSponsor;
    NSString *filterLensId;
    NSString *lensOptionId;
    NSString *correspondentId;
    NSString *mischiefId;
    NSString *rankingId;
    NSString *ghost_correspondent_id;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)getCamera;
- (long long)getCaption;
- (id)getCorrespondentId;
- (_Bool)getDrawing;
- (id)getEventName;
- (long long)getEventQoS;
- (id)getFilter;
- (id)getFilterGeofence;
- (long long)getFilterInfo;
- (id)getFilterLensId;
- (id)getFilterSponsor;
- (long long)getFilterType;
- (long long)getFilterVisual;
- (_Bool)getFlash;
- (id)getGhost_correspondent_id;
- (id)getLensOptionId;
- (long long)getMediaType;
- (id)getMischiefId;
- (double)getPerUserSamplingRate;
- (id)getRankingId;
- (id)getSnapId;
- (_Bool)getSnapTimeIsLoop;
- (double)getSnapTimeSec;
- (long long)getSource;
- (id)init;
- (void)setCamera:(long long)arg1;
- (void)setCaption:(long long)arg1;
- (void)setCorrespondentId:(id)arg1;
- (void)setDrawing:(_Bool)arg1;
- (void)setFilter:(id)arg1;
- (void)setFilterGeofence:(id)arg1;
- (void)setFilterInfo:(long long)arg1;
- (void)setFilterLensId:(id)arg1;
- (void)setFilterSponsor:(id)arg1;
- (void)setFilterType:(long long)arg1;
- (void)setFilterVisual:(long long)arg1;
- (void)setFlash:(_Bool)arg1;
- (void)setGhost_correspondent_id:(id)arg1;
- (void)setLensOptionId:(id)arg1;
- (void)setMediaType:(long long)arg1;
- (void)setMischiefId:(id)arg1;
- (void)setRankingId:(id)arg1;
- (void)setSnapId:(id)arg1;
- (void)setSnapTimeIsLoop:(_Bool)arg1;
- (void)setSnapTimeSec:(double)arg1;
- (void)setSource:(long long)arg1;

@end

