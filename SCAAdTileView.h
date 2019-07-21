//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@class NSNumber, NSString;

@interface SCAAdTileView : SCAUserTrackedEvent
{
    NSNumber *isViewedStorySession;
    NSNumber *isViewedAppSession;
    NSNumber *timeViewed;
    NSNumber *sequenceIdPerStorySession;
    NSNumber *minTileVisibility;
    long long storyType;
    NSString *adsnapLineItemId;
    NSString *adsnapPlacementId;
    NSString *adId;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getAdId;
- (id)getAdsnapLineItemId;
- (id)getAdsnapPlacementId;
- (id)getEventName;
- (long long)getEventQoS;
- (_Bool)getIsViewedAppSession;
- (_Bool)getIsViewedStorySession;
- (double)getMinTileVisibility;
- (double)getPerUserSamplingRate;
- (long long)getSequenceIdPerStorySession;
- (long long)getStoryType;
- (double)getTimeViewed;
- (id)init;
- (void)setAdId:(id)arg1;
- (void)setAdsnapLineItemId:(id)arg1;
- (void)setAdsnapPlacementId:(id)arg1;
- (void)setIsViewedAppSession:(_Bool)arg1;
- (void)setIsViewedStorySession:(_Bool)arg1;
- (void)setMinTileVisibility:(double)arg1;
- (void)setSequenceIdPerStorySession:(long long)arg1;
- (void)setStoryType:(long long)arg1;
- (void)setTimeViewed:(double)arg1;

@end

