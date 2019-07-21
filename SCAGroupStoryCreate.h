//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@class NSNumber, NSString;

@interface SCAGroupStoryCreate : SCAUserTrackedEvent
{
    NSNumber *isSuccessful;
    NSNumber *viewTimeSec;
    NSNumber *withDisplayName;
    NSNumber *failedCount;
    NSNumber *hasSeenSelectViewers;
    NSNumber *posterCount;
    NSNumber *viewerCount;
    NSNumber *withMap;
    NSNumber *withGeocodeDisplay;
    NSNumber *withGeoPrivacy;
    NSNumber *withAutosave;
    NSNumber *readGeoPrivacy;
    NSNumber *geoToggleCount;
    NSNumber *reverseGeocodeMs;
    long long source;
    long long createType;
    NSString *publicationId;
    NSString *mischiefId;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)getCreateType;
- (id)getEventName;
- (long long)getEventQoS;
- (long long)getFailedCount;
- (long long)getGeoToggleCount;
- (_Bool)getHasSeenSelectViewers;
- (_Bool)getIsSuccessful;
- (id)getMischiefId;
- (double)getPerUserSamplingRate;
- (long long)getPosterCount;
- (id)getPublicationId;
- (_Bool)getReadGeoPrivacy;
- (double)getReverseGeocodeMs;
- (long long)getSource;
- (double)getViewTimeSec;
- (long long)getViewerCount;
- (_Bool)getWithAutosave;
- (_Bool)getWithDisplayName;
- (_Bool)getWithGeoPrivacy;
- (_Bool)getWithGeocodeDisplay;
- (_Bool)getWithMap;
- (id)init;
- (void)setCreateType:(long long)arg1;
- (void)setFailedCount:(long long)arg1;
- (void)setGeoToggleCount:(long long)arg1;
- (void)setHasSeenSelectViewers:(_Bool)arg1;
- (void)setIsSuccessful:(_Bool)arg1;
- (void)setMischiefId:(id)arg1;
- (void)setPosterCount:(long long)arg1;
- (void)setPublicationId:(id)arg1;
- (void)setReadGeoPrivacy:(_Bool)arg1;
- (void)setReverseGeocodeMs:(double)arg1;
- (void)setSource:(long long)arg1;
- (void)setViewTimeSec:(double)arg1;
- (void)setViewerCount:(long long)arg1;
- (void)setWithAutosave:(_Bool)arg1;
- (void)setWithDisplayName:(_Bool)arg1;
- (void)setWithGeoPrivacy:(_Bool)arg1;
- (void)setWithGeocodeDisplay:(_Bool)arg1;
- (void)setWithMap:(_Bool)arg1;

@end

