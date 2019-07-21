//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@class NSNumber, NSString, SCACreativeTools;

@interface SCAPreviewVisibleSaveLatency : SCAUserTrackedEvent
{
    NSNumber *totalLatencyMs;
    NSNumber *contentDurationSec;
    long long saveType;
    long long mediaType;
    NSString *analyticsVersion;
    NSString *splits;
    SCACreativeTools *creativeTools;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getAnalyticsVersion;
- (double)getContentDurationSec;
- (id)getCreativeTools;
- (id)getEventName;
- (long long)getEventQoS;
- (long long)getMediaType;
- (double)getPerUserSamplingRate;
- (long long)getSaveType;
- (id)getSplits;
- (long long)getTotalLatencyMs;
- (id)init;
- (void)setAnalyticsVersion:(id)arg1;
- (void)setContentDurationSec:(double)arg1;
- (void)setCreativeTools:(id)arg1;
- (void)setMediaType:(long long)arg1;
- (void)setSaveType:(long long)arg1;
- (void)setSplits:(id)arg1;
- (void)setTotalLatencyMs:(long long)arg1;

@end
