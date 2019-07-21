//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@class NSNumber, NSString, SCACreativeTools;

@interface SCAPreviewLoadLatency : SCAUserTrackedEvent
{
    NSNumber *totalLatencyMs;
    long long mediaType;
    long long galleryMediaType;
    NSString *analyticsVersion;
    NSString *flavor;
    NSString *splits;
    SCACreativeTools *creativeTools;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getAnalyticsVersion;
- (id)getCreativeTools;
- (id)getEventName;
- (long long)getEventQoS;
- (id)getFlavor;
- (long long)getGalleryMediaType;
- (long long)getMediaType;
- (double)getPerUserSamplingRate;
- (id)getSplits;
- (long long)getTotalLatencyMs;
- (id)init;
- (void)setAnalyticsVersion:(id)arg1;
- (void)setCreativeTools:(id)arg1;
- (void)setFlavor:(id)arg1;
- (void)setGalleryMediaType:(long long)arg1;
- (void)setMediaType:(long long)arg1;
- (void)setSplits:(id)arg1;
- (void)setTotalLatencyMs:(long long)arg1;

@end

