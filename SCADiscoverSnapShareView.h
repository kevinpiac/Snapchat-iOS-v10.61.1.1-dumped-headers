//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCADiscoverSnapShareBase.h"

@class NSNumber, NSString;

@interface SCADiscoverSnapShareView : SCADiscoverSnapShareBase
{
    NSNumber *caption;
    NSNumber *drawing;
    NSNumber *snapAvailable;
    NSNumber *editionAvailable;
    NSNumber *snapTimeSec;
    NSNumber *fullView;
    long long filterVisual;
    long long filterInfo;
    NSString *trackingId;
    NSString *filter;
    NSString *filterType;
    NSString *filterGeofence;
    NSString *filterSponsor;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)getCaption;
- (_Bool)getDrawing;
- (long long)getEditionAvailable;
- (id)getEventName;
- (long long)getEventQoS;
- (id)getFilter;
- (id)getFilterGeofence;
- (long long)getFilterInfo;
- (id)getFilterSponsor;
- (id)getFilterType;
- (long long)getFilterVisual;
- (_Bool)getFullView;
- (double)getPerUserSamplingRate;
- (long long)getSnapAvailable;
- (double)getSnapTimeSec;
- (id)getTrackingId;
- (id)init;
- (void)setCaption:(long long)arg1;
- (void)setDrawing:(_Bool)arg1;
- (void)setEditionAvailable:(long long)arg1;
- (void)setFilter:(id)arg1;
- (void)setFilterGeofence:(id)arg1;
- (void)setFilterInfo:(long long)arg1;
- (void)setFilterSponsor:(id)arg1;
- (void)setFilterType:(id)arg1;
- (void)setFilterVisual:(long long)arg1;
- (void)setFullView:(_Bool)arg1;
- (void)setSnapAvailable:(long long)arg1;
- (void)setSnapTimeSec:(double)arg1;
- (void)setTrackingId:(id)arg1;

@end

