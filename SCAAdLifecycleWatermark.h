//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@class NSNumber, NSString;

@interface SCAAdLifecycleWatermark : SCAUserTrackedEvent
{
    NSNumber *lastBackgroundTimestamp;
    NSNumber *lastForegroundTimestamp;
    NSNumber *viewingSessionStartTimestamp;
    NSNumber *viewingSessionEndTimestamp;
    NSNumber *adRequestSubmitTimestamp;
    NSNumber *adRequestConnectionDownloadBandwidthBps;
    NSNumber *adRequestCompleteTimestamp;
    NSNumber *adRequestNetworkStatusCode;
    NSNumber *adRequestResponseDeserializationStartTimestamp;
    NSNumber *adRequestResponseDeserializationEndTimestamp;
    NSNumber *adMediaDownloadStartTimestamp;
    NSNumber *adMediaConnectionDownloadBandwidthBps;
    NSNumber *adMediaDownloadEndTimestamp;
    NSNumber *adMediaDownloadCacheHit;
    NSNumber *adMediaFileSize;
    NSNumber *adInsertionTimestamp;
    NSNumber *adFirstViewStartTimestamp;
    NSNumber *adFirstViewFinishTimestamp;
    NSNumber *mediaLoadedOnEntry;
    NSNumber *mediaLoadedOnExit;
    NSNumber *loadingScreenTimeSec;
    NSNumber *adIndexPos;
    NSNumber *noFillAdNotRequestCount;
    NSNumber *noFillAdRequestFail;
    NSNumber *noFillAdRequestInProgressCount;
    NSNumber *noFillAdRequestInProgressTimestamp;
    NSNumber *noFillAdMediaDownloadInProgressCount;
    NSNumber *noFillAdMediaDownloadInProgressTimestamp;
    NSNumber *noFillAdMediaDownloadErrorCount;
    NSNumber *noFillAdNotBrandSafeCount;
    NSNumber *streamingEnabled;
    NSNumber *stallOnStartDurationMillis;
    NSNumber *firstStallMediaTimeMillis;
    NSNumber *firstStallDurationMillis;
    NSNumber *totalStallDurationMillis;
    NSNumber *totalStallCount;
    long long mediaType;
    long long adProductSourceType;
    NSString *adRequestUrl;
    NSString *adType;
    NSString *adId;
    NSString *adRequestId;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)getAdFirstViewFinishTimestamp;
- (long long)getAdFirstViewStartTimestamp;
- (id)getAdId;
- (long long)getAdIndexPos;
- (long long)getAdInsertionTimestamp;
- (long long)getAdMediaConnectionDownloadBandwidthBps;
- (_Bool)getAdMediaDownloadCacheHit;
- (long long)getAdMediaDownloadEndTimestamp;
- (long long)getAdMediaDownloadStartTimestamp;
- (long long)getAdMediaFileSize;
- (long long)getAdProductSourceType;
- (long long)getAdRequestCompleteTimestamp;
- (long long)getAdRequestConnectionDownloadBandwidthBps;
- (id)getAdRequestId;
- (long long)getAdRequestNetworkStatusCode;
- (long long)getAdRequestResponseDeserializationEndTimestamp;
- (long long)getAdRequestResponseDeserializationStartTimestamp;
- (long long)getAdRequestSubmitTimestamp;
- (id)getAdRequestUrl;
- (id)getAdType;
- (id)getEventName;
- (long long)getEventQoS;
- (long long)getFirstStallDurationMillis;
- (long long)getFirstStallMediaTimeMillis;
- (long long)getLastBackgroundTimestamp;
- (long long)getLastForegroundTimestamp;
- (double)getLoadingScreenTimeSec;
- (_Bool)getMediaLoadedOnEntry;
- (_Bool)getMediaLoadedOnExit;
- (long long)getMediaType;
- (long long)getNoFillAdMediaDownloadErrorCount;
- (long long)getNoFillAdMediaDownloadInProgressCount;
- (long long)getNoFillAdMediaDownloadInProgressTimestamp;
- (long long)getNoFillAdNotBrandSafeCount;
- (long long)getNoFillAdNotRequestCount;
- (_Bool)getNoFillAdRequestFail;
- (long long)getNoFillAdRequestInProgressCount;
- (long long)getNoFillAdRequestInProgressTimestamp;
- (double)getPerUserSamplingRate;
- (long long)getStallOnStartDurationMillis;
- (_Bool)getStreamingEnabled;
- (long long)getTotalStallCount;
- (long long)getTotalStallDurationMillis;
- (long long)getViewingSessionEndTimestamp;
- (long long)getViewingSessionStartTimestamp;
- (id)init;
- (void)setAdFirstViewFinishTimestamp:(long long)arg1;
- (void)setAdFirstViewStartTimestamp:(long long)arg1;
- (void)setAdId:(id)arg1;
- (void)setAdIndexPos:(long long)arg1;
- (void)setAdInsertionTimestamp:(long long)arg1;
- (void)setAdMediaConnectionDownloadBandwidthBps:(long long)arg1;
- (void)setAdMediaDownloadCacheHit:(_Bool)arg1;
- (void)setAdMediaDownloadEndTimestamp:(long long)arg1;
- (void)setAdMediaDownloadStartTimestamp:(long long)arg1;
- (void)setAdMediaFileSize:(long long)arg1;
- (void)setAdProductSourceType:(long long)arg1;
- (void)setAdRequestCompleteTimestamp:(long long)arg1;
- (void)setAdRequestConnectionDownloadBandwidthBps:(long long)arg1;
- (void)setAdRequestId:(id)arg1;
- (void)setAdRequestNetworkStatusCode:(long long)arg1;
- (void)setAdRequestResponseDeserializationEndTimestamp:(long long)arg1;
- (void)setAdRequestResponseDeserializationStartTimestamp:(long long)arg1;
- (void)setAdRequestSubmitTimestamp:(long long)arg1;
- (void)setAdRequestUrl:(id)arg1;
- (void)setAdType:(id)arg1;
- (void)setFirstStallDurationMillis:(long long)arg1;
- (void)setFirstStallMediaTimeMillis:(long long)arg1;
- (void)setLastBackgroundTimestamp:(long long)arg1;
- (void)setLastForegroundTimestamp:(long long)arg1;
- (void)setLoadingScreenTimeSec:(double)arg1;
- (void)setMediaLoadedOnEntry:(_Bool)arg1;
- (void)setMediaLoadedOnExit:(_Bool)arg1;
- (void)setMediaType:(long long)arg1;
- (void)setNoFillAdMediaDownloadErrorCount:(long long)arg1;
- (void)setNoFillAdMediaDownloadInProgressCount:(long long)arg1;
- (void)setNoFillAdMediaDownloadInProgressTimestamp:(long long)arg1;
- (void)setNoFillAdNotBrandSafeCount:(long long)arg1;
- (void)setNoFillAdNotRequestCount:(long long)arg1;
- (void)setNoFillAdRequestFail:(_Bool)arg1;
- (void)setNoFillAdRequestInProgressCount:(long long)arg1;
- (void)setNoFillAdRequestInProgressTimestamp:(long long)arg1;
- (void)setStallOnStartDurationMillis:(long long)arg1;
- (void)setStreamingEnabled:(_Bool)arg1;
- (void)setTotalStallCount:(long long)arg1;
- (void)setTotalStallDurationMillis:(long long)arg1;
- (void)setViewingSessionEndTimestamp:(long long)arg1;
- (void)setViewingSessionStartTimestamp:(long long)arg1;

@end

